MOD = 10 ** 9 + 7
n, k = map(int, input().split())
graph = [[] for _ in range(n)]

for _ in range(n - 1):
  u, v = map(lambda x: int(x) - 1, input().split())
  graph[u].append(v)
  graph[v].append(u)
  
ans = k

for i in range(n):
  ch = len(graph[i]) - 1 + (i == 0)
  rem = k - 2 + (i == 0)
  
  for i in range(ch):
    ans = ans * rem % MOD
    rem -= 1

print(ans)