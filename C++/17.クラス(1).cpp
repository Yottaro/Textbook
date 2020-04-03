#include <iostream>

using namespace std;

//　■まんじゅうクラス■
class Manju {

private:

	int an;

public:

	void SET_an(int);
	void GET_an();
};

void Manju::SET_an(int x) {

	an = x;
}

void Manju::GET_an() {

	switch (an) {

	case 1:

		cout << "コンピュータさん：お待たせしました。<あんまん> です。" << endl;
		break;

	case 2:

		cout << "コンピュータさん：お待たせしました。<肉まん> です。" << endl;
		break;

	case 3:

		cout << "コンピュータさん：お待たせしました。<ピザまん> です。" << endl;
		break;

	case 4:

		cout << "コンピュータさん：お待たせしました。<カレーまん> です。" << endl;
		break;

	case 5:

		cout << "コンピュータさん：お待たせしました。<豚まん> です。" << endl;
		break;

	case 6: //　■なにもしない■
		break;

	default:

		cout << "コンピュータさん：その商品は販売していません。" << endl;
		break;
	}
}

int main() {

	Manju manju;
	int n = 0; //　■ローカル変数■

	cout << "コンピュータさん：いらっしゃいませ。ご注文はありますか？" << endl;
	cout << "<1.あんまん> <2.肉まん> <3.ピザまん> <4.カレーまん> <5.豚まん> <6.店を出る>" << endl;

	while (n != 6) {

		cout << "あなた：";
		cin >> n;

		manju.SET_an(n);
		manju.GET_an();

		if (n != 6) {

			cout << endl;
			cout << "コンピュータさん：ほかにご注文はありますか？" << endl;
		}
	}

	cout << "コンピュータさん：ありがとうございました。" << endl;
}

//　■要点■
//　●クラスはデータとその処理を１つにまとめたもの。
//　●クラスの各要素をメンバと言う。
//　●関数もメンバにできる。これをメンバ関数と言う。
//　●『public:』をつけるとメンバは外部に公開される。
//　●『private:』をつけるとメンバは外部に公開されない。
//　●アクセス指定はメンバ変数の値を保証するために重要である。