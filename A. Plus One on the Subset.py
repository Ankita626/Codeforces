t = int(input())
for _ in range(t):
      n = int(input())
      a = list(map(int,input().split()))
      m = max(a)
      n = min(a)
      print(m-n)