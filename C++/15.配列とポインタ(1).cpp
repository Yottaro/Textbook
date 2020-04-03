#include <iostream>

using namespace std;

//　■アドレスをポインタで受ける関数■
void Address(int* p) {

	for (int i = 0; i < 5; i++) {

		cout << "["<< i << "]" << (size_t)&p[i] << endl;
	}
}

int main() {

	int a[5];

	cout << "コンピュータさん：アドレスを表示しました。" << endl;
	cout << endl;

	for (int i = 0; i < 5; i++) {

		cout << "[" << i << "]" << (size_t)&a[i] << endl;
	}

	cout << endl;
	cout << "コンピュータさん：アドレスを受け渡しました。" << endl;
	cout << endl;

	Address(a);
}

//　■要点■
//　●配列変数はメモリ上に連続して存在している。
//　●配列変数を引数にとる時は、配列変数の先頭要素のアドレスを渡して、ポインタで受ける。