#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct PersonalRecord {
    string name;
    string dob; // Date of Birth in format YYYY-MM-DD
    string telephone;

    // Overloading the < operator for sorting
    bool operator<(const PersonalRecord& other) const {
        return name < other.name; // Sort by name
    }
};

void displayRecords(const vector<PersonalRecord>& records) {
    cout << "Personal Records:\n";
    for (const auto& record : records) {
        cout << "Name: " << record.name 
             << ", DOB: " << record.dob 
             << ", Telephone: " << record.telephone << '\n';
    }
}

int main() {
    vector<PersonalRecord> records;
    int n;

    cout << "Enter the number of records: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the number input

    for (int i = 0; i < n; ++i) {
        PersonalRecord record;
        cout << "Enter name: ";
        getline(cin, record.name);
        cout << "Enter Date of Birth (YYYY-MM-DD): ";
        getline(cin, record.dob);
        cout << "Enter telephone number: ";
        getline(cin, record.telephone);
        records.push_back(record);
    }

    // Sort the records
    sort(records.begin(), records.end());

    // Display sorted records
    displayRecords(records);

    // Search for a record by name
    string searchName;
    cout << "Enter name to search: ";
    getline(cin, searchName);

    auto it = find_if(records.begin(), records.end(), 
                      [&searchName](const PersonalRecord& record) {
                          return record.name == searchName;
                      });

    if (it != records.end()) {
        cout << "Record found: Name: " << it->name 
             << ", DOB: " << it->dob 
             << ", Telephone: " << it->telephone << '\n';
    } else {
        cout << "Record not found for name: " << searchName << '\n';
    }

    return 0;
}