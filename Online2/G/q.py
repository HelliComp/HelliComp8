import sys
import numpy as np

def solve(P, Q):
    n = P.shape[0]
    INF = 1 << 60
    L = np.full(n + 1, INF, np.int64)
    ind = np.argsort(Q)
    for i in range(n):
        p = P[i]
        M = np.arange(p, n + 1, p)
        idx = np.sort(ind[M - 1])
        for d in idx[::-1]:
            k = np.searchsorted(L, d)
            L[k] = d
    ans = np.searchsorted(L, INF)
    return ans

def main():
    n = int(input())
    P = np.fromstring(input(), np.int64, sep=' ')
    Q = np.fromstring(input(), np.int64, sep=' ')
    print(solve(P, Q))


if __name__ == '__main__':
    if sys.argv[-1] == 'ONLINE_JUDGE':
        from numba.pycc import CC
        cc = CC('my_module')
        cc.export('solve', 'i8(i8[:], i8[:])')(solve)
        cc.compile()
        exit()
    from my_module import solve
    main()