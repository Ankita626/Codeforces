import sys
input = sys.stdin.buffer.readline
t = int(input())
for _ in range(t):
      n,h = map(int,input().split())
      a = list(map(int,input().split()))
      a.sort()
      x = a[-1]
      y = a[-2]
      sm = x+y
      marbe = h%sm
      if marbe==0:
            ans = 2*(h//sm)
            print(ans)
      elif marbe<=x:
            ans = 2*(h//sm) + 1
            print(ans)
      else:
            ans = 2*(h//sm) + 2
            print(ans)