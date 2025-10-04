students={"May": [80,90,65],"june":[30,70,40],"April": [60,70,80]}
for name,marks in students.items():
    total=sum(marks)
    average=sum(marks)/len(marks)
    print(f"student: {name}")
    print(f"Marks: {marks}")
    print(f"Total Marks: {total}")
    print(f"average Marks: {average: .2f}")
    print("." * 20)