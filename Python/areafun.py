area1=lambda x:x*x
area2=lambda x,y:x*y
area3=lambda x,y:0.5*x*y
a=int(input("Enter the length of the square: "))
print("Area of the  square is: ",area1(a))

l=int(input("Enter the length of the rectangle: "))
w=int(input("Enter the breadth of the rectangle: "))
print("Area of the Rectangle is: ",area2(l,w))

b=int(input("Enter the breadth of the triangle: "))
h=int(input("Enter the height of the Traingle: "))
print("Area of the Triangle is: ",area3(b,h))