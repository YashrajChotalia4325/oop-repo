#include <iostream>
using namespace std;
 
class Complex {
public:
   int real;
   int imag;

//Constructor
   Complex(){
    real = 0;
    imag = 0;
   }

//Parameterized Constructor
   Complex(int r, int i){
    real = r;
    imag = i;
   }

//Addition Operator
   Complex operator+ (Complex const &obj){
    Complex res; //Object Declaration
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
   }

//Multiplication Operator
   Complex operator* (Complex const &obj){
    Complex res; //Object Declaration
    res.real = real * obj.real - imag * obj.imag;
    res.imag = imag * obj.real + real * obj.imag;
    return res;
   }

//Output Operator
   friend ostream &operator<< (ostream &out, const Complex &c){
    out << c.real << "+i" << c.imag;
    return out;
   }

//Input Operator
   friend istream &operator>> (istream &in, Complex &c){
    in >> c.real >> c.imag;
    return in;
   }
};

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number (format: a + bi): ";
    cin >> c1;

    cout << "Enter second complex number (format: a + bi): ";
    cin >> c2;

    sum = c1 + c2;
    product = c1 * c2;

    cout << "Sum: "<< sum << endl;
    cout << "Product: "<< product << endl;

    return 0;
}