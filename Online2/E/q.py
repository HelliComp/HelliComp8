n=int(input())
k=n
c=0
e=n*2-1
d=True
x=list(map(int,input().split()))
b=x.sort()
while d!=False and k!=0:
    if x[c]*x[e]==x[c+1]*x[e-1]:
        c=c+1
        e=e-1
    else:
        d=False
    k=k-1
if d==True:
    e=n*2-1
    print('Yes')
    for i in range(n):
        print(x[i],x[e])
        e=e-1
else:
    print('No')
