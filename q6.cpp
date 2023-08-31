// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include <iostream>

class Square {
private:
    int number;
    int count;

public:
    // Constructor
    Square(int number) {
        this->number = number;
        count = 0;
    }

    // Square calculation method
    int calculateSquare() {
        count++;  // Increment the count
        return number * number;
    }

    // Get count method
    int getCount() {
        return count;
    }
};

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    Square sq(num);  // Create an object of Square class

    int square = sq.calculateSquare();  // Calculate the square of the number
    std::cout << "Square: " << square << std::endl;

    square = sq.calculateSquare();  // Calculate the square again
    std::cout << "Square: " << square << std::endl;

    int count = sq.getCount();  // Get the count of square calculations
    std::cout << "Number of times calculateSquare() called: " << count << std::endl;

    return 0;
}
