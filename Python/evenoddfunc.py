def check(n):
    if n % 2 == 0:
        return "Even"
    else:
        return "Odd"
n=int(input("Enter the Number: "))
print("The given Number",n,"is",check(n))