//
//  RegressionTree.cpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#include "RegressionTree.hpp"

// construct DataFrame for children following split
// return two dataframes, one with split cat, one without
TwoDataFrame RegressionTree::splitData(const DataFrame& dataBefore, int feature, float value)
{
    std::vector<float> trueSplit; // indexes where category present
    std::vector<float> falseSplit; // indexes where category absent

    int idx = 0;
    for(float i : dataBefore[feature]) {

        float val = dataBefore[feature][idx];

        if (val < value) {
            // value is smaller than split value, add index to trueSplit

            trueSplit.push_back(idx);
        } else {

            falseSplit.push_back(idx);
        };
        idx += 1;
        
    }

    int numRows = dataBefore.size();
    DataFrame leftData;
    std::vector<float> rowBuffer;
    for (int row = 0; row < numRows; row++) {
        int i = 0;
        for(int col : trueSplit) {

            rowBuffer.push_back(dataBefore[row][col]);
            i += 1;
        }
        leftData.push_back(rowBuffer);
        rowBuffer.clear();

    }


    DataFrame rightData;
    for (int row = 0; row < numRows; row++) {
        int i = 0;
        for(int col : falseSplit) {
            rowBuffer.push_back(dataBefore[row][col]);
            i += 1;
        }
        rightData.push_back(rowBuffer);
        rowBuffer.clear();

    }

    TwoDataFrame returnObj;
    returnObj.left = leftData;
    returnObj.right = rightData;
    return returnObj;
}


// recursively add children nodes until stopping condition satisfied
// uncomment printing statements of tree construction
// funcion should alter the node object
void RegressionTree::constructTree(Node* nodeP) {

    const std::vector<float> outputsBefore = (nodeP->trainingData)[(nodeP->trainingData).size() - 1];
    // if resultant mse from best split less than current mse recurse on children (gain>0)
    //float parent_mse = Node::getMSE(outputsBefore);

    if (nodeP->bestSplit.resultantGain > 0) {
        // recurse on children

        TwoDataFrame childrensData = RegressionTree::splitData(nodeP->trainingData, nodeP->bestSplit.feature, nodeP->bestSplit.value);

        // if data present in split data then build a child node
        if (childrensData.left[0].size() > 0) {

            Node* newLeftChild = new Node(childrensData.left);
            nodeP->childLeftP = newLeftChild;
            RegressionTree::constructTree(nodeP->childLeftP);
        }

        // if data present in split data then build a child node
        if (childrensData.right[0].size() > 0) {

            Node* newRightChild = new Node(childrensData.right);
            nodeP->childRightP = newRightChild;
            RegressionTree::constructTree(nodeP->childRightP);
        }
    
    };
    
}

void RegressionTree::deleteChildren(Node* nodeP) {

    if (nodeP->childRightP != NULL) {
        // delete right child node
        RegressionTree::deleteChildren(nodeP->childRightP);
    }
    if (nodeP->childLeftP != NULL) {
        // at delete left child node
        RegressionTree::deleteChildren(nodeP->childLeftP);
    }
    delete nodeP;
};

// traverse tree with observations until reach leaf and return prediction
float RegressionTree::recursivelyPredict(Node* nodeP, std::vector<float> observations) {
    float obsVal = observations[nodeP->bestSplit.feature];
    //initialize predictClass
    float predictValue = 0.0;


    if ((nodeP->childLeftP == NULL) && (nodeP->childRightP == NULL)) {
        // leaf node
        // return mean outcome value of all data
        
        const std::vector<float> outcomes = (nodeP->trainingData)[(nodeP->trainingData).size() - 1];
        auto const count = static_cast<float>(outcomes.size());
        predictValue =  std::reduce(outcomes.begin(), outcomes.end()) / count;
        
        
    } else if (obsVal < nodeP->bestSplit.value) {
        // recurse on left child
        
        predictValue = RegressionTree::recursivelyPredict(nodeP->childLeftP, observations);
        
    } else {
        // recurse on right child

        predictValue = RegressionTree::recursivelyPredict(nodeP->childRightP, observations);
    }
    return predictValue;

}


std::vector<float> RegressionTree::predict(std::string path) {

    CSVReader reader;
    DataFrame testData = reader.read(path);
    std::vector<float> predictions;
    // iterate through each observation and make predictions
    int numObs = testData[0].size();
    int numFeatures = testData.size();

    for (int obs = 0; obs < numObs; obs++) {

        // build obs vector and make predictions
        std::vector<float> observations;
        for (int feature = 0; feature < numFeatures; feature++) {
            observations.push_back(testData[feature][obs]);
        }

        predictions.push_back(RegressionTree::recursivelyPredict(this->rootP, observations));
        
    }
    
    return predictions;
};



RegressionTree::RegressionTree(std::string trainPath) {
    CSVReader reader;
    DataFrame trainingData = reader.read(trainPath);
    Node* rootP = new Node(trainingData);
    //call construct tree on root
    constructTree(rootP);
    this->rootP = rootP;

};

RegressionTree::~RegressionTree() {
    //will need to explicitly delete all allocated memory (traverse tree and delete nodes)
    RegressionTree::deleteChildren(this->rootP);
};
