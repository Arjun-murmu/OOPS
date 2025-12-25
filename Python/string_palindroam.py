name = input("Enter a word for check palindram : ").lower()

first_string = name
second_string = name[::-1]

if first_string == second_string:
    print("palindram.")
else:
    print("not palindram.")