n, m, k = map(int, input().split())
a = [[0] * (m + 1) for _ in range(n + 1)]
ans = 0

for i in range(1, n + 1):
    row = list(map(int, input().split()))
    for j in range(1, m + 1):
        a[i][j] = row[j - 1]
        if k == 1:
            ans = max(ans, a[i][j])

for i1 in range(1, n + 1):
    for j1 in range(1, m + 1):
        for i2 in range(1, n + 1):
            for j2 in range(1, m + 1):
                if (i1, j1) != (i2, j2):
                    vals = []
                    x, y = (i1, j1), (i2, j2)
                    while 1 <= x[0] <= n and 1 <= x[1] <= m:
                        vals.append(a[x[0]][x[1]])
                        tmp = y
                        y = (y[0] + (y[0] - x[0]), y[1] + (y[1] - x[1]))
                        x = tmp
                    vals.sort(reverse=True)
                    if len(vals) >= k:
                        ans = max(ans, vals[k - 1])

print(ans)