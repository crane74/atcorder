# 入力の受け取り
N, M = map(int, input().split())

# 同時に参加している人の組の記録
# (例)Pair[1][2]=1なら人1と人2が同時に参加している
Pair = [[0] * (N + 1) for i in range(N + 1)]

# M回
for i in range(M):
    # リストで受け取り
    kx = list(map(int, input().split()))
    # 0番目がk
    k = kx[0]
    # 1番目以降がx
    x = kx[1:]

    # a=0~(k-1)
    for a in range(k):
        # b=(a+1)~(k-1)
        for b in range(a + 1, k):
            # x[a]とx[b](参加者のa番目とb番目)が同時に参加している
            Pair[x[a]][x[b]] = 1

# a=1~N
for a in range(1, N + 1):
    # b=(a+1)~N
    for b in range(a + 1, N + 1):
        # 人aと人bが同時に参加していなければ
        if Pair[a][b] == 0:
            # 「No」を出力
            print("No")
            # 終了
            exit()

# 全組同時に参加していればここまで来る
# 「Yes」を出力
print("Yes")
