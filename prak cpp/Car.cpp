#pragma once

#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle {
private:
    int _num_seats;
    int _num_doors;

public:
    Car(string license_plate, string brand, int production_year, string color, int num_seats, int num_doors)
        : Vehicle(license_plate, brand, production_year, color), _num_seats(num_seats), _num_doors(num_doors) {}

    int get_num_seats() const {
        return _num_seats;
    }

    int get_num_doors() const {
        return _num_doors;
    }

    void set_num_seats(int num_seats) {
        _num_seats = num_seats;
    }

    void set_num_doors(int num_doors) {
        _num_doors = num_doors;
    }
};