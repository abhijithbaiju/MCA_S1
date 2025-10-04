nums = list(map(int, input("Enter a list of integers separated by comma: ").split()))
print("Entered numbers are: ",nums)
squares=[n**2 for n in nums]
print("squares of numbers: ",squares)