//
//  CSVReader.hpp
//  CPP-DecisionTreeRegressor
//
//  Created by Margot Geerts on 07/04/2022.
//

#ifndef CSVReader_hpp
#define CSVReader_hpp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "Node.hpp"

class CSVReader
{
    // Access specifier
    public:

    DataFrame read(std::string filePath);
};

#endif /* CSVReader_hpp */
