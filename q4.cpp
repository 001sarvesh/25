// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include <iostream>

class LargestNumber {
private:
    int num1;
    int num2;
    int num3;

public:
    // Constructor
    LargestNumber(int num1, int num2, int num3) {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }

    // Largest number calculation method
    int findLargest() {
        int largest = num1;

        if (num2 > largest) {
            largest = num2;
        }
        if (num3 > largest) {
            largest = num3;
        }

        return largest;
    }
};

int main() {
    int n1, n2, n3;

    std::cout << "Enter three numbers: ";
    std::cin >> n1 >> n2 >> n3;

    LargestNumber ln(n1, n2, n3);  // Create an object of LargestNumber class

    int largest = ln.findLargest();  // Find the largest number

    std::cout << "Largest number: " << largest << std::endl;

    return 0;
}
