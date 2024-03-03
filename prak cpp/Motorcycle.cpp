#pragma once

#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle {
private:
    string _motor_type;
    double _tank_capacity;

public:
    Motorcycle(string license_plate, string brand, int production_year, string color, string motor_type, double tank_capacity)
        : Vehicle(license_plate, brand, production_year, color), _motor_type(motor_type), _tank_capacity(tank_capacity) {}

    string get_motor_type() const {
        return _motor_type;
    }

    double get_tank_capacity() const {
        return _tank_capacity;
    }

    void set_motor_type(string motor_type) {
        _motor_type = motor_type;
    }

    void set_tank_capacity(double tank_capacity) {
        _tank_capacity = tank_capacity;
    }
};