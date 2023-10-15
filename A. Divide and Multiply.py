t = int(input())
for _ in range(t):
      n = int(input())
      a = list(map(int,input().split()))
      pai = 1
      for i in range(n):
            while (a[i]%2==0):
                  a[i] = a[i]//2
                  pai = pai * 2
      a.sort()
      a[-1] = a[-1] * pai
      sm = sum(a)
      print(sm)