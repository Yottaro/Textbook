#include <iostream>

using namespace std;

//�@���܂񂶂イ�N���X��
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

		cout << "�R���s���[�^����F���҂������܂����B<����܂�> �ł��B" << endl;
		break;

	case 2:

		cout << "�R���s���[�^����F���҂������܂����B<���܂�> �ł��B" << endl;
		break;

	case 3:

		cout << "�R���s���[�^����F���҂������܂����B<�s�U�܂�> �ł��B" << endl;
		break;

	case 4:

		cout << "�R���s���[�^����F���҂������܂����B<�J���[�܂�> �ł��B" << endl;
		break;

	case 5:

		cout << "�R���s���[�^����F���҂������܂����B<�؂܂�> �ł��B" << endl;
		break;

	case 6: //�@���Ȃɂ����Ȃ���
		break;

	default:

		cout << "�R���s���[�^����F���̏��i�͔̔����Ă��܂���B" << endl;
		break;
	}
}

int main() {

	Manju manju;
	int n = 0; //�@�����[�J���ϐ���

	cout << "�R���s���[�^����F��������Ⴂ�܂��B�������͂���܂����H" << endl;
	cout << "<1.����܂�> <2.���܂�> <3.�s�U�܂�> <4.�J���[�܂�> <5.�؂܂�> <6.�X���o��>" << endl;

	while (n != 6) {

		cout << "���Ȃ��F";
		cin >> n;

		manju.SET_an(n);
		manju.GET_an();

		if (n != 6) {

			cout << endl;
			cout << "�R���s���[�^����F�ق��ɂ������͂���܂����H" << endl;
		}
	}

	cout << "�R���s���[�^����F���肪�Ƃ��������܂����B" << endl;
}

//�@���v�_��
//�@���N���X�̓f�[�^�Ƃ��̏������P�ɂ܂Ƃ߂����́B
//�@���N���X�̊e�v�f�������o�ƌ����B
//�@���֐��������o�ɂł���B����������o�֐��ƌ����B
//�@���wpublic:�x������ƃ����o�͊O���Ɍ��J�����B
//�@���wprivate:�x������ƃ����o�͊O���Ɍ��J����Ȃ��B
//�@���A�N�Z�X�w��̓����o�ϐ��̒l��ۏ؂��邽�߂ɏd�v�ł���B