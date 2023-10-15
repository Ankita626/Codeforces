for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    s = set()
    for i in sorted(l):
        s.add(i)
    print(len(s))