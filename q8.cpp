// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }

    // Area calculation method
    double calculateArea() {
        return length * width;
    }
};

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);  // Create an object of Rectangle class

    double area = rect.calculateArea();  // Calculate the area of the rectangle

    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
