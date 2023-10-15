t = int(input())
for _ in range(t):
      s = input()
      r = s.index("r")
      g = s.index("g")
      b = s.index("b")
      R = s.index("R")
      G = s.index("G")
      B = s.index("B")
      if r<R and g<G and b<B:
            print("YES")
      else:
            print("NO")