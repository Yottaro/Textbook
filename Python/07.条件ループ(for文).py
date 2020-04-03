print('コンピュータさん：九九の表を作成しました。')
print()

#　■縦の部分■
for a in range(1, 10):

    #　■横の部分■
    for b in range(1, 10):

        #　■1桁、2桁の数を右に整頓する■
        if ((a * b) / 10 < 1):

            print(' ', end= '')

        #　■数どうしの間を空ける■
        print(a * b, end=' ')

    print()

print()

#　■要点■
#　●『for 変数 in range(範囲): …』で値から回数回ループする。
#　●『range(n)』で0以上n未満の値を、『range(a, b)』でa以上b未満の値を設定できる。