#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;
};

class Fuel {
public:
    string fuelType;
    int mileage;
};

class Car : public Vehicle, public Fuel {
public:
    int seats;

    void input() {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Speed: ";
        cin >> speed;
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Seats: ";
        cin >> seats;
    }

    void display() {
        cout << "\nBrand: " << brand;
        cout << "\nSpeed: " << speed;
        cout << "\nFuel: " << fuelType;
        cout << "\nMileage: " << mileage;
        cout << "\nSeats: " << seats;
    }
};

int main() {
    Car c;
    c.input();
    c.display();
    return 0;
}