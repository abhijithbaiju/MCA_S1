import Graphics
from Graphics import Circle,Rectangle
from Graphics.threeDGraphics import Cuboid,Sphere
from Graphics.Circle import*
rad1=float(input("Enter the radius of the circle: "))
print("Area of the circle is: ",Circle.area_circle(rad1))
print("Perimeter of circle: ",Circle.perimeter_circle(rad1))

len1=float(input("Enter the length of the rectangle: "))
breadth1=float(input("Enter the breadth of the rectangle: "))
print("Area of rectangle: ",Rectangle.area_rec(len1,breadth1))
print("Perimeter of rectangle: ",Rectangle.perimeter_rec(len1,breadth1))

len2=float(input("Enter the length of the cuboid: "))
breadth2=float(input("Enter the breadth of the cuboid: "))
height=float(input("Enter the height of the cuboid: "))
print("Area of cuboid: ",Cuboid.area_cuboid(len2,breadth2,height))
print("Perimeter of rectangle: ",Cuboid.perimeter_cuboid(len2,breadth2,height))

rad2=float(input("Enter the radius of the sphere: "))
print("Area of sphere : ",Sphere.area_sphere(rad2))
print("perimeter of sphere : ",Sphere.perimeter_sphere(rad2))
