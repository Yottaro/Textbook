#include <iostream>

using namespace std;

//　■関数のプロトタイプ■
int Add(int, int);
int Subtract(int, int);
int Multiply(int, int);
int Divide(int, int);
int Remain(int, int);

//　■足し算をする関数■
int Add(int x, int y) {

	return x + y;
}

//　■引き算をする関数■
int Subtract(int x, int y) {

	return x - y;
}

//　■掛け算をする関数■
int Multiply(int x, int y) {

	return x * y;
}

//　■割り算をする関数■
int Divide(int x, int y) {

	return x / y;
}

//　■余りを出す関数■
int Remain(int x, int y) {

	return x % y;
}

int main() {

	int a = 10;
	int b = 5;

	cout << "コンピュータさん：私は計算ができます。" << endl;
	cout << endl;

	cout << a << "＋" << b << "＝" << Add(a, b) << endl;
	cout << a << "－" << b << "＝" << Subtract(a, b) << endl;
	cout << a << "×" << b << "＝" << Multiply(a, b) << endl;
	cout << a << "÷" << b << "＝" << Divide(a, b) << " 余り" << Remain(a, b) << endl;
}

//　■要点■
//　●関数は引数と戻り値を持っている。
//　●関数は定義しなければ使えない。
//　●関数のプロトタイプを書けば、定義を後ろに回すことができる。
//　●関数のプロトタイプは関数の中身を書かないだけのもの。
//　●引数が要らない時はカッコの中を空にする。
//　●関数には必ずカッコが要る。
