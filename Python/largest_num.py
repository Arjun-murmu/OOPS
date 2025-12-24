a = int(input("Enter a first number : "))
b = int(input("Enter a second number : "))
c = int(input("Enter a third number : "))

if a < b and c < b:
    print(f"Largest number is : {b}.")
elif  b < a and c < a:
    print(f"Largest number is : {a}.")
else:
    print(f"Largest number is : {c}.")

# if a < b < c:
#     print(f"Second largest {b}.")
# elif b < a < c:
#     print(f"Second largest {a}.")
# else:
#     print(f"Second largest {c}.")

if (b > a and c < a) or (c > a and b < a):
    print(f"Second largest {a}.")
elif (a > b and c < b) or (c > b and a < b):
    print(f"Second largest {b}.")
else:
    print(f"Second largest {c}.")

if a > c and c < b:
    print(f"Small number {c}.")
elif b > a and  a < c:
    print(f"small number {a}.")
else:
    print(f"Second largest {c}.")


