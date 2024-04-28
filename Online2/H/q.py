import math
def ok(n):
    if n <= 1:
        return ['1','2','3','4','5','6','7','8','9']
    z = ok(n-1)
    y = z.copy()
    for i in z:
        if len(i) < n-1:
            continue
        if i[-1] == '9':
            y.append(i+'8')
            y.append(i+'9')
        elif i[-1] == '0':
            y.append(i+'0')
            y.append(i+'1')
        else:
            x = int(i[-1])
            y.append(i+str(x-1))
            y.append(i+str(x))
            y.append(i+str(x+1))
   
    return y
            
    
n = int(input())
z = math.log(n,(3))
z //= 1
z = int(z)
a = ok(z)

print(a[n-1])
