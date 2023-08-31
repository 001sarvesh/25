// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include <iostream>

class ReverseNumber {
private:
    int number;

public:
    // Constructor
    ReverseNumber(int number) {
        this->number = number;
    }

    // Reverse number calculation method
    int findReverse() {
        int reverse = 0;
        int remainder;

        while (number != 0) {
            remainder = number % 10;
            reverse = reverse * 10 + remainder;
            number /= 10;
        }

        return reverse;
    }
};

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    ReverseNumber rn(num);  // Create an object of ReverseNumber class

    int reverse = rn.findReverse();  // Find the reverse of the number

    std::cout << "Reverse number: " << reverse << std::endl;

    return 0;
}
