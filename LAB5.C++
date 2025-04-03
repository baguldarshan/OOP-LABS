/*Design a class with datamembers real and imaginary numbers. Create a default 
constructor and assign datamember to zero. Create a parameterized constructor to 
give some value. Create a display function the complex number. Create a friend 
function to add two numbers and subtract two numbers*/ 
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }

    Complex(float a, float b) {
        real = a;
        imaginary = b;
    }

    friend Complex add(Complex c1, Complex c2);
    friend Complex sub(Complex c1, Complex c2);

    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

Complex sub(Complex c1, Complex c2) {
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

int main() {
    float x, y, p, q;

    Complex C1;
    cout << "Default Complex Number: ";
    C1.display();

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> x >> y;
    Complex C2(x, y);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> p >> q;
    Complex C3(p, q);

    cout << "First Complex Number: ";
    C2.display();
    cout << "Second Complex Number: ";
    C3.display();

    Complex sum = add(C2, C3);
    cout << "Sum: ";
    sum.display();

    Complex difference = sub(C2, C3);
    cout << "Difference: ";
    difference.display();

    return 0;
}
