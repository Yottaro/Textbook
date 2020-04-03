#include <iostream>

using namespace std;

//　■九九の表を作る関数■
int main() {

	cout << "コンピュータさん：九九の表を作成しました。" << endl;
	cout << endl;

	//　■縦の部分■
	for (int a = 1; a <= 9; a++) {

		//　■横の部分■
		for (int b = 1; b <= 9; b++) {

			//　■1桁、2桁の数を右に整頓する■
			if ((a * b) / 10 < 1) {

				cout << " ";
			}

			//　■数どうしの間を空ける■
			cout << a * b << " ";
		}

		cout << endl;
	}
}

//　■要点■
//　●『for (int i = 値; i < 回数; i++) {…}』で値から回数回ループする。