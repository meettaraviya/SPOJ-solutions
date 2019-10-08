n = int(input())
x = 0
for i in range(1, n+1):
    for j in range(i, n+1):
        if i*j<=n:
            x += 1
        else:
            break
print(x)