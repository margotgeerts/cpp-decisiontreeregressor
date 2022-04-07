//
//  main.cpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#include "RegressionTree.hpp"

// for python library
extern "C" int* regressionTree(char* trainPathP, char* testPathP) {
    //std::string trainPath(trainPathP);
    //std::string testPath(testPathP);
    //std::cout << trainPath;
    //CSVReader reader;
    //DataFrame test = reader.read("test/resources/test.csv");
    //char trainPath[] = "test/resources/train.csv";
    //std::string trainPathStr = "test/resources/train.csv";
    //std::string testPathStr = "test/resources/train.csv";
    RegressionTree* treeP = new RegressionTree(trainPathP);

    std::vector<float> predictions = treeP->predict(testPathP);

    delete treeP;
    // need to get length of predictions
    int predictionsSize = predictions.size();
    int* predictionsArray = new int[predictionsSize];
    int i = 0;
    for(int val : predictions) {
        predictionsArray[i] = val;
        i += 1;
    }


    return predictionsArray;

}
