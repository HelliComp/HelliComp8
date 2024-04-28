from heapq import *
from bisect import *

N = 200023

n, D, A = map(int, input().split())
monster = [list(map(int, input().split())) for _ in range(n)]
monster.sort()
ans = 0
st = []
sum = 0
for i in range(n):
    while st and st[0][0] < monster[i][0]:
        _, h = heappop(st)
        sum -= h
    h = monster[i][1] - sum
    if h <= 0:
        continue
    num = (h + A - 1) // A
    damage = num * A
    ans += num
    sum += damage
    heappush(st, (monster[i][0] + 2 * D, damage))
print(ans)
