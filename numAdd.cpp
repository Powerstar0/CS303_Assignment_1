//
// Created by Johnny on 9/1/2024.
//

// Note: did use CHATGPT to check this part of the code specifically and for the *& addition
// A function that adds a new integer to the end of the array
void numAdd(int*& array, int size, int new_num) {
    // Creates a pointer to a new array integers that's one bigger than the previous
    int* new_array = new int[size+1];
    // Copies all the numbers from the previous array
    for (int i = 0; i < size; i++)
        new_array[i] = array[i];
    // Adds in new number to array
    new_array[size] = new_num;
    // Delete old array
    delete[] array;
    // Array is now the new array
    array = new_array;
}
