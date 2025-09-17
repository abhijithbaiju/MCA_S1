list1=input("Enter first list of colors(comma separated): ").split(",")
list2=input("Enter second list of colors(comma separated): ").split(",")
list1=[c.strip() for c in list1]
list2=[c.strip() for c in list2]
diff_colors=[c for c in list1 if c not in list2]
print("print colors in list1 but not in list2: ",diff_colors)