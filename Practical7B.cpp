#include <iostream>
#include <vector>
#include <algorithm> // for sort and binary_search

using namespace std;

int main() {
    vector<int> numbers;
    int n, input;

    // Get the number of elements from the user
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input the elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        numbers.push_back(input);
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Display the sorted numbers
    cout << "Sorted numbers:\n";
    for (const int& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Search for a number
    cout << "Enter a number to search for: ";
    cin >> input;

    // Use binary search to find the number
    if (binary_search(numbers.begin(), numbers.end(), input)) {
        cout << input << " is found in the list." << endl;
    } else {
        cout << input << " is not found in the list." << endl;
    }

    return 0;
}