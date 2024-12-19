#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Step 1: Create and open an output file
    ofstream outputFile("example.txt");
    
    // Check if the file is open
    if (!outputFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    // Step 2: Write information to the file
    outputFile << "Hello, World!" << endl;
    outputFile << "This is a simple C++ file I/O example." << endl;

    // Step 3: Close the output file
    outputFile.close();

    // Step 4: Open the file again as an input file
    ifstream inputFile("example.txt");
    
    // Check if the file is open
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Step 5: Read information from the file
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl; // Output the line to the console
    }

    // Step 6: Close the input file
    inputFile.close();

    return 0;
}