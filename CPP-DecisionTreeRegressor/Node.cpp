//
//  Node.cpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#include "Node.hpp"

#include <iostream>
#include <typeinfo>


// calculate MSE of a vector of outcomes
float Node::getMSE(const std::vector<float>& outcomes) {
    // gini impurity is only calculated for the target class

    if (outcomes.size() == 0) {
        return 0.0;
    }

    float mseSum = 0.0;

    // mean outcome
    auto const count = static_cast<float>(outcomes.size());
    const float mean =  std::reduce(outcomes.begin(), outcomes.end()) / count;

    for(int i : outcomes) {
        
        mseSum += pow((i - mean), 2.0);

    }
    //std::cout << giniSum;
    return mseSum/count;
};

// split targets based on feature and category then return resultant split of outcomes
// returns a DataFrame with the first row containing target categories where feature
// category, second row contains target categories where feature category was absent
DataFrame Node::getSplitTargets(const DataFrame& dataP, int feature, float value) {
    std::vector<int> trueSplit; // indexes where category present
    std::vector<int> falseSplit; // indexes where absent present

    int idx = 0;
    for(int i : dataP[feature]) {

        float val = dataP[feature][idx];

        if (val < value) {
            // value is category, add index to trueSplit

            trueSplit.push_back(idx);
        } else {
            //std::cout << "false";
            falseSplit.push_back(idx);
        };
        idx += 1;
        
    }
    // replace inplace indexes with values of associated outcomes
    std::vector<float> allOutcomes = dataP[dataP.size() - 1];

    std::vector<float> trueOutcomes; // indexes where category present
    std::vector<float> falseOutcomes; // indexes where absent present


    for (auto& it : falseSplit) {
        falseOutcomes.push_back(allOutcomes[it]);
    }

    for (auto& it : trueSplit) {
        trueOutcomes.push_back(allOutcomes[it]);
    }

    DataFrame returnData{
        trueOutcomes,
        falseOutcomes};
    return returnData;
};

// return the best feature and category to split on and the resultant Gini
bestSplitReturn Node::getBestSplit(const DataFrame& dataP) {
    // giniImpurity before split
    const std::vector<float> outputsBefore = dataP[dataP.size() - 1];
    const float parent_mse = Node::getMSE(outputsBefore);
    // get number of features
    int features = dataP.size() - 1;
    bestSplitReturn bestChoice; // resultant GiniImpurity, feature
    bestChoice.resultantGain = 0.0;
    bestChoice.feature = 0;
    bestChoice.value = 0.0;
    for (int feature = 0; feature < features; feature++) {
        // get unique values of that feature
        std::vector<float> featureVec = dataP[feature];
        std::set<float> unique_vals(featureVec.begin(), featureVec.end());
        //std::cout << cats << "\n";
        // calculate Gini Impurity for splitting every feature by every category
        for (float val: unique_vals) {

            DataFrame split = Node::getSplitTargets(dataP, feature, val);
            float leftMSE = Node::getMSE(split[0]);
            float weightedLeftMSE = leftMSE * split[0].size() / outputsBefore.size();
            float rightMSE = Node::getMSE(split[1]);

            float weightedRightMSE = rightMSE * split[1].size() / outputsBefore.size();

            float gain = parent_mse - (weightedLeftMSE + weightedRightMSE);

            if(gain > bestChoice.resultantGain) {
                //splitting here improves on current gain
                bestChoice.resultantGain = gain;
                bestChoice.feature = feature;
                bestChoice.value = val;
            }
        }
    }

    return bestChoice;
}

Node::Node(const DataFrame& data) {
    // constructor

    // initialize pointers to children as null
    this->childLeftP = NULL;
    this->childRightP = NULL;
    const std::vector<float> outputsBefore = data[data.size() - 1];
    this->trainingData = data;


    // calculate best feature to split on
    this->bestSplit = Node::getBestSplit(data);

}

Node::~Node() {

}
