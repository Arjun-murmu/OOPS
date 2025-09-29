# class Car:
#     def __init__(self, type):
#         self.type = type

#     @staticmethod
#     def start():
#         print("Car started...")

#     @staticmethod
#     def stop():
#         print("Car Stopped...")
# class AudiCar(Car):
#     def __init__(self , name , type):
#         super().__init__(type)
#         self.name = name
#         super().start()

# c1 = AudiCar("Audi", "A6")
# print(c1.name)
# print(c1.type)
# c1.stop()

# class Student:
#     name = "NoName"

#     def newName(self,name):
#         # self.name = name
#         # Student.name = name

#         # self.__class__.name = name 

#         @classmethod
#         def newName(cls, name):
#             cls.name = name

# s1 = Student()
# s1.newName("Arjun")
# print(s1.name)
# print(Student.name)


#mark

class Studnent:
    def __init__(self, phy, math, chem):
        self.phy = phy
        self.math = math
        self.chem = chem
        self.percentage = str((str.phy+str.math+str.chem)/3) + "%"
    def claculatePer(self):
        self.percentage = str((str.phy+str.math+str.chem)/3) + "%"

        