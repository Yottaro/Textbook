g = 5 #　■グローバル変数■

#　■足し算をする関数■
def Add() :

    local = 10 #　■ローカル変数■

    return local + g

#　■引き算をする関数■
def Subtract() :

    local = 20 #　■ローカル変数■

    return local - g

#　■掛け算をする関数■
def Multiply() :

    local = 3 #　■ローカル変数■

    return local * g

#　■割り算をする関数■
def Divide() :

    local = 75 #　■ローカル変数■

    return local / g

print('コンピュータさん：私は計算ができます。')
print()

print('ローカル ＋ グローバル =', Add())
print('ローカル － グローバル =', Subtract())
print('ローカル × グローバル =', Multiply())
print('ローカル ÷ グローバル =', Divide())
print()

#　■要点■
#　●関数の外にある変数『グローバル変数』はそれ以降に書かれた関数すべてで使える。
#　●関数の中にある変数『ローカル変数』はその関数内でしか使えない。
#　●関数の中にある変数はその関数が終わる時に破棄される。