#include <bits/stdc++.h>
#include "Garage.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

int main()
{
    // Create Garage 1
    Garage garage1("My Garage 1", 100.0, 10);

    // Create vehicles for Garage 1
    Car car1("ABC123", "Toyota", 2020, "Black", 5, 4);
    Car car2("DEF456", "Honda", 2019, "Red", 5, 4);
    Motorcycle motorcycle1("XYZ789", "Yamaha", 2021, "Blue", "Sport", 10);
    Motorcycle motorcycle2("GHI101", "Suzuki", 2022, "Green", "Cruiser", 15);

    // Add vehicles to Garage 1
    garage1.add_vehicle(&car1);
    garage1.add_vehicle(&car2);
    garage1.add_vehicle(&motorcycle1);
    garage1.add_vehicle(&motorcycle2);

    // Display information about Garage 1
    cout << "Garage 1 Name: " << garage1.get_name() << endl;
    cout << "Garage 1 Area: " << garage1.get_area() << endl;
    cout << "Garage 1 Parking Lot Capacity: " << garage1.get_capacity() << endl;
    cout << "Garage 1 Number of Vehicles: " << garage1.get_num_vehicles() << endl;
    cout << "Garage 1 Vehicles:" << endl;
    garage1.display_vehicles();

    // Create Garage 2
    Garage garage2("My Garage 2", 150.0, 15);

    // Create vehicles for Garage 2
    Car car3("JKL321", "Ford", 2018, "White", 4, 2);
    Car car4("MNO654", "Chevrolet", 2017, "Silver", 5, 4);
    Motorcycle motorcycle3("PQR987", "Kawasaki", 2020, "Yellow", "Cruiser", 12);
    Motorcycle motorcycle4("STU210", "Harley-Davidson", 2023, "Black", "Chopper", 18);

    // Add vehicles to Garage 2
    garage2.add_vehicle(&car3);
    garage2.add_vehicle(&car4);
    garage2.add_vehicle(&motorcycle3);
    garage2.add_vehicle(&motorcycle4);

    // Display information about Garage 2
    cout << "\nGarage 2 Name: " << garage2.get_name() << endl;
    cout << "Garage 2 Area: " << garage2.get_area() << endl;
    cout << "Garage 2 Parking Lot Capacity: " << garage2.get_capacity() << endl;
    cout << "Garage 2 Number of Vehicles: " << garage2.get_num_vehicles() << endl;
    cout << "Garage 2 Vehicles:" << endl;
    garage2.display_vehicles();

    return 0;
}