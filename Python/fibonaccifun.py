def fibo(n):
    if n<=1:
        return n
    else:
        return fibo(n-1)+fibo(n-2)
nterm=int(input("Enter the number of terms: "))
if nterm<=0:
    print("Enter a Positive Number: ")
else:
    print("Fibonacci Sequence: ")
    for i in range(nterm):
        print(fibo(i))