#include <iostream>

using namespace std;

int main() {

	int a;
	int b;

	cout << "コンピュータさん：値を2回入力して下さい。" << endl;
	
	cout << "あなた(1回目)：";
	cin >> a;

	cout << "あなた(2回目)：";
	cin >> b;

	cout << endl;
	cout << "コンピュータさん：入力された値を計算しました。" << endl;
	cout << endl;

	cout << a << "＋" << b << "＝" << a + b << endl;
	cout << a << "－" << b << "＝" << a - b << endl;
	cout << a << "×" << b << "＝" << a * b << endl;
	cout << a << "÷" << b << "＝" << a / b << " 余り" << a % b << endl;
}

//　■要点■
//　●値の入力を行うにはその値を入れる変数が必要。
//　●値の入力は『cin >> 変数;』とする。