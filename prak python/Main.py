from Garage import Garage
from Car import Car
from Motorcycle import Motorcycle

# Membuat objek Garage pertama
garage1 = Garage("My Garage 1", 100.0, 10)

# Membuat beberapa objek Car dan Motorcycle untuk garage1
car1 = Car("ABC123", "Toyota", 2020, "Black", 5, 4)
car2 = Car("DEF456", "Honda", 2019, "Red", 5, 4)
motorcycle1 = Motorcycle("XYZ789", "Yamaha", 2021, "Blue", "Sport", 10)
motorcycle2 = Motorcycle("GHI101", "Suzuki", 2022, "Green", "Cruiser", 15)

# Menambahkan kendaraan ke dalam Garage 1
garage1.add_vehicle(car1)
garage1.add_vehicle(car2)
garage1.add_vehicle(motorcycle1)
garage1.add_vehicle(motorcycle2)

# Menampilkan informasi garage1
print("Garage 1 Name:", garage1.get_name())
print("Garage 1 Area:", garage1.get_area())
print("Garage 1 Parking Lot Capacity:", garage1.capacity)
print("Garage 1 Number of Vehicles:", garage1.num_vehicles)
print("Garage 1 Vehicles:")
garage1.display_vehicles()

# Membuat objek Garage kedua
garage2 = Garage("My Garage 2", 150.0, 15)

# Membuat beberapa objek Car dan Motorcycle untuk garage2
car3 = Car("JKL321", "Ford", 2018, "White", 4, 2)
car4 = Car("MNO654", "Chevrolet", 2017, "Silver", 5, 4)
motorcycle3 = Motorcycle("PQR987", "Kawasaki", 2020, "Yellow", "Cruiser", 12)
motorcycle4 = Motorcycle("STU210", "Harley-Davidson", 2023, "Black", "Chopper", 18)

# Menambahkan kendaraan ke dalam Garage 2
garage2.add_vehicle(car3)
garage2.add_vehicle(car4)
garage2.add_vehicle(motorcycle3)
garage2.add_vehicle(motorcycle4)

# Menampilkan informasi garage2
print("\nGarage 2 Name:", garage2.get_name())
print("Garage 2 Area:", garage2.get_area())
print("Garage 2 Parking Lot Capacity:", garage2.capacity)
print("Garage 2 Number of Vehicles:", garage2.num_vehicles)
print("Garage 2 Vehicles:")
garage2.display_vehicles()
