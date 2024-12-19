#include <iostream>
#include <string>
using namespace std;

class publication {
    string title;
    float price;

public:
  publication() {
    title = " ";
    price = 0.0;
  }

  void getData() {
    cout << "Enter Title = ";
    getline (cin, title);
    cout << "Enter Price = ";
    cin >> price;
    cin.ignore();
  }

  void display() {
    cout << "Title = " << title << endl;
    cout << "Price = " << price << endl;
  }
};

class book : public publication {
    int page_count;

public:
   book() : publication() {
    page_count = 0;
   }

   void getData() {
    publication::getData();
    cout << "Page Count = ";
    cin >> page_count;
    cin.ignore();
   }
   void display() {
    publication::display();
    cout << "Page Count = " << page_count << endl;
   }
};

class tape : public publication {
    float playing_time;

public:
    tape() : publication() {
        playing_time = 0.0;
    }

    void getData() {
        publication::getData();
        cout << "Enter Playing Time in minutes = ";
        cin >> playing_time;
        cin.ignore();
    }
    void display() {
        publication::display();
        cout << "Playing Time in minutes = " << playing_time << endl;
    }
};

int main() {
    book b;
    tape t;

    try {
        cout << "Enter details for the book : " << endl;
        b.getData();
        cout << "Enter details for the tape : " << endl;
        t.getData();
    } catch (...){
        cout << "ERROR";
        b = book();
        t = tape();
    }
    cout << "Book Details : " << endl;
    b.display();

    cout << "Tape Details : " << endl;
    t.display();

    return 0;
}