t = int(input())
for _ in range(t):
      a,b,c  =  map(int,input().split())
      m = max(a,b,c)
      s = a+b+c
      sm = s-m
      if m==sm:
            print("YES")
      elif (a==b and c%2==0) or (b==c and a%2==0) or (a==c and b%2==0):
            print("YES")
      else:
            print("NO")
