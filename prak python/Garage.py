from typing import List
from ParkingLot import ParkingLot
from Car import Car  # Mengimpor kelas Car
from Motorcycle import Motorcycle  # Mengimpor kelas Motorcycle


class Garage(ParkingLot):
    def __init__(self, name: str, area: float, capacity: int):
        super().__init__(capacity)
        self._name = name
        self._area = area
        self._vehicles: List = []  # Mengubah tipe data menjadi List

    def get_name(self):
        return self._name

    def get_area(self):
        return self._area

    def get_vehicles(self):
        return self._vehicles

    def add_vehicle(self, vehicle):
        if isinstance(vehicle, (Car, Motorcycle)):
            self._vehicles.append(vehicle)
            self.num_vehicles += 1  # Menambahkan 1 ke num_vehicles pada ParkingLot
        else:
            raise ValueError(
                "Tidak dapat menambahkan kendaraan yang bukan instance dari Car atau Motorcycle"
            )

    def remove_vehicle(self, vehicle):
        self._vehicles.remove(vehicle)
        self.num_vehicles -= 1  # Mengurangkan 1 dari num_vehicles pada ParkingLot

    def display_vehicles(self):
        for i, vehicle in enumerate(self._vehicles, start=1):
            if isinstance(vehicle, Car):
                print(
                    f"{i}. Car - Brand: {vehicle.brand}, License Plate: {vehicle.license_plate}, Production Year: {vehicle.production_year}, Color: {vehicle.color}, Num Seats: {vehicle.num_seats}, Num Doors: {vehicle.num_doors}"
                )
            elif isinstance(vehicle, Motorcycle):
                print(
                    f"{i}. Motorcycle - Brand: {vehicle.brand}, License Plate: {vehicle.license_plate}, Production Year: {vehicle.production_year}, Color: {vehicle.color}, Motor Type: {vehicle.motor_type}, Tank Capacity: {vehicle.tank_capacity}"
                )
            else:
                print("Unknown Vehicle Type")
