#include <iostream>

using namespace std;

// ■平均値クラス■
class Average {

private:

	int* array; //　■配列■
	int size;
	int box;

public:

	Average(int); //　■コンストラクタ■
	~Average(); //　■デストラクタ■
	void SET(); //　■入力■
	void SUM(); //　■計算■
	void SHOW(); //　■表示■
};

//　■コンストラクタ■
Average::Average(int x) {

	array = new int [x];
	size = x;
	box = 0;
}

//　■デストラクタ■
Average::~Average() {

	delete[] array;
}

//　■入力■
void Average::SET() {

	int n; //　■ローカル変数■

	for (int i = 0; i < size; i++) {

		cout << "あなた(" << i + 1 << "回目)：";
		cin >> n;
		array[i] = n;
	}
}

//　■計算■
void Average::SUM() {

	int n = 0; //　■ローカル変数■

	for (int i = 0; i < size; i++) {

		n += array[i];
	}

	box = n / size;
}

//　■表示■
void Average::SHOW() {

	SUM(); //　■計算■
	
	cout << endl;
	cout << "コンピュータさん：平均値は " << box << " です。" << endl;
}

int main() {

	int n;

	cout << "コンピュータさん：平均値を計算します。計算する回数を入力して下さい。" << endl;
	
	cout << "あなた：";
	cin >> n;

	Average average(n); //　■コンストラクタ■

	cout << endl;
	cout << "コンピュータさん：値を" << n << "回入力して下さい。" << endl;

	average.SET(); //　■入力■
	average.SHOW(); //　■表示■
}

//　■要点■
//　●メンバ変数の初期化はコンストラクタで行う。
//　●コンストラクタはクラス名と同じ名前の、戻り値なしの関数である。
//　●コンストラクタはオブジェクトを作る時に自動的に呼ばれる。
//　●コンストラクタに引数があってもよい。
//　●変数の寿命がくると自動的にデストラクタが呼ばれる。
//　●デストラクタはクラス名の前に『~』のついた名前の関数である。
//　●デストラクタには戻り値も引数もない。