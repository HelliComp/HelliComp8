
z= [int(x) for x in input().split()]
a=int(z[0])
b=int(z[1])
c=int(z[2])
if a-b>100 or b-a>=100 or  b-c>=100 or c-b>=100 :
    print("YES")
else :
    print("NO")