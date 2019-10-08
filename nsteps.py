for i in range(int(input())):
    x,y = map(int, input().split())
    if x==y:
        if x%2==0:
            print(2*x)
        else:
            print(2*x-1)
    elif x==y+2:
        if x%2==0:
            print(2*x-2)
        else:
            print(2*x-3)
    else:
        print("No Number")
