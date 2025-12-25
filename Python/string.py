name = "Arjun"
print(type(name))
print(name) #Arjun
print(name[0]) #A
print(name[1])
print(name[2:4]) #ju
print(name[:3]) #Arj
print(name[::2]) #Ajn (this space btween the word : A_j_n)
print(name[0:4:1]) #Arju
print(name[-1]) #n
print(name[-2]) #u

#length
print(len(name)) #5
print(name.__len__()) #5
# print(name.len()) #AttributeError

#loop using the string :
for c in name:
    print(c)