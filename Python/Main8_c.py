from armstrong8_c import armstrong_number

number = int(input("Enter a number to check if it's an Armstrong Number: "))

if armstrong_number(number):
    print(f"{number} is an Armstrong Number")
else:
    print(f"{number} is not an Armstrong Number")
