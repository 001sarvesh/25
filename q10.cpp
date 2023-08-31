// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc

#include <iostream>
#include <cmath>

class Area {
public:
    // Calculate area of a square
    static double calculateSquareArea(double side) {
        return side * side;
    }

    // Calculate area of a rectangle
    static double calculateRectangleArea(double length, double width) {
        return length * width;
    }

    // Calculate area of a circle
    static double calculateCircleArea(double radius) {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    double side, length, width, radius;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double squareArea = Area::calculateSquareArea(side);
    double rectangleArea = Area::calculateRectangleArea(length, width);
    double circleArea = Area::calculateCircleArea(radius);

    std::cout << "Area of the square: " << squareArea << std::endl;
    std::cout << "Area of the rectangle: " << rectangleArea << std::endl;
    std::cout << "Area of the circle: " << circleArea << std::endl;

    return 0;
}

