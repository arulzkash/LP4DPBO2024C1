class ParkingLot:
    def __init__(self, capacity):
        self._capacity = capacity
        self._num_vehicles = 0

    @property
    def capacity(self):
        return self._capacity

    @capacity.setter
    def capacity(self, capacity):
        self._capacity = capacity

    @property
    def num_vehicles(self):
        return self._num_vehicles

    @num_vehicles.setter
    def num_vehicles(self, num_vehicles):
        self._num_vehicles = num_vehicles
