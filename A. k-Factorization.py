import math

n,k = map(int,input().split())

li = []
for i in range(2,n+1):
      while (n%i==0):
            n = n//i
            li.append(i)
            
if len(li)<k:
      print(-1)

else:
      while (len(li)>k):
            k = li[-1]
            li.pop()
            m = li[-1]
            li.pop()
            li.append(int(k*m))
      print(*li)
