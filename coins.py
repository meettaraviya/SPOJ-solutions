import sys

stored = {0:0}

def f(n):
    if n in stored:
        return stored[n]
    else:
        stored[n] = max(n,f(n//2) + f(n//3) + f(n//4))
        return stored[n]

for line in sys.stdin:
    n = int(line)
    print(f(n))