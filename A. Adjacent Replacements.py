n = int(input())
li = list(map(int,input().split()))

for i in range(n):
      if li[i]&1:
            li[i] = li[i]
      else:
            li[i] = li[i]-1
print(*li)