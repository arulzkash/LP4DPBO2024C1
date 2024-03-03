#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "ParkingLot.cpp"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

using namespace std;

class Garage : public ParkingLot {
private:
    string _name;
    float _area;
    vector<Vehicle*> _vehicles;

public:
    Garage(string name, float area, int capacity)
        : ParkingLot(capacity), _name(name), _area(area) {}

    string get_name() const {
        return _name;
    }

    float get_area() const {
        return _area;
    }

    vector<Vehicle*> get_vehicles() const {
        return _vehicles;
    }

    void add_vehicle(Vehicle* vehicle) {
        if (dynamic_cast<Car*>(vehicle) || dynamic_cast<Motorcycle*>(vehicle)) {
            _vehicles.push_back(vehicle);
            set_num_vehicles(get_num_vehicles() + 1);
        } else {
            throw invalid_argument("Cannot add vehicle that is not an instance of Car or Motorcycle");
        }
    }

    void remove_vehicle(Vehicle* vehicle) {
        auto it = find(_vehicles.begin(), _vehicles.end(), vehicle);
        if (it != _vehicles.end()) {
            _vehicles.erase(it);
            set_num_vehicles(get_num_vehicles() - 1);
        }
    }

    void display_vehicles() const {
        int i = 1;
        for (const auto& vehicle : _vehicles) {
            cout << i << ". ";
            if (dynamic_cast<Car*>(vehicle)) {
                Car* car = dynamic_cast<Car*>(vehicle);
                cout << "Car - Brand: " << car->get_brand() << ", License Plate: " << car->get_license_plate()
                     << ", Production Year: " << car->get_production_year() << ", Color: " << car->get_color()
                     << ", Num Seats: " << car->get_num_seats() << ", Num Doors: " << car->get_num_doors() << endl;
            } else if (dynamic_cast<Motorcycle*>(vehicle)) {
                Motorcycle* motorcycle = dynamic_cast<Motorcycle*>(vehicle);
                cout << "Motorcycle - Brand: " << motorcycle->get_brand() << ", License Plate: " << motorcycle->get_license_plate()
                     << ", Production Year: " << motorcycle->get_production_year() << ", Color: " << motorcycle->get_color()
                     << ", Motor Type: " << motorcycle->get_motor_type() << ", Tank Capacity: " << motorcycle->get_tank_capacity() << endl;
            } else {
                cout << "Unknown Vehicle Type" << endl;
            }
            i++;
        }
    }
};