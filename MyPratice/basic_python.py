#variables and data types
a = 10
b = 20
sum = a + b
# print("Sum is:", sum)
# print(f"Sum is: {sum}")
# print("Sum is: {}".format(sum))
# print("sum is : %d" % sum)
# print("Sum of {} and {} is: {}".format(a, b, sum))
# print("sum of %d and %d is : %d" % (a, b, sum))

#data types
#integer
x = 97
y = - 24
# print(type(x))
type_x = type(x)
# print(type(y))
type_y = type(y)
# print("Types of x and y are : {} and {} ".format(type_x, type_y))
# print("Value of x and y are : %d and %d " % (x, y))

#float
PI = 3.14
# print(type(PI))
type_PI = type(PI)
# print("Type of PI is : {}".format(type_PI))
# print("Value of PI is : %.2f" % round(PI, 2))

#string
name = "Python Programming"
# print(type(name))
type_name = type(name)
# print("Type of name is : {} ".format(type_name))
# print(f"Original name : {name}")

# print("Lower case : {}".format(name.lower()))
# print(f"Upper case : {name.upper()}")
# print("Title case : {}".format(name.title()))
# print("Length of name is : {} ".format(len(name)))
# print("Replaced string : {}".format(name.replace("Programming", "Language")))

# print("Split string : {} ".format(name.split(" ")))
# print("Find string : {} ".format(name.find("ing")))
# print("Index of string : {} ".format(name.index("P")))
# print("Count of 'g' in name is : {} ".format(name.count("g")))

# print("Slice of name [0 : 6] : {} ".format(name[0:6]))
# print("Slice of name [7 : ] : {} ".format(name[7 :]))
# print("Slice of name [:5] : {}".format(name[:5]))

# print("Slice of name [-5 : ] : {}".format(name[-5 :]))
# print("Slice of name [ : -2] : {}".format(name[: -2]))
# print("Slice of name [-10 : -1] : {}".format(name[-10 : -1]))
# print("Slice between [0 : 17 : 2] : {}".format(name[0 : 17 : 2]))

#boolean
is_True = True
is_False = False
# print(type(is_True))
type_is_True = type(is_True)
# print(type(is_False))
type_is_False = type(is_False)
# print("Types of is_True and is_False are : {} and {} ".format(type_is_True, type_is_False))
# print("Value of is_True and is_False are : {} and {} ".format(is_True, is_False))

#list
students = ["Samiskhya", "Sital", "Jharana", "Dipti","Pinki","Jaylaxmi","Banita","Shubashree","Tapaswini"]
# print(type(students))
type_Students = type(students)
# print("Type of students is : {} ".format(type_Students))
# print("Original students list : {}".format(students))
# print(f"Original name of students : {students} ")
# print("Length of students list is : {} ".format(len(students)))
# print("First student : {}".format(students[0]))
# print("second and third student : {}".format(students[1: 3]))
# print("Last student name : {}".format(students[-1]))
# print(f"Last three students : {students[-1 : -4 : -1]}")
# print("last student index no : {}".format(students.index("Tapaswini")))
# print("Count of 'Dipti' is students list : {}".format(students.count("Dipti")))

students.append("Rudra")
students.append("Adarsh")
students.append("Bhimsen")
students.append("Karan")
students.append("Subham")
# print("After adding new students : {}".format(students))
# print("Length of students list : {} ".format(len(students)))
# students.append("Dipti")
# print("Count of 'Dipti' in students list : {}".format(students.count("Dipti")))
# students.remove("Dipti")
# print("After removing 'Dipti' from students list : {}".format(students))
# print("Length of students list : {} ".format(len(students)))

# students.pop()
# print("After poping last student from students list : {}".format(students))
# print("Length of students list : {} ".format(len(students)))
# students.pop(1)
# print("After poping 2nd student from students list : {}".format(students))
# print("Length of students list : {} ".format(len(students)))
# students.sort()
# print("After sorting students list : {}".format(students))
# students.sort(reverse=True)
# print("After reverse sorting students list : {}".format(students))
# students.reverse()
# print("After reversing students list : {}".format(students))
# students.clear()
# print("After clearing students list : {}".format(students))

#tuple
fruits = ("Mango", "Banana", "Orange", "Grapes", "Pineapple")
# print(type(fruits))
type_fruits = type(fruits)
# print("Type of fruits is : {} ".format(type_fruits))
# print("Original fruits tuple : {}".format(fruits))
# print(f"Original fruits : {fruits} ")
# print("Length of fruits tuple is : {} ".format(len(fruits)))

# print("First fruit : {}".format(fruits[0]))
# print("second and third fruit : {}".format(fruits[1: 3]))
# print("Last fruit name : {}".format(fruits[-1]))
# print(f"Last three fruits : {fruits[-1 : -4 : -1]}")
# print("last fruit index no : {}".format(fruits.index("Pineapple")))
# print("Count of 'Mango' is fruits tuple : {}".format(fruits.count("Mango")))

# fruits[0] = "Apple" #tuple is immutable (cannot be changed) (will give error)
# print("After changing first fruit : {}".format(fruits))

# fruits.append("Apple") #tuple has no append method (will give error AttributeError)
# print("After adding new fruit : {}".format(fruits))

# fruits.remove("Banana") #tuple has no remove method (will give error AttributeError)
# print("After removing 'Banana' from fruits tuple : {}".format(fruits))

# fruits.pop() #tuple has no pop method (will give error AttributeError)

# Tuple to List conversion
fruits_list = list(fruits)
# print("Fruits list : {}".format(fruits_list))
# print("Type of fruits_list is : {} ".format(type(fruits_list)))

#Dictionary
std_list = [ {
    "name" : "Beauty",
    "age" : 15,
    "is_student" : True,
    "courses" : ["Python", "Java", "C++"],
    "address" : {
        "city" : "Bhubaneswar",
        "state" : "Odisha"
    }
    },
    {
    "name" : "Sanjana",
    "age" : 16,
    "is_student" : True,
    "courses" : ["HTML", "CSS", "JavaScript"],
    "address" : {
        "city" : "Cuttack",
        "state" : "Odisha"
    }
    }
]

# print(type(std_list))
# print("Student List : {}".format(std_list))
# print("Length of student list is : {} ".format(len(std_list)))
# print("First student : {}".format(std_list[0]))
# print("First student name : {}".format(std_list[0]["name"]))
# print("First student courses : {}".format(std_list[0]["courses"]))
# print("First student first course : {}".format(std_list[0]["courses"][0]))
# print("First student city : {}".format(std_list[0]["address"]["city"]))
# print("Type of first student is : {} ".format(type(std_list[0])))

# print("Second student : {}".format(std_list[1]))
# print("Second student name : {}".format(std_list[1]["name"]))
# print("Second student courses : {}".format(std_list[1]["courses"]))
# print("Second student first course : {}".format(std_list[1]["courses"][0]))
# print("Second student city : {}".format(std_list[1]["address"]["city"]))
# print("Second student state : {}".format(std_list[1]["address"]["state"]))
# print("Type of second student is : {} ".format(type(std_list[1])))

#set
colors = {"Red", "Green", "Blue", "Yellow", "Orange"}
print(type(colors))