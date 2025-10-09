n=int(input("Enter the number: "))
a=0
b=1
print("Fibonacci series upto",n,"terms")
for i in range(n):
    print(a,end=" ")
    temp=a
    a=b
    b=temp+b

