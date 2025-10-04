nums = list(map(int, input("Enter a list of integers separated by comma: ").split()))
print("Entered numbers are: ",nums)
positive_list=[n for n in nums if n>0]
print("Positive Numbers: ",positive_list)