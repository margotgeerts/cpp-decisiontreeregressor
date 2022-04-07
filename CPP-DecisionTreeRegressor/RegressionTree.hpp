//
//  RegressionTree.hpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#ifndef RegressionTree_hpp
#define RegressionTree_hpp

#include "CSVReader.hpp"
#include "Node.hpp"


struct TwoDataFrame
{
    DataFrame left;
    DataFrame right;
};

// instantiate the node in the heap, then don't need to explicitly allocate member
// variables memory in the heap
class RegressionTree
{
    // Access specifier
    public:
        //at some point need to make private and expose using getters and setters
        Node* rootP;
        //DataFrame trainingData;

        RegressionTree(std::string trainPath);

        ~RegressionTree();

        RegressionTree* DeepCopy() {
            // READ ABOUT DEEP AND SHALLOW COPIES

            // copy stuff
            return this;
        }

        RegressionTree* ShallowCopy() {
            // READ ABOUT DEEP AND SHALLOW COPIES

            // copy stuff
            return this;
        }
        
    
        // Traverse tree
        void traverseTree() const;
        static TwoDataFrame splitData(const DataFrame& dataBefore, int feature, float value);
        static void constructTree(Node* nodeP);
        std::vector<float> predict(std::string path);
        void deleteChildren(Node* nodeP);
        static float recursivelyPredict(Node* nodeP, std::vector<float> observations);
};


#endif /* RegressionTree_hpp */
