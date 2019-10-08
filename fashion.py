t = int(input())
for i in range(t):
    n = int(input())
    x1 = list(map(int, input().split()))
    x2 = list(map(int, input().split()))
    x1 = sorted(x1)
    x2 = sorted(x2)
    ans = 0
    for j in range(n):
        ans += x1[j]*x2[j]
    print(ans)