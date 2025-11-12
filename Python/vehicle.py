import csv
field_name=['NO','Company','Car Model']
car=[
        {'NO':1,'Company': 'Ferrari','Car Model':'GH'},
        {'NO':2,'Company': 'BMW','Car Model':'X5'},
        {'NO':3,'Company': 'Lamborghini','Car Model':'Hurracan'},
        {'NO':4,'Company': 'Benz','Car Model':'S class'},
        {'NO':5,'Company': 'Roll Royce','Car Model':'Ghost'}
]
with open('car.csv','w',newline='')as csvfile:
    write=csv.DictWriter(csvfile,fieldnames=field_name)
    write.writeheader()
    write.writerows(car)
with open('car.csv',newline='')as csvfile:
    d=csv.reader(csvfile)
    for r in d:
        print(','.join(r))
        print(r)