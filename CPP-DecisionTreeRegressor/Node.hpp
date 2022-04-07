//
//  Node.hpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#ifndef Node_hpp
#define Node_hpp

#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

// create an alias for the data structure we are going to use to store observations
using DataFrame = std::vector<std::vector<float>>;

struct bestSplitReturn
{
    float resultantGain;
    int feature;
    float value;
};

// instantiate the node in the heap, then don't need to explicitly allocate member
// variables memory in the heap
class Node
{
    // Access specifier
    public:
        //at some point need to make private and expose using getters and setters
        Node* childLeftP;
        Node* childRightP;
        DataFrame trainingData;
        bestSplitReturn bestSplit; // column index of split feature
        //float giniBefore;


        Node(const DataFrame& data); //constructor

        ~Node();

        Node* DeepCopy() {
            // READ ABOUT DEEP AND SHALLOW COPIES

            // copy stuff
            return this;
        }

        Node* ShallowCopy() {
            // READ ABOUT DEEP AND SHALLOW COPIES

            // copy stuff
            return this;
        }
        static float getMSE(const std::vector<float>& outcomes);
        static DataFrame getSplitTargets(const DataFrame& dataP, int feature, float value);
        static bestSplitReturn getBestSplit(const DataFrame& dataP); //don't pass by reference
    

};

#endif /* Node_hpp */
