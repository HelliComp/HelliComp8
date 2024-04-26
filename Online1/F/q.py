N = 123

a, b = map(int, input().split())
a -= 1
b -= 1

ans = [['#' for _ in range(N)] for _ in range(N)]

for i in range(1, 101):
    for j in range(1, 101):
        if i <= 50:
            ans[i][j] = '#'
        else:
            ans[i][j] = '.'

for i in range(1, 101, 2):
    for j in range(1, 101, 2):
        if a > 0:
            ans[i][j] = '.'
            a -= 1

for i in range(52, 101, 2):
    for j in range(1, 101, 2):
        if b > 0:
            ans[i][j] = '#'
            b -= 1

print("100 100")
for i in range(1, 101):
    for j in range(1, 101):
        print(ans[i][j], end='')
    print()
