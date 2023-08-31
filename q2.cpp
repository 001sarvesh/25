// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int hours = 0, int minutes = 0, int seconds = 0) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    // Setter methods
    void setTime(int hours, int minutes, int seconds) {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    // Print method
    void displayTime() {
        std::cout << "Time: " << hours << " hr " << minutes << " min " << seconds << " sec" << std::endl;
    }
};

int main() {
    Time t1;  // Create an object of Time class

    // Set values for time
    t1.setTime(3, 45, 20);

    // Display values of time
    t1.displayTime();

    return 0;
}

