# ============================================
# 1. CONDITIONALS
# ============================================

age = 22

# Simple if
# if age >= 18:
#     print("You are an adult.")

# # if-else
# if age < 18:
#     print("Minor")
# else:
#     print("Adult")

# if-elif-else
marks = 85
# if marks >= 90:
#     print("Grade: A")
# elif marks >= 75:
#     print("Grade: B")
# elif marks >= 50:
#     print("Grade: C")
# else:
#     print("Grade: F")

# Nested if
# x = 15
# if x > 10:
#     if x < 20:
#         print("x is between 10 and 20")


# ============================================
# 2. LOOPS
# ============================================

# FOR LOOP
# for i in range(5):
#     print("For loop iteration:", i)

# WHILE LOOP
count = 0
# while count < 5:
#     print("While loop count:", count)
#     count += 1

# NESTED LOOP
# for i in range(3):
#     for j in range(2):
#         print(f"i={i}, j={j}")

# BREAK, CONTINUE, PASS
# for i in range(1, 6):
#     if i == 3:
#         continue    # skip 3
#     if i == 5:
#         break       # stop loop at 5
#     print("Value:", i)

# pass (placeholder for empty block)

# for i in range(3):
#     pass  # do nothing


# print("Loop ended.")

# ============================================
# 3. FUNCTIONS
# ============================================

def greet():
    print("Hello , There ! How are you ?")
greet()

# *args (variable arguments)
def total_sum(*numbers):
    return sum(numbers)

print("Sum of many:", total_sum(1, 2, 3, 4, 5))

# *args (variable arguments)
# def total_sum(*numbers):
#     return sum(numbers)

# total_sum("Sum of many : ", total_sum(1,2,3,4))

# Function with parameters
def calculation(a , b, condition):
    if condition == "+":
        sum = a + b
        print("Addition : ", sum)
    if condition == "-":
        sub = a - b
        print( " Subtraction : ", sub)
    if condition == "*":
        mul = a * b
        print("Multiplication : ", mul)
    if condition == "/":
        div = a / b
        print("Division : ", div)
    if condition == "%":
        rem = a % b
        print("Reminder : ", rem)

calculation(5 , 4, "+")
calculation(5 , 4, "-")
calculation(5 , 4, "*")
calculation(5 , 4, "/")
calculation(5 , 4, "%")

# Default arguments
def power(base, exp=2):
    return base ** exp

print("Square:", power(4))
print("Cube:", power(4, 3))

# Keyword arguments
print("Keyword args:", power(exp=4, base=2))

# *args (variable arguments)
def total_sum(*numbers):
    return sum(numbers)

print("Sum of many:", total_sum(1, 2, 3, 4, 5))

# **kwargs (keyword arguments dictionary)
def student_info(**info):
    for key, value in info.items():
        print(f"{key}: {value}")

student_info(name="Arjun", age=21, course="CSE")

# Lambda (anonymous function)
square = lambda x: x * x
print("Lambda square:", square(6))

# ============================================
# 4. RECURSION
# ============================================

# Factorial using recursion
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

print("Factorial of 5:", factorial(5))

# Fibonacci using recursion
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

print("Fibonacci sequence (first 6):", [fibonacci(i) for i in range(6)])

# Recursive sum of list
def recursive_sum(lst):
    if not lst:
        return 0
    return lst[0] + recursive_sum(lst[1:])

print("Sum of list [1,2,3,4,5]:", recursive_sum([1,2,3,4,5]))

print("Recursion ends here.")

