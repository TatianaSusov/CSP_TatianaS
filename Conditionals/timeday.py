# Tatiana susov, Time of Day, Python
import time

current = time.time()


local_time = time.localtime(current)
hour = local_time.tm_hour
print("It is", hour)

if hour >= 00 and hour < 12:
    print("Good morning!")
elif hour >=12 and hour <19:
    print("Good afternoon!")
else:
    print("Good evening!")