file=open("file2.txt","w")
file.write("hello world!\nwelcome to python programming\nThankyou")
file.close()
list=[]
file=open("file2.txt","r")
list=[line.strip() for line in file]
file.close()
print(list)