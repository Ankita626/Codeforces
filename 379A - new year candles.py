a,b = map(int,input().split())
n = a
ans = 0
x = 1e9

while x>0:
      
      x = a//b
      a = a%b + x 
      ans+=x

print(ans+n)