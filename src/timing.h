//
// Created by Caleb Moore on 10/18/21.
//

#ifndef INC_21F_PA02_CALEB2_TIMING_H
#define INC_21F_PA02_CALEB2_TIMING_H
#include "DSVector.h"
#include "DSList.h"
#include "algos.h"
#include <string>
#include "avlTree.h"
#include <chrono>
#include <fstream>
#include <ostream>
#include <algorithm>
#include <random>
#include <vector>
using namespace std;

class timing{
private:
    //the first number is the data set size order
    //the letter is for int, i, or strings, s
    //the last number is the number in terms of data set style
    std::chrono::time_point<std::chrono::high_resolution_clock>
        start, end;
    std::chrono::duration<double>
        time;
public:
    void make_data();
};
#endif //INC_21F_PA02_CALEB2_TIMING_H
