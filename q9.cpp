// 9. Define a class Circle and define an instance member function to find the area of the
// circle.

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double radius) {
        this->radius = radius;
    }

    // Area calculation method
    double calculateArea() {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);  // Create an object of Circle class

    double area = circle.calculateArea();  // Calculate the area of the circle

    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
