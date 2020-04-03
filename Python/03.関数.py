#　■足し算をする関数■
def Add(x, y) :
    s = 10
    return x + y

#　■引き算をする関数■
def Subtract(x, y) :

    return x - y

#　■掛け算をする関数■
def Multiply(x, y) :

    return x * y

#　■割り算をする関数■
def Divide(x, y) :

    return x / y

#　■余りを出す関数■
def Remain(x, y) :
    
    return x % y

a = 10
b = 5

print('コンピュータさん：私は計算ができます。')
print()

print(a, '＋', b, '=', Add(a, b))
print(a, '－', b, '=', Subtract(a, b))
print(a, '×', b, '=', Multiply(a, b))
print(a, '÷', b, '=', Divide(a, b), ' 余り', Remain(a, b))
print()

#　■要点■
#　●関数は引数と戻り値を持っている。
#　●関数は呼び出しのコードよりも先に定義しなければ使えない。
#　●引数が要らない時はカッコの中を空にする。
#　●関数には必ずカッコが要る。