t = int(input())
for _ in range(t):
      n = int(input())
      a = list(map(int,input().split()))
      res = 0
      for i in range(n):
            res = res | a[i]
      print(res)