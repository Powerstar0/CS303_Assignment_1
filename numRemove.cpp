//
// Created by Johnny on 9/1/2024.
//


#include <iostream>
#include "numRemove.h"

using namespace std;


/* A function which intakes an index of an array and removes
 the integer altogether. */
void numRemove(int*& array, int size, int index) {
    // Counter to add to spots to new matrix
    int counter = 0;
    // Creates a matrix that's one spot less
    int* new_array = new int[size-1];
    // Finds the to be removed number to print later
    int removed_num = array[index];
    // Copies all the numbers except for one at the specified index
    for (int i = 0; i < size; i++) {
        if (i != index) {
            new_array[counter] = array[i];
            // Increments counter and goes up the array as it gets filled
            counter++;
        }
    }
    // Delete old array
    delete[] array;
    // Array is now newly created array
    array = new_array;
    // Displays to the user that number has been removed
    cout << removed_num << " has been removed from Index " << index << endl;
    cout << "The numbers in the array have been shifted to compensate" << endl;
}