X, K = input().split()
X = list(map(int, list("0" + X)))  # Xを桁ごとに分けてリストにする
K = int(K)
N = len(X)
if K >= N:
    print(0)  # 自明に0になる答え
else:
    for i in reversed(range(N - K, N)):
        if X[i] >= 5:
            X[i - 1] += 1  # 繰り上がり
        X[i] = 0  # 四捨五入のどちらであってもこの桁は0になる
    for i in reversed(range(1, N - K)):
        if X[i] >= 10:
            X[i - 1] += 1  # 繰り上がり
        X[i] %= 10  # この桁に入るのは勿論一桁
    for start in range(N):  # 先頭の0は除外する
        if X[start] != 0:
            break
    for i in range(start, N):
        print(X[i], end="")
