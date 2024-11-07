#include "recursiveSearch.h"

#include <iostream>
#include <vector>

using namespace std;

// Recursive Search
template<typename T>
int linSearch(vector<T>& items, const T& target, int pos_last) {
    if (pos_last > items.size()) {
        pos_last = items.size();
    }

    // Base case: If we've reached the end, return -1
    if (pos_last == 0) {
        return -1;
    }

    // Recursive case: Check the current element
    if (items[pos_last - 1] == target) {
        return pos_last - 1;
    }

    // Recursively search in the remaining part of the vector
    return linSearch(items, target, pos_last - 1);
}
// Instantiation
template int linSearch<int>(vector<int>& items, const int& target, int pos_last);