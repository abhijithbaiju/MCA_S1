nums=list(map(int,input("Enter a list of integers separated by comma: ").split()))
result=[]
for n in nums:
    if n%2!=0:
        result.append(n)
print("Enter Numbers: ",nums)
print("List after removing even numbers: ",result)