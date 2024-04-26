n=int (input())
p=n//60
d=n%60
if d<10 and p<10:
    print('0'+str(p)+':'+'0'+str(d))
elif p<10:
    print('0'+str(p)+":"+str(d))
elif d<10:
    print(str(p)+":"+'0'+str(d))
elif p>10 and d>10:
    print(str(p)+':'+str(d))
