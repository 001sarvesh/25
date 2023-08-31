// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double real = 0.0, double imaginary = 0.0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Setter methods
    void setReal(double real) {
        this->real = real;
    }

    void setImaginary(double imaginary) {
        this->imaginary = imaginary;
    }

    // Print method
    void printComplex() {
        std::cout << "Complex Number: " << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1;  // Create an object of Complex class

    // Set values of complex number
    c1.setReal(3.5);
    c1.setImaginary(2.0);

    // Print values of complex number
    c1.printComplex();

    return 0;
}

 