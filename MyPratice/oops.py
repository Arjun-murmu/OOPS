class Car:
    def __init__(self,brand,color, speed):
        self.brand = brand  #Attribute
        self.color = color
        self.speed = speed
        
    def drive(self):  #Method
        print(f"{self.color} {self.brand} is driving.")
    def stop(self):
        print(f"{self.brand} car is stopped.")
    def car_speed(self):
        print(f"{self.brand} Maximum speed is {self.speed} km/h. ")

# my_car1 = Car("Audi A6", "Black", 250)
# my_car1.drive()
# my_car1.stop()
# my_car1.car_speed()
# my_car2 = Car("BMW M5 CS","Green",314) 
# my_car2.drive()
# my_car2.car_speed()
# my_car2.stop()


class Student:
    def __init__(self, name, age):
        self.name = name  # Public attribute
        self.age = age    # Public attribute

    def get_details(self): # Public method
        print(f"Name: {self.name}, Age: {self.age}")

my_student = Student("Alice", 20)

print(my_student.name) # Accessing a public attribute directly
my_student.get_details()   # Calling a public method

class UniversityStudent(Student): # Inherits from the Student class
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self._student_id = student_id  # Protected attribute

    def get_student_id(self): # Public method to access the protected attribute
        print(f"Student ID: {self._student_id}")

    def __str__(self):
        return f"University Student: {self.name}"

university_student = UniversityStudent("Bob", 22, "U12345")
university_student.get_student_id() # Accessing the protected member through a public method

# This works, but is discouraged as it breaks the convention:
print(university_student._student_id)

#private attribute example
class BankAccount:
    def __init__(self, owner, balance):
        self.owner = owner
        self.__balance = balance # Private attribute using name mangling

    def get_balance(self):
        print(f"Current balance for {self.owner}: ${self.__balance}")

my_account = BankAccount("Charlie", 5000)
my_account.get_balance() # This works correctly

# This will raise an AttributeError because __balance is private
try:
    print(my_account.__balance)
except AttributeError as e:
    print(e)
