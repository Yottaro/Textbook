#include <iostream>

using namespace std;

//　■関数のプロトタイプ■
int Add();
int Subtract();
int Multiply();
int Divide();

int global = 5;

//　■足し算をする関数■
int Add() {

	int local = 10;

	return local + global;
}

//　■引き算をする関数■
int Subtract() {

	int local = 20;

	return local - global;
}

//　■掛け算をする関数■
int Multiply() {

	int local = 3;
	
	return local * global;
}

//　■割り算をする関数■
int Divide() {

	int local = 75;

	return local / global;
}

int main() {

	cout << "コンピュータさん：私は計算ができます。" << endl;
	cout << endl;

	cout << "ローカル ＋ グローバル ＝ " << Add() << endl;
	cout << "ローカル － グローバル ＝ " << Subtract() << endl;
	cout << "ローカル × グローバル ＝ " << Multiply() << endl;
	cout << "ローカル ÷ グローバル ＝ " << Divide() << endl;
}

//　■要点■
//　●関数の外で宣言した変数『グローバル変数』はそれ以降に書かれた関数すべてで使える。
//　●関数の中で宣言した変数『ローカル変数』はその関数内でしか使えない。
//　●関数の中で宣言した変数はその関数が終わる時に破棄される。