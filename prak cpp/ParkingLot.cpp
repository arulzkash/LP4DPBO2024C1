#pragma once

#include <iostream>

using namespace std;

class ParkingLot {
private:
    int _capacity;
    int _num_vehicles;

public:
    ParkingLot(int capacity)
        : _capacity(capacity), _num_vehicles(0) {}

    int get_capacity() const {
        return _capacity;
    }

    void set_capacity(int capacity) {
        _capacity = capacity;
    }

    int get_num_vehicles() const {
        return _num_vehicles;
    }

    void set_num_vehicles(int num_vehicles) {
        _num_vehicles = num_vehicles;
    }
};