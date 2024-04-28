a=input()
a=a.split()
b=int(a[0])
c=int(a[1])
d=input()
e=[]
d=d.split()
for i in range (len(d)):
    d[i]=int(d[i])
f=0
for i in range(0,b-1):
    if(d[i+1]-d[i]>=0):
        f+=d[i+1]-d[i]
    else:
        f+=1
if(c>=f):
    print('yes')
else:
    print('no')

