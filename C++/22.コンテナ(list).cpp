#include <iostream>
#include <list> //　■listを使用する■
#include <algorithm> //　■コンテナetc.のデータ構造に対して特定の処理をする関数を使用する■

using namespace std;

int main() {

	int a[5];
	int b;

	//　■listクラスのオブジェクトを定義する■
	list<int> list;

	cout << "コンピュータさん：5個の要素の値を入力してください。" << endl;

	for (int i = 0; i < 5; i++) {

		cout << "あなた(" << i + 1 << "回目)：";
		cin >> a[i];
		list.push_back(a[i]);
	}

    cout << endl;
	cout << "コンピュータさん：コンテナができました。" << endl;
    cout << endl;

	for_each(

		list.begin(), list.end(), [](int x) {cout << "[" << x << "]" << flush; }
	);

	cout << endl << endl;
	cout << "コンピュータさん：コンテナに対して何を行いますか？" << endl;
    cout << endl;
	cout << "<1.すべて2倍する> <2.すべて0にする> <3.逆順にする> <4.要素を追加する> <5.要素を削除する>" << endl;
    
    cout << "あなた：";
    cin >> b;

    //　■コンテナに対する処理の条件分岐部分■
    switch (b) {

        //　■すべて2倍する■
    case 1:

        cout << endl;
        cout << "コンピュータさん：すべて2倍しました。" << endl;
        cout << endl;

        for_each(

            list.begin(), list.end(), [](int x) {cout << "[" << x * 2 << "]" << flush; }
        );
        
        break;

        //　■すべて0にする■
    case 2:

        cout << endl;
        cout << "コンピュータさん：すべて0にしました。" << endl;
        cout << endl;
        fill(list.begin(), list.end(), 0);

        for_each(

            list.begin(), list.end(), [](int x) {cout << "[" << x << "]" << flush; }
        );

        break;

        //　■逆順にする■
    case 3:

        cout << endl;
        cout << "コンピュータさん：逆順にしました。" << endl;
        cout << endl;
        reverse(list.begin(), list.end());

        for_each(

            list.begin(), list.end(), [](int x) {cout << "[" << x << "]" << flush; }
        );

        break;

        //　■値を追加する■
    case 4:

        cout << endl;
        cout << "コンピュータさん：要素を追加しました。" << endl;
        cout << endl;
        list.push_back(10);

        for_each(

            list.begin(), list.end(), [](int x) {cout << "[" << x << "]" << flush; }
        );

        break;

        //　■値を削除する■
    case 5:

        cout << endl;
        cout << "コンピュータさん：要素を削除しました。" << endl;
        cout << endl;
        list.pop_back();

        for_each(

            list.begin(), list.end(), [](int x) {cout << "[" << x << "]" << flush; }
        );

        break;

        //　■上記の条件以外■
    default:

        cout << endl;
        cout << "コンピュータさん：プログラムを強制終了しました。";
        break;
    }

    cout << endl;
}

//　■要点■
//　●listクラステンプレートを使えば配列を便利に使える。
//　●listコンテナは不連続でメモリを確保する。
//　●要素の隣どうしのアドレスを有している。
//　●listコンテナは整列していないため高速な検索に優れている。