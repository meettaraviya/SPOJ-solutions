t = int(input())

def rpn(s):
    d = 0
    n = len(s)
    if n==1:
        return s
    for i in range(n):
        if d==1 and s[i] in '+-*/^':
            return rpn(s[1:i]) + rpn(s[i+1:-1])+s[i]
        elif s[i]=='(':
            d += 1
        elif s[i]==')':
            d -= 1

for i in range(t):
    s = input()
    print(rpn(s))