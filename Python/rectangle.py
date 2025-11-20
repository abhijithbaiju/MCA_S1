class Rectangle:
    def area(self,l,b):
        return l*b
    def perimeter(self,l,b):
        return 2*(l+b)
    def compare_area(self,area1,area2):
        if area1>area2:
            return "Rectangle 1 has a greater area"
        elif area1<area2:
            return "Rectangle 2 has a greater area"
        else:
            return "Both Rectangles have the same area"

length1=float(input("Enter length of Rectangle 1: "))
breadth1=float(input("Enter breadth of Rectangle 1: "))

length2 = float(input("Enter length of Rectangle 2: "))
breadth2 = float(input("Enter breadth of Rectangle 2: "))

rectangle=Rectangle()

arearect1=rectangle.area(length1,breadth1)
arearect2=rectangle.area(length2,breadth2)

perimeterrect1=rectangle.perimeter(length1,breadth1)
perimeterrect2=rectangle.perimeter(length2,breadth2)

print("\nRectangle 1: ")
print("Area: ",arearect1)
print("Perimeter: ",perimeterrect1)

print("\nRectangle 2: ")
print("Area: ",arearect2)
print("Perimeter: ",perimeterrect2)

areacomparison=rectangle.compare_area(arearect1,arearect2)
print("\n"+areacomparison)