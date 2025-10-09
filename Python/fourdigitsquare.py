start_range=int(input("Enter the starting range(4 digit min): "))
end_range=int(input("Enter the ending range(4 digit max): "))
evendigit=[]
for num in range(start_range,end_range+1):
    if all(int(digit)%2==0  for digit in str(num)):
        sqrt=int(num ** 0.5)
        if sqrt * sqrt == num:
            evendigit.append(num)
if evendigit != []:
        print("Numbers with all even digits an are perfect squares: ")
        print(evendigit)
else:
        print("There are no numbers with in this range")