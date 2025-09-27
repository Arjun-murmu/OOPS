class Student:
    # name = "Beauty Rani Hembram"
    # age = 15
    print("Adding a student database.")
    collage_name = "XYZ Public School"  # Class attribute
    name = "No Name"

    def __init__(self, name, age, marks):
        self.name = name    #object attribute
        self.age = age
        self.marks = marks

# s1 = Student()
# print(s1.name)
# print(s1.age)
# print(f"Name of the student is {s1.name} and age {s1.age}")

std1 = Student("Beauty Rani Hembram", 15, 98)
std2 = Student(name = "Arjun Murmu", age = 22, marks = 73)
std3 = Student("Nabin Soren", 20, 88)
# print("First student : \n name : {} \n age : {} \n marks : {}".format(std1.name, std1.age, std1.marks))
# print(f"Second student : \n name : {std2.name} \n age : {std2.age} \n marks : {std2.marks}")
# print("Third student details : ", std3.name, std3.age, std3.marks)

# print(f"Collage name of std1 : {std1.collage_name}")
# print(Student.collage_name) # Accessing class attribute using class name

class Student_Info:
    def __init__(self, name, age, marks):
        self.name = name 
        self.age = age
        self.marks = marks
    def welcome(self):
        print(f"Welcome {self.name} to {Student.collage_name}")
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}, Marks: {self.marks}")
    def marks_info(self):
        return self.marks

# std_info1 = Student_Info("Beauty Rani Hembram", 15, 98)
# std_info2 = Student_Info("Arjun Murmu", 22, 73)
# std_info1.welcome()
# std_info1.display()
# print(std_info2.marks_info())

class Student_Result:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
    def average(self):
        sum = 0
        for val in self.marks:
            sum = sum + val
            avg = sum / len(self.marks)
        print(f"Average marks of {self.name} is : {avg}")
    
    @staticmethod   #decorator
    def hello():
        print("Hello Student.")

std_r1 = Student_Result("Sumita Soren", [85, 90, 78, 92])
# std_r1.average()
std_r2 = Student_Result("Nabin Soren", [75, 80, 68, 82])
# std_r2.average()
# Student_Result.hello()
# std_r1.hello()

class Car:
    def __init__(self):
        self.acc = False
        self.clush = False
        self.brk = False
    def start(self):
        self.acc = True
        self.clush = True
        print("Car started.")

car1 = Car()
# car1.start()


class Account:
    def __init__(self, balance, acc_no):
        self.balance = balance
        self.acc_no = acc_no

    def debit(self, amount):
        self.balance -= amount
        print("Rs : ", amount, "debited from your account.")
        print("Total balance is : ", self.printing())

    def credit(self, amount):
        self.balance += amount
        print("Rs : ", amount, "credited to your account.")
        print("Total balance is : ", self.printing())

    def printing(self):
        return self.balance

acc1 = Account(6000, 1234)
acc1.debit(100)
acc1.credit(1000)