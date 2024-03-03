#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string _license_plate;
    string _brand;
    int _production_year;
    string _color;

public:
    Vehicle(string license_plate, string brand, int production_year, string color)
        : _license_plate(license_plate), _brand(brand), _production_year(production_year), _color(color) {}

    virtual ~Vehicle() {}

    string get_license_plate() const {
        return _license_plate;
    }

    string get_brand() const {
        return _brand;
    }

    int get_production_year() const {
        return _production_year;
    }

    string get_color() const {
        return _color;
    }

    void set_license_plate(string license_plate) {
        _license_plate = license_plate;
    }

    void set_brand(string brand) {
        _brand = brand;
    }

    void set_production_year(int production_year) {
        _production_year = production_year;
    }

    void set_color(string color) {
        _color = color;
    }
};