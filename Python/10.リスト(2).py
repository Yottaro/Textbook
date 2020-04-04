list = []

print('コンピュータさん：5個の要素の値を入力して下さい。')

for i in range(1, 6):

    print('あなた(', i, '回目)：', end=' ')
    list.append(int(input()))

print()
print('コンピュータさん：リストができました。')
print(list)

print()
print('コンピュータさん：リストに対して何を行いますか？')
print()
print('<1.すべて2倍する> <2.すべて0にする> <3.逆順にする> <4.要素を追加する> <5.要素を削除する>')

a = int(input())
print()

#　■条件分岐■
#　■すべて2倍する■
if (a == 1):

    print('コンピュータさん：すべて2倍しました。')

    for i in range(0, 5):
        
        list[i] = list[i] * 2

#　■すべて0にする■
elif (a == 2):

    print('コンピュータさん：すべて0にしました。')

    for i in range(0, 5):
        
        list[i] = 0

#　■逆順にする■
elif (a == 3):

    print('コンピュータさん：逆順にしました。')
    list.reverse()

#　■要素を追加する■
elif (a == 4):

    print('コンピュータさん：要素を追加しました。')
    list.append(10)

#　■要素を削除する■
elif (a == 5):

    print('コンピュータさん：要素を削除しました。')
    list.pop(-1)

else:

    print('コンピュータさん：入力されたコマンドは無効です。')

print(list)
print()

#　■要点■
#　●リストを使えば配列を便利に使える。