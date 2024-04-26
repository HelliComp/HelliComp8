a=int(input())
b=0
while a>=60:
    b+=1
    a-=60
if b<10 and a>9:
    print("0",end='')
    print(b,end='')
    print(":",end='')
    print(a)
elif b<10 and a<10:
    print("0",end='')
    print(b,end='')
    print(":",end='')
    print("0",end='')
    print(a)
else:
    print(b,end='')
    print(":",end='')
    print(a)
