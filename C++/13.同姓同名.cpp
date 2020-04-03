#include <iostream>

using namespace std;

//　■関数のプロトタイプ■
int Abs(int);
double Abs(double);
void Show(int);
void Show(double);

//　■絶対値を求める関数■
int Abs(int x) {

	if (x < 0) return -x;
	else return x;
}

//　■絶対値を求める関数■
double Abs(double x) {

	if (x < 0) return -x;
	else return x;
}

//　■結果を表示する関数■
void Show(int x) {

	cout << endl;
	cout << "コンピュータさん：絶対値は " << Abs(x) << " です。" << endl;
}

//　■結果を表示する関数■
void Show(double x) {

	cout << endl;
	cout << "コンピュータさん：絶対値は " << Abs(x) << " です。" << endl;
}

int main() {

	int a;
	double b;

	cout << "コンピュータさん：整数値を入力して下さい。" << endl;
	
	cout << "あなた：";
	cin >> a;
	Show(a);

	cout << endl;
	cout <<  "コンピュータさん：小数値を入力して下さい。" << endl;
	
	cout << "あなた：";
	cin >> b;
	Show(b);
}

//　■要点■
//　●引数が違えば同じ名前の関数が作れる。
//　●戻り値が違うだけでは同じ名前の関数は作れない。
//　●同じ名前の違う関数を作ることを『オーバーロード』という。