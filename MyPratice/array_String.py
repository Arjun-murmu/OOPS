import array

my_String = "Hello, how are you ?"
# print(my_String)
# print(my_String[0: 4])
# print(my_String[-1])
# print(len(my_String))
# print(my_String[0: 20: 4])

# name = my_String.split(" ")
# print(name)
# print(name[1])

another_string = 'arjun'
# print(another_string)
# print(another_string[2: ])

multi_line_string = """This is a
    multi-line string."""

# print(multi_line_string)
# print(multi_line_string[4:])

#Array

# my_array = array.array('i', [1,2,3,4,5])
# print(my_array)
# my_arr = array.array('u',['B','c'])
# print(my_arr)

# Traversal
# arr = [10, 20 , 30, 40,50]
# print(arr)
# for i in range(len(arr)):
#     print(arr[i],end = " ")
# print("\n")

#insertion
# Insert 25 at index 2
# arr.insert(2, 60)
# print(arr)

# Delete element at index 3
# del arr[3]
# print(arr)

# 3. Reversal

# arry = [10, 20 , 30, 40,50]
# # arry.reverse()
# print(arry)
# if arry == arry.reverse():
#     print("same element")
# else:
#     print("not same")

# print(arry[:-1])
# arry.reverse()
# print(arry)

# if arry[:-1] == arry[:-1][::-1]:
#     print("same element")
# else:
#     print("not same")

# 4. Rotations

ar = [1,2,3,4,5]
# print("Left Rotation (by 1): ")
# ar = ar[1:] + ar[:1]
# print(ar)

print("Right Rotation (by 2): ")
# k = 2
# print(ar[-2 :])
ar = ar[-2 : ] + ar[: -2]

print(ar)