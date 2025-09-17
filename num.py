num=list(map(int,input("Enter the integers separated by space: ").split()))
result=["over" if n>100 else n for n in num]
print("Modified list= ",result)