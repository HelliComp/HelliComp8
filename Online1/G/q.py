n = int(input())

if n % 2 == 1:
    print(0)
else:
    
    t = 0
    f = 0
    ans = n // 2
    while ans>0:
        t += ans
        ans //= 2
    ans = n // 10
    while ans > 0:
        f += ans
        ans //= 5

    print(min(t,f))