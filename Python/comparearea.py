class Rectangle:
    def __init__(self,length,breadth):
        self._length=length
        self._breadth=breadth

    def area(self):
        return self._length*self._breadth

    def __lt__(self, other):
        return self.area()<other.area()

print("Rectangle 1")
length1=int(input("Enter the length of the Rectangle1: "))
breadth1=int(input("Enter the breadth of the Rectangle1: "))
rect1=Rectangle(length1,breadth1)
print(f"The area of Rectangle 1 is: {rect1.area()}")

print("Rectangle 2")
length2=int(input("Enter the length of the Rectangle2: "))
breadth2=int(input("Enter the breadth of the Rectangle2: "))
rect2=Rectangle(length2,breadth2)
print(f"The area of Rectangle 2 is: {rect2.area()}")

print("\nNow comparing The Rectangles ")
if rect1<rect2:
    print("The area of Rectangle 1 is less than Rectangle 2")
elif rect2<rect1:
    print("The area of Rectangle 2 is less than Rectangle 1")
else:
    print("Both rectangles have the same area")
