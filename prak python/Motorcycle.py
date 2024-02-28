from Vehicle import Vehicle  # Jika Vehicle.py ada di dalam direktori yang sama dengan file ini

class Motorcycle(Vehicle):
    def __init__(
        self, license_plate, brand, production_year, color, motor_type, tank_capacity
    ):
        super().__init__(license_plate, brand, production_year, color)
        self._motor_type = motor_type
        self._tank_capacity = tank_capacity

    @property
    def motor_type(self):
        return self._motor_type

    @property
    def tank_capacity(self):
        return self._tank_capacity

    @motor_type.setter
    def motor_type(self, motor_type):
        self._motor_type = motor_type

    @tank_capacity.setter
    def tank_capacity(self, tank_capacity):
        self._tank_capacity = tank_capacity
