#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void printArray(const vector<int> &array, int begin, int end) {
    for (int i = begin; i <= end; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
