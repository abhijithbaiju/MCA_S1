def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
n=int(input("Enter thr Number of Terms: "))
result=0
for i in range(1,n+1):
    f= fact(i)
    result=result+(pow(i,i)/f)
print("Sum of series is",result)


