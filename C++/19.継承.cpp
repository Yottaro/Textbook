#include <iostream>

using namespace std;

//　■継承クラス(親クラス)■
class Parent {

protected:

	int* array; //　■配列■
	int size;
	int box;

public:

	Parent(int); //　■コンストラクタ■
	~Parent(); //　■デストラクタ■
	void SET(); //　■入力■
	virtual void SUM() = 0; //　■計算■
	virtual void SHOW() = 0; //　■表示■
};

//　■平均値クラス(子クラス)■
class Average : public Parent {

public:

	Average(int); //　■コンストラクタ■
	void SUM(); //　■計算■
	void SHOW(); //　■表示■
};

//　■最大値クラス（子クラス）■
class Max : public Parent {

public:

	Max(int); //　■コンストラクタ■
	void SUM(); //　■計算■
	void SHOW(); //　■表示■
};

//　■継承クラス(親クラス)の実装部分■
//　■コンストラクタ■
Parent::Parent(int x) {

	array = new int [x];
	size = x;
	box = 0;
}

//　■デストラクタ■
Parent::~Parent() {

	delete[] array;
}

//　■入力■
void Parent::SET() {

	int n; //　■ローカル変数■

	for (int i = 0; i < size; i++) {

		cout << "あなた(" << i + 1 << "回目)：";
		cin >> n;
		array[i] = n;
	}
}

//　■平均値クラス(子クラス)の実装部分■
//　■コンストラクタ■
//　■親クラスのコンストラクタを子クラスのコンストラクタと共有する■
Average::Average(int x) : Parent(x) {}

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

//　■最大値クラス(子クラス)の実装部分■
//　■コンストラクタ■
//　■親クラスのコンストラクタを子クラスのコンストラクタと共有する■
Max::Max(int x) : Parent(x) {}

//　■計算■
void Max::SUM() {

	box = array[0]; //　■配列を初期化する■

	for (int i = 0; i < size; i++) {

		//　■『box』より大きい数値が入力された時に置き換える■
		if (box < array[i]) box = array[i];
	}
}

//　■表示■
void Max::SHOW() {

	SUM(); //　■計算■

	cout << endl;
	cout << "コンピュータさん：最大値は " << box << " です。" << endl;
}

int main() {

	int n; //　■ローカル変数■

	cout << "コンピュータさん：平均値と最大値を計算します。計算する回数を入力して下さい。" << endl;
	
	cout << "あなた：";
	cin >> n;

	//　■コンストラクタ■
	Average average(n);
	Max max(n);

	cout << endl;
	cout << "コンピュータさん：まず平均値の計算をします。値を" << n << "回入力して下さい。" << endl;

	average.SET(); //　■入力■
	average.SHOW(); //　■表示■

	cout << endl;
	cout << "コンピュータさん：次に最大値の計算をします。値を" << n << "回入力して下さい。" << endl;

	max.SET(); //　■入力■
	max.SHOW(); //　■表示■
}

//　■要点■
//　●あるクラスを基に新しいクラスを作ることができる。これを継承と言う。
//　●継承は『class クラス名: アクセス指定子 基底クラス名』と行う。
//　●派生クラスは基底クラスのメンバを継承する。
//　●『protected:』以降のメンバは外部には公開されないが派生クラスには公開される。
//　●同じ形の関数を派生クラスで再定義することを『オーバーライド』と言う。
//　●『virtual』のつけられたメンバ関数を『仮想関数』と言う。
//　●『仮想関数』の宣言に0を代入する形に書くと実装を持たなくなる。
//　●実装を持たない『仮想関数』を『純粋仮想関数』と言う。
//　●『オーバーライド』と『仮想関数』を利用することを『ポリモーフィズム(多態性)』と言う。