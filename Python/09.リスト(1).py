a = []

print('コンピュータさん：値を5回入力して下さい。')

def Average(x):

    return sum(x) / len(x) #　■sum(x)はリストの合計値　len(x)はリストの長さを取得する。

for i in range(1, 6):

    print('あなた(', i, '回目)：', end=' ')
    a.append(int(input()))

print()
print('コンピュータさん：値の平均値は ', Average(a), ' です。')
print()

#　■要点■
#　●リストは配列をパワーアップさせた高機能なデータ構造である。