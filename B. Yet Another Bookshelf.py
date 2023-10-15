tt = int(input())
for _ in range(tt):
      n = int(input())
      li = list(map(int,input().split()))
      se = li
      se = se[::-1]
      k = se.index(1)
      m = li.index(1)
      # print(li.index(1),n-k)
      res = li[m:n-k]
      cnt = res.count(0)
      print(cnt)
