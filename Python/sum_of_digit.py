num = 1234
sum_digit = 0
while num > 0:
    rem = num % 10
    sum_digit = sum_digit + rem
    num = num // 10 
    #integer division //

print(sum_digit)