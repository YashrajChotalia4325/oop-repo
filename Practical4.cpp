#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map <string, int> statePopulation;
    statePopulation["Maharashtra"] = 112233445;
    statePopulation["Uttar Pradesh"] = 111122223;
    statePopulation["West Bengal"] = 1111112000;
    statePopulation["Bihar"] = 3645746;

    string stateName;
    cout << "Enter the name of the state = ";
    getline (cin, stateName);

    auto it = statePopulation.find(stateName);

    if (it != statePopulation.end()) {
        cout << "The population of " << stateName << "is" << it -> second << endl;
    } else {
        cout << "State not found in the Map." << endl;
    }
    return 0;
}