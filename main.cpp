#include <iostream>
#include <fstream>
#include "numCheck.h"
using namespace std;

/* Array Manipulation*/
int main() {
    ifstream myfile;
    myfile.open("/Users/johnnydiep/CLionProjects/CS303:Assignment_1/A1input.txt");
    int number;
    int counter = 0;
    int myarray[100];
    while(!myfile.eof()) {
        myfile >> number;
        myarray[counter] = number;
        counter++;
    }
    for (int i = 0; i < size(myarray); i++) {
        cout << myarray[i];
    }
    myfile.close();
    string user_input;
    while(true) {
        if
    }
    return 0;
}
