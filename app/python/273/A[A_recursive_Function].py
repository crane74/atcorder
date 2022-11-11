# 入力の受け取り
N = int(input())

# 再帰関数
def recursive(k):
    if k == 0:
        return 1
    else:
        return k * recursive(k - 1)


print(recursive(N))
