t = int(input())
for _ in range(t):
      n = int(input())
      cnt = 0
      if n==1:
            print(1)
      else:
            for i in range(1,n+1):
                  k =pow(i*i,0.5)
                  if i==pow(i*i,0.5) or i==pow(i*i*i,1//3):
                        cnt+=1
                  elif k==pow(i*i*i,1//3):
                        cnt+=1
                  else:
                        continue
            print(cnt)
            #       k = pow(i,2)
            #       if k>=1 and k<=n:
            #             cnt+=1
            #       elif pow(i,3)>=1 and pow(i,3)<=n:
            #             cnt+=1
            #       elif k==pow(i,3) and k>=1 and k<=n:
            #             cnt+=1
            # print(cnt+1)
