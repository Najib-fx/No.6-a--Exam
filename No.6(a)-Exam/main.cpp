#include <iostream>
using namespace std;

//Calculating the weight of an object
double calculateWeight(double mass) {
    const double gravity = 9.8; // Gravitational constant
    return mass * gravity;
}

int main() {
    double mass;

    //Enter the mass
    cout << "Enter the mass of the object (in kg): ";
    cin >> mass;

    // Calculation and display for the weight
    double weight = calculateWeight(mass);
    cout << "The weight of the object is: " << weight << " N" << endl;

    return 0;
}
