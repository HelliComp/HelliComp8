n = int(input())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

ind = [0] * (n + 1)

for i in range(1, n + 1):
    ind[B[i - 1]] = i

V = []
U = [0]

for i in range(1, n + 1):
    U.clear()
    num = A[i - 1]
    
    for j in range(num, n + 1, num):
        U.append(ind[j])
    
    U.sort(reverse=True)
    V.extend(U)

ans = 0

for v in V:
    if v > U[-1]:
        U.append(v)
    else:
        index = 0
        low, high = 0, len(U) - 1
        
        while low <= high:
            mid = (low + high) // 2
            if U[mid] >= v:
                index = mid
                low = mid + 1
            else:
                high = mid - 1
        
        U[index] = v

print(len(U) - 1)
