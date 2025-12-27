
text = input("Enter a string: ")

vowel_count = 0
consonant_count = 0
vowels = "aeiouAEIOU"

for char in text:
    # Check if the character is an alphabet
    if 'a' <= char.lower() <= 'z':
        if char in vowels:
            vowel_count += 1
        else:
            consonant_count += 1

print(f"Total Vowels: {vowel_count}")
print(f"Total Consonants: {consonant_count}")