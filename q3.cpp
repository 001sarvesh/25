// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.

#include <iostream>

class Factorial {
private:
    int number;
    long long factorial;

public:
    // Constructor
    Factorial(int number) {
        this->number = number;
        factorial = 1;
    }

    // Factorial calculation method
    void calculateFactorial() {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
    }

    // Print method
    void displayFactorial() {
        std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    Factorial f(num);  // Create an object of Factorial class

    f.calculateFactorial();  // Calculate factorial
    f.displayFactorial();    // Display factorial

    return 0;
}
