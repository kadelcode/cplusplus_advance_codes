#include <iostream>

using namespace std;

// creating a class
class Car {
    char name[30];
    char color[30];
    int plate_number;

    
    public:
    void speed() {
        cout << "This car is fast";
    }
};

// Main function
int main() {
    // instantiating the class(Car)
    Car c1; // c1 is an object
    c1.speed();
}