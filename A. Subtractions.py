t = int(input())
for _ in range(t):
      a,b = map(int,input().split())
      m = max(a,b)
      n = min(a,b)
      cnt = 0
      while m>n:
            m-=n
            cnt+=1
      print(cnt+n)