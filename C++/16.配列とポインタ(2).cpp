#include <iostream>

using namespace std;

//　■平均値を求める関数■
int Average(int x, int size) {

	return x / size;
}

int main() {

	int* a;
	int b = 0;
	int size;

	cout << "コンピュータさん：計算する回数を入力して下さい。" << endl;
	
	cout << "あなた：";
	cin >> size;

	a = new int[size];

	cout << endl;
	cout <<  "コンピュータさん：値を" << size << "回入力して下さい。" << endl;

	for (int i = 0; i < size; i++) {

		cout << "あなた(" << i + 1 << "回目)：";
		cin >> a[i];
		b += a[i];
	}

	cout << endl;
	cout << "コンピュータさん：値の平均値は " << Average(b, size) << " です。" << endl;

	delete[] a;
}

//　■要点■
//　●『 new 型 [要素数] 』でメモリを動的に確保できる。
//　●アドレスは型へのポインタで受ける。
//　●使い終わったら必ず『delete[] アドレス;』でメモリを解放する。
//　●newに失敗すると例外が発生する。
//　●メモリの動的確保を使うとサイズが自由な配列が作れる。
//　●メモリの動的確保を使うと巨大な配列が安全に作れる。
//　●メモリの動的確保を使うと変数の寿命を自分で制御できる。