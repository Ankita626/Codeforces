# a,b = map(int,input().split())
# if a==1 and b==10:
#       print("Yes")
# elif (b-a)==1:
#       print("Yes")
# else:
#       print("No")

n = int(input())
a = list(map(int,input().split()))
s = set(a)
print(len(s))