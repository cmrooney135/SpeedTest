#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int size;
    // Get command line input
    if (argc > 1) {
        size = stoi(argv[1]);
    } else {
        size = 10000;
    }
    cout << "Looking for size: " << size << endl;
    
    // Declare a vector of longs to store the numbers
    vector<long> longVec;
    
    // Read size numbers from numbers.txt
    int count = 0;
    string line;
    ifstream infile;
    infile.open("numbers.txt");
    while (count < size){
        getline(infile,line);
        long n = stol(line);
        longVec.push_back(n);
        ++count;
    }
    
    // Print the vector size (to make sure it matches the size printed above)
    cout << "vector size: " << longVec.size() << endl;


    // Bubble Sort the vector
    long temp;
    bool swap = true;
    while(swap){
        swap = false;
        for(int i=0; i+1<longVec.size(); i++){
            if(longVec.at(i) > longVec.at(i+1)) {
                temp = longVec.at(i);
                longVec.at(i) = longVec.at(i+1);
                longVec.at(i+1) = temp;
                swap = true;
            }
        }
    }


    // TODO: Print the first and last ten numbers from the vector to the console
    // TODO: Print the first and last ten numbers from the vector to the console
    int i = 0;
    cout << "first ten: " << endl;
    for(i = 0; i<10; i++){
        cout << "" << to_string(i+1) << ": " << to_string(longVec.at(i)) << endl;
    }

    cout << "last ten: " << endl;
    for (i = longVec.size() - 10; i < longVec.size(); i++){
        cout << "" << to_string(i+1) << ": " << to_string(longVec.at(i)) << endl;
    }

    return 0;
}