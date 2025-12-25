number = int(input("Enter a number check the palindrome or not : "))

original_number = number
rev_number = 0
while number > 0:
    rem = number % 10
    rev_number = rev_number * 10 + rem
    number = number // 10
print(rev_number)

if original_number == rev_number:
    print("Palindrome.")
else:
    print("Not Palindrome.")