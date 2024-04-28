mod=998244353
N,K=map(int,input().split())
dp=[[0]*(N+1)for _ in range(N+1)]
val=[0]*(2*N+1)
dp[0][0]=val[0]=1
for n in range(1,N+1):
  for k in range(n+1)[::-1]:
    dp[n][k]=val[2*n-2*k]
    val[2*n-k]=(val[2*n-k]+dp[n][k])%mod
print(dp[N][K])