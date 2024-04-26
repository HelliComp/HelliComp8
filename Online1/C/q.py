n=int(input())

a = 0

result = map(int, input().split())

b =list(result)

for i in range(1, n+1):
    if b[i-1]==0 or b[i-1]==1 or b[i-1]==4 or b[i-1]==6 or b[i-1]==9:
        a=a+1
print(a)    
