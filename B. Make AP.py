t = int(input())
for _ in range(t):
      a,b,c = map(int,input().split())
      li = []
      li.append(a)
      li.append(b)
      li.append(c)
      li.sort()
      if a==b==c:
            print("YES")
            continue
      if li[0]==li[1] and li[2]!=li[0]:
            print("YES")
            continue
      elif li[1]==li[2] and li[2]!=li[0]:
            print("YES")
            continue
      else:
            k = li[1]-li[0]
            m = li[2] - li[0]
            n = li[2] - li[1]
            if m%k==0 and n%k==0:
                  print("YES")
            else:
                  print("NO")