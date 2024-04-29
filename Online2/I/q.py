# Pypy 3

from collections import deque

N = 1003
INF = int(1e9)
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def is_ok(y, x):
    return 1 <= y <= n and 1 <= x <= n

def check(mid):
    dist = [[INF] * (n+1) for _ in range(n+1)]
    Q = deque()
    
    for i in range(1, n+1):
        for j in range(1, n+1):
            if A[i][j] <= mid:
                dist[i][j] = 0
                Q.append((i, j))
    
    while Q:
        y, x = Q.popleft()
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if is_ok(ny, nx) and dist[ny][nx] > dist[y][x] + 1:
                dist[ny][nx] = dist[y][x] + 1
                Q.append((ny, nx))
    
    for i in range(1, n+1):
        for j in range(1, n+1):
            if dist[i][j] > k:
                return False
    return True

n, k = map(int, input().split())
A = [[0] * (n+1) for _ in range(n+1)]

for i in range(1, n+1):
    A[i][1:] = map(int, input().split())

if k >= 2 * (n - 1):
    print(0)
else:
    l, r = 0, 1000
    while r - l > 1:
        mid = (l + r) // 2
        if check(mid):
            r = mid
        else:
            l = mid
    print(r)
