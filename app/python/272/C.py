# 入力
N = int(input())
A = list(map(int, input().split()))

# 偶数と奇数のリスト
even = []
odd = []

# 奇数と偶数に分ける
for i in range(N):
    if A[i] % 2 == 0:
        even.append(A[i])
    else:
        odd.append(A[i])

## 降順にソート
even.sort(reverse=True)
odd.sort(reverse=True)

# 答えの初期化
ans = -1

if len(even) >= 2:
    ans = max(ans, even[0] + even[1])

if len(odd) >= 2:
    ans = max(ans, odd[0] + odd[1])

print(ans)
