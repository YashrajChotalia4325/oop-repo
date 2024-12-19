#include <iostream> 
#include <string>
using namespace std;

//Class Declrartion
class Student {
    string name;
    int roll_number;
    string class_name;
    char division;
    string dob;
    string blood_group;
    string contact_address;
    string telephone;
    string driving_lisence;

public:
   static int student_count; //Keeps the count of the students

//Constructor 
   Student() {
    name = " ";
    roll_number = 0;
    class_name = " ";
    division = 'A';
    dob = " ";
    blood_group = " ";
    contact_address = " ";
    telephone = " ";
    driving_lisence = " ";
    student_count++;
   }

//Parameterized Contructor
   Student (string n, int r, string c, char d, string birth, string bg, string ca, string t, string dl){
    name = n;
    roll_number = r;
    class_name = c;
    division = d;
    dob = birth;
    blood_group = bg;
    contact_address = ca;
    telephone = t;
    driving_lisence = dl;
    student_count++;
   }

//Copy Constructor
   Student(const Student &s){
    name = s.name;
    roll_number = s.roll_number;
    class_name = s.class_name;
    division = s.division;
    dob = s.dob;
    blood_group = s.blood_group;
    contact_address = s.contact_address;
    telephone = s.telephone;
    driving_lisence = s.driving_lisence;
    student_count++;    
   }

//Destructor
   ~Student(){
    student_count--;
   }

//Displays the total Number of students
   static void total_students(){
    cout << "Total Students = " << student_count << endl;
   }

   void display() {
    cout << "Name = " << name << endl;
    cout << "Roll Number = " << roll_number << endl;
    cout << "Class Name = " << class_name << endl;
    cout << "Division = " << division << endl;
    cout << "Date of Birth = " << dob << endl;
    cout << "Blood Group = " << blood_group << endl;
    cout << "Contact Address = " << contact_address << endl;
    cout << "Telephone = " << telephone << endl;
    cout << "Driving Liscense = " << driving_lisence << endl;
   }
   friend void showData (Student &s); //friend member function which will display the data
};

int Student::student_count = 0; //Initializes static function
void showData (Student &s){
   s.display();
}

int main(){
    Student *s1 = new Student("Yashraj Chotalia", 213, "SE", 'A', "04/03/2005", "B+", "Pune", "34562346", "234EVIHBCR");

    Student s2("Rohit Sharma", 203, "TE", 'A', "14/06/1975", "A+", "Pune", "3456224346", "23F4EVIHBCR");

    showData(*s1);
    cout << endl;
    showData(s2);

    Student::total_students();
    delete s1;
    Student::total_students();

    return 0;
} 