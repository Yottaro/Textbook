#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "コンピュータさん：コマンドを選択して下さい。" <<endl;
	cout << endl;
	cout << "<1.続きから始める> <2.最初から始める> <3.ふしぎなおくりもの>" << endl;
	
	cout << "あなた：";
	cin >> a;

	//　■条件分岐■
	switch (a) {

	//　■入力された値が1の場合■
	case 1:

		cout << endl;
		cout << "コンピュータさん：<1.続きから始める> が選択されました。" << endl;
		break;

	//　■入力された値が2の場合■
	case 2:

		cout << endl;
		cout << "コンピュータさん：<2.最初から始める> が選択されました。" << endl;
		break;

	//　■入力された値が3の場合■
	case 3:

		cout << endl;
		cout << "コンピュータさん：<3.ふしぎなおくりもの> が選択されました。" << endl;
		break;

	//　■上記の条件を満たさない場合■
	default:

		cout << endl;
		cout << "コンピュータさん：入力されたコマンドが無効です。" << endl;
		break;
	}
}

//　■要点■
//　●『switch(式) {分岐}』を使うと多条件分岐になる。
//　●式が『case 値:』で示す値の時にはそこへ飛ぶ。
//　●それ以外の場合は『default:』に飛ぶ。
//　●switch文を抜けるには『break』を使う。