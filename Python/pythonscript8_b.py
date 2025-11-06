import time
import datetime
print("Current date and time: ",datetime.datetime.now())
print("Current year: ",datetime.date.today().strftime("%Y"))
print("Month of the year: ",datetime.date.today().strftime("%M"))
print("Weak Number of the year: ",datetime.date.today().strftime("%W"))
print("Day Number of the year: ",datetime.date.today().strftime("%m"))
print("Day of the year: ",datetime.date.today().strftime("%M"))
print("Day of the Month: ",datetime.date.today().strftime("%d"))
print("Day of the Week: ",datetime.date.today().strftime("%D"))
print("\nUsing time module: ")
current_time=time.localtime()
print("Today date: ",time.strftime("%Y-%m-%d",current_time))
