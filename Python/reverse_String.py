# Reverse a String (WITHOUT shortcut)
# ❌ Don’t use [::-1] in exams (logic expected)
name = "arjun"
#ouput expected : name = "nujra"

#logic 1 : 
# print(name + "a")
rev = ""
# print(rev)
for c in name:
    rev = c + rev
    # print(rev)
print(rev)

#logic 2
name2 = "uttam"
print(name2[::-1])
