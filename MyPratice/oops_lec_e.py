# class Student:
#     def __init__(self, name):
#         self.name = name

# s1 = Student("Arjun")
# s2 = Student("Uttam")
# print(s1.name)
# print(s2.name)
# # del s2
# del s2.name
# print(s1.name)
# # print(s2.name)
# print(s2)


#Private

# class Account:
#     def __init__(self, acc_no, acc_pass):
#         self.acc_no = acc_no
#         # self.acc_pass = acc_pass   #Public
#         self.__acc_pass = acc_pass  #private

#     def reset_pass(self):
#         print(f"account password : {self.__acc_pass}")

# acc1 = Account("2345", "12s3")
# print(acc1.acc_no)
# # print(acc1.__acc_pass)  #Can't acces private attribute Show AttributeError

# acc1.reset_pass()   #account password : 12s3
# # print(acc1.reset_pass())   #None


#Inheritance

#Multi-level inheritance

# class Car:
#     color = "Black"
#     @staticmethod
#     def start():
#         print("Car started...")
#     @staticmethod
#     def stop():
#         print("Car stopped...")
# class AudiCar(Car):  # inheritance
#     def __init__(self, name):
#         self.name = name

# class BMWCar(AudiCar):
#     def __init__(self, model):
#         self.model = model
        

# car1 = AudiCar("Audi A6")

# print(car1.name)
# print(car1.color)
# print(car1.start())  #used the inheritance
# car1.stop()

# car2 = BMWCar("BMW A5")
# car2.start()
# print(car2.color)
# print(car2.model)
# car2.stop()


#Multiple Inheritance 

class A:
    name1 = "Apple"
class B:
    name2 = "Ball"
class C(A,B):
    name3 = "Welcome to CAT."

c1 = C()
print(c1.name1)
print(c1.name2)
print(c1.name3)