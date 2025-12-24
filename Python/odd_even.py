
Iscon = True
while Iscon:
    num = int(input("Enter a number 1: "))
    if num % 2 == 0:
        print(f" {num} number is Even number.")
    else:
        print(f" {num} number is odd number.")
    Iscon = input("You Contiue this ? (Y/N). ").lower()

    if Iscon == "n":
        Iscon = False
        break
    else:
        if num % 2 == 0:
            print(f" {num} number is Even number.")
        else:
            print(f" {num} number is odd number.")