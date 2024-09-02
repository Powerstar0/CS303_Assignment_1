//
// Created by Johnny Diep on 8/29/24.
//

#include <iostream>
#include "numCheck.h"

using namespace std;

// Checks to see if a number exists in the array
// Returns index of number if found
// Returns -1 if no number is found
int numCheck(int array[], int num, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return i;
        }
    }
    return -1;
}
