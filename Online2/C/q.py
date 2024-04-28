n = int(input())
m = input().split()
for i in range(len(m)):
    m[i] = int(m[i])
k = 0
for x in range(len(m)):
    if m[x] < 30 or m[x] > 120:
        k += 1

ko = (k*100)/n
if ko < 10 :
    print("good")
elif ko >= 10 and ko <= 50 :
    print("normal")
else :
    print("bad")
        
