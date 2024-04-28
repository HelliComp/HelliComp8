s = input()
n = len(s)
cnt = [0] * 26
ans = 0

for i in range(n-1, -1, -1):
    num = ord(s[i]) - ord('a')
    cnt[num] += 1
    
    if i+2 < n and s[i+1] == s[i] and s[i+2] != s[i]:
        ans += n-i-2 - (cnt[num]-2)
        cnt = [0] * 26
        cnt[num] = n-i

print(ans)
