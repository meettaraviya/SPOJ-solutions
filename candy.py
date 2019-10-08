while True:
    n = int(input())
    if n==-1:
        break
    else:
        x = []
        for i in range(n):
            x.append(int(input()))
        avg = sum(x)
        if avg%n==0:
            avg = avg // n
            ans = 0
            for j in x:
                ans += max(j-avg, 0)
            print(ans)
        else:
            print(-1)