my_list = []

print('コンピュータさん：5個の要素の値を入力して下さい。')

def Average(x):

    return sum(x) / len(x) #　■sum(x)はリストの合計値　len(x)はリストの長さを取得する。

for i in range(1, 6):

    print('あなた(', i, '回目)：', end=' ')
    my_list.append(int(input()))

print()
print('コンピュータさん：リストができました。')
print(my_list)
print()

my_tuple = tuple(my_list) #　■タプルに変換■
print('コンピュータさん：タプルに変換しました。')
print(my_tuple)

print()
print('コンピュータさん：要素の平均値は ', Average(my_tuple), ' です。')
print()

#　■要点■
#　●タプルはイミュータブル（変更不能）である。
#　●タプルはデータの変更や追加、削除ができない。
#　●変更する必要がないデータを扱うときに適している。
#　●タプルはリストよりも処理速度が少しだけ高速である。