t = int(input())
for _ in range(t):
      s = input()
      ok = 0
      for i in range(1,len(s)):
            if s[i]==s[i-1]:
                  ok = 1
                  break
            else:
                  continue
      if ok:
            print("YES")
      else:
            print("NO")