//
// Created by Johnny on 9/1/2024.
//

#include "numChange.h"

/* A function that can modify the value of an integer when called with the index of the integer in
the array and return the old value back to the user. The new value can be taken directly from the new array */
int numChange(int array[], int index, int new_num) {
    // Saves old number
    int old_num = array[index];
    // Replaces number at specified index with new number
    array[index] = new_num;
    // returns old number
    return old_num;
}
