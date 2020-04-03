#include <iostream>

using namespace std;

//　■平均値を求める関数■
int Average(int x) {

	return x / 10;
}

int main() {

	int a[10]; //　■配列■
	int b = 0;

	cout << "コンピュータさん：値を10回入力して下さい。" << endl;

	//　■変数『b』に入力された値を加え続ける■
	for (int i = 0; i < 10; i++) {

		cout << "あなた(" << i + 1 << "回目)：";
		cin >> a[i];
		b += a[i];
	}

	cout << endl;
	cout << "コンピュータさん：値の平均値は " << Average(b) << " です。" << endl;
}

//　■要点■
//　●『int a[個数];』で個数個の変数を一気に作ることができる。
//　●『a』を配列変数と言う。
//　●配列変数は『a[0], a[1], …』というふうに使う。
//　●インデックス（カッコ内の数字）は０から始まる。