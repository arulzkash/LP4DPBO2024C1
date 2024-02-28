class Vehicle:
    def __init__(self, license_plate, brand, production_year, color):
        self._license_plate = license_plate
        self._brand = brand
        self._production_year = production_year
        self._color = color

    @property
    def license_plate(self):
        return self._license_plate

    @property
    def brand(self):
        return self._brand

    @property
    def production_year(self):
        return self._production_year

    @property
    def color(self):
        return self._color

    @license_plate.setter
    def license_plate(self, license_plate):
        self._license_plate = license_plate

    @brand.setter
    def brand(self, brand):
        self._brand = brand

    @production_year.setter
    def production_year(self, production_year):
        self._production_year = production_year

    @color.setter
    def color(self, color):
        self._color = color
