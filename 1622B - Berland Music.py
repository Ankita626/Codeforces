for _ in range(int(input())):
	n = int(input())
	p = [int(x) for x in input().split()]
	s = input()
	l = sorted([[s[i], p[i], i] for i in range(n)])
	q = [-1 for i in range(n)]
	for i in range(n):
		q[l[i][2]] = i + 1
	print(*q)



	# if a[i]%2==0 and a[i+1]%2==0:
      #       a[i+1]+=1
      #       cnt+=1
      # elif a[i]%2==1 and a[i+1]%2==1:
      #       a[i+1]+=1
      #       cnt+=1
      # else:
      #       continue