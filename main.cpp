#include <iostream>
#include <fstream>
#include "numCheck.h"
#include "numChange.h"
#include "numAdd.h"
#include "numRemove.h"
using namespace std;
// Name: Johnny Diep
/* Purpose: Array Creation and Manipulation */
int main() {
    // Open File
    ifstream myfile;
    myfile.open("A1input.txt");
    // Variable Declarations
    int number;
    int counter = 0;
    // Array Creation
    int* myarray = new int[100];
    int size = 100;
    // While not at end of file, Take each number and add it to the array
    while(!myfile.eof()) {
        myfile >> number;
        myarray[counter] = number;
        counter++;
    }
    // Close file
    myfile.close();
    // Variable for user input
    string user_input;
    // Loop user prompts until user quits
    while (true) {
        // Menu
        cout << "1) Number Check in Array \n"
                "2) Modify Value in Array \n"
                "3) Add a new integer in the Array \n"
                "4) Remove an integer in the Array \n"
                "5) Quit \n";
        cin >> user_input;
        // Check if an integer exists in the array
        if (user_input == "1") {
            cout << "What number do you want to check?" << endl;
            int user_num;
            cin >> user_num;
            // Number checking Function
            int index = numCheck(myarray, user_num, size);
            if (index != -1)
                cout << "The number " << user_num << " is present at index: " << index << endl;
            // Couldn't find number
            else
                cout << "The number " << user_num << " was not found" << endl;
        }
        // Change number at index
        else if (user_input == "2") {
            // Variable declarations
            int index;
            int new_value;
            string input_string;
            // User input
            cout << "Enter the index that you would like to change: " << endl;
            cin >> input_string;
                try {
                    // Convert the string into an integer if possible (got idea from CHATGPT)
                    index = stoi(input_string);
                    // Throws error if out of range of array
                    if (index < 0 || index >= size) {
                        throw out_of_range("Index out of range");
                    }
                    // User input
                    cout << "Enter the new value: " << endl;
                    cin >> input_string;
                    // Convert String to Integer
                    new_value = stoi(input_string);
                    // Calls function that makes the number change and returns the replaced number
                    int replaced_num = numChange(myarray, index, new_value);
                    // Prints the old and new value
                    cout << "Old Value: " << replaced_num << "\nNew Value: " << new_value << endl;
                }
                // Catch Out of range errors with array
                catch (out_of_range& e) {
                    cout << e.what() << endl;
                }
                // Catch type errors
                catch (invalid_argument&) {
                    cout << "Invalid Input" << endl;
                    //abort();
                }
        }
        // Add number to end of array
        else if (user_input == "3") {
            cout << "What number would you like to add to the end of the array?: " << endl;
            // Variable declaration
            int new_value;
            string input_string;
            // User input
            cin >> input_string;
            try {
                // Try converting string to integer
                new_value = stoi(input_string);
                // Calls function that adds number to array
                numAdd(myarray, size, new_value);
                cout << new_value << " added to the array" << endl;
                // Increment size
                size++;
            }
            // Catch Type error
            catch (invalid_argument&) {
                cout << "Invalid Input" << endl;
            }
        }
        // Remove number from array using index
        else if (user_input == "4") {
            cout << "What is the index of the number you'd like to remove?: " << endl;
            int remove_num;
            // User input
            cin >> remove_num;
            // Calls function to remove number
            numRemove(myarray, size, remove_num);
            // Decrements size
            size--;
        }
        // Exit loop
        else if (user_input == "5") {
            break;
        }
        // Invalid Input
        else {
            cout << "Invalid input, please try again \n";
        }
        cout << "The array is: " << endl;
        for (int i = 0; i < size; i++) {
            cout << myarray[i] << " ";
        }
        cout << endl;
    }
    delete[] myarray;
    return 0;
}
