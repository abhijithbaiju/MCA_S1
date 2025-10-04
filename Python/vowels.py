words=input("Enter some words: ")
vowels='aeiouAEIOU'
vowels_list=[char for char in words if char in vowels]
print("Vowels in words list: ",vowels_list)