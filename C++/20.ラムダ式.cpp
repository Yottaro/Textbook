#include <iostream>

using namespace std;

int main() {

	int a;
	int b;
	int c;

	cout << "コンピュータさん：値を2回入力して下さい。" << endl;

	cout << "あなた(1回目)：";
	cin >> a;

	cout << "あなた(2回目)：";
	cin >> b;

	//　■ラムダ式(足し算)■
	auto Add = [](int x, int y) {return x + y; };

	cout << endl;
	cout << "コンピュータさん：入力された値を計算しました。" << endl;
	cout << a << "＋" << b << "＝" << Add(a, b) << endl;
	cout << endl;

	cout << "コンピュータさん：さらに値を入力して下さい。" << endl;
	
	cout << "あなた(3回目)：";
	cin >> c;

	//　■ラムダ式(引き算)■
	auto Subtract = [c](int x, int y) {return (x + y) - c; };

	cout << endl;
	cout << "コンピュータさん：入力された値を計算しました。" << endl;
	cout << Add(a, b) << "－" << c << "＝" << Subtract(a, b) << endl;
}

//　■要点■
//　●ラムダ式は簡潔に関数オブジェクトを記述する機能である。
//　●ラムダ式の書式は『[キャプチャ] {仮引数リスト} {複合文}』。
//　●[=]ですべてのオブジェクトをコピーキャプチャできる。
//　●[&]ですべてのオブジェクトを参照キャプチャできる。