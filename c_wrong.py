# t = int(input())
# for _ in range(t):
#       a,s = map(int,input().split())
#       k = str(a)
#       l = str(s)
#       m = min(len(k),len(l))
#       res = ""


import math
a = (input("course 1: "))
b = (input("course 2: "))
c = (input("course 3: "))
d = (input("course 4: "))
a=float(a)
b=float(b)
c=float(c)
d=float(d)
sum = a+b+c+d
avg = sum/4
arr = [a,b,c,d]
mmax = max(arr)
mmin = min(arr)
print("Sum: " + str(sum))
print("Avg: " + str(avg))
print("Max: " +str(mmax))
print("Min: " + str(mmin))