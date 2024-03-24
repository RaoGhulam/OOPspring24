/*Rao Ghulam Mohi Uddin (23K-0001)*/

#include <iostream>
using namespace std;

class vehicle
{
public:
    string make;
    int model;
    int year;

    vehicle(string m, int mod, int y) : make(m), model(mod), year(y) {}
};

class car : public vehicle
{
public:
    int doors;
    float fuel_efficiency;

    car(string m, int mod, int y, int d, float e) : vehicle(m, mod, y), doors(d), fuel_efficiency(e) {}
};

class electric_car : public car
{
public:
    float battery_life;

    electric_car(string m, int mod, int y, int d, float e, float b) : car(m, mod, y, d, e), battery_life(b) {}

    void display()
    {
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
        cout << "Doors: " << doors << "\n";
        cout << "Fuel Efficiency: " << fuel_efficiency << "%\n";
        cout << "Battery Life: " << battery_life << "%\n";
    }
};

int main()
{
    electric_car electric_car("Audi", 1, 2024, 4, 90.0, 99.99);
    electric_car.display();

    return 0;
}