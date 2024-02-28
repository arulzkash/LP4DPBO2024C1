from Vehicle import (
    Vehicle,
)  # Jika Vehicle.py ada di dalam direktori yang sama dengan file ini


class Car(Vehicle):
    def __init__(
        self, license_plate, brand, production_year, color, num_seats, num_doors
    ):
        super().__init__(license_plate, brand, production_year, color)
        self._num_seats = num_seats
        self._num_doors = num_doors

    @property
    def num_seats(self):
        return self._num_seats

    @property
    def num_doors(self):
        return self._num_doors

    @num_seats.setter
    def num_seats(self, num_seats):
        self._num_seats = num_seats

    @num_doors.setter
    def num_doors(self, num_doors):
        self._num_doors = num_doors
