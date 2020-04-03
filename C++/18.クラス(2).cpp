#include <iostream>

using namespace std;

// �����ϒl�N���X��
class Average {

private:

	int* array; //�@���z��
	int size;
	int box;

public:

	Average(int); //�@���R���X�g���N�^��
	~Average(); //�@���f�X�g���N�^��
	void SET(); //�@�����́�
	void SUM(); //�@���v�Z��
	void SHOW(); //�@���\����
};

//�@���R���X�g���N�^��
Average::Average(int x) {

	array = new int [x];
	size = x;
	box = 0;
}

//�@���f�X�g���N�^��
Average::~Average() {

	delete[] array;
}

//�@�����́�
void Average::SET() {

	int n; //�@�����[�J���ϐ���

	for (int i = 0; i < size; i++) {

		cout << "���Ȃ�(" << i + 1 << "���)�F";
		cin >> n;
		array[i] = n;
	}
}

//�@���v�Z��
void Average::SUM() {

	int n = 0; //�@�����[�J���ϐ���

	for (int i = 0; i < size; i++) {

		n += array[i];
	}

	box = n / size;
}

//�@���\����
void Average::SHOW() {

	SUM(); //�@���v�Z��
	
	cout << endl;
	cout << "�R���s���[�^����F���ϒl�� " << box << " �ł��B" << endl;
}

int main() {

	int n;

	cout << "�R���s���[�^����F���ϒl���v�Z���܂��B�v�Z����񐔂���͂��ĉ������B" << endl;
	
	cout << "���Ȃ��F";
	cin >> n;

	Average average(n); //�@���R���X�g���N�^��

	cout << endl;
	cout << "�R���s���[�^����F�l��" << n << "����͂��ĉ������B" << endl;

	average.SET(); //�@�����́�
	average.SHOW(); //�@���\����
}

//�@���v�_��
//�@�������o�ϐ��̏������̓R���X�g���N�^�ōs���B
//�@���R���X�g���N�^�̓N���X���Ɠ������O�́A�߂�l�Ȃ��̊֐��ł���B
//�@���R���X�g���N�^�̓I�u�W�F�N�g����鎞�Ɏ����I�ɌĂ΂��B
//�@���R���X�g���N�^�Ɉ����������Ă��悢�B
//�@���ϐ��̎���������Ǝ����I�Ƀf�X�g���N�^���Ă΂��B
//�@���f�X�g���N�^�̓N���X���̑O�Ɂw~�x�̂������O�̊֐��ł���B
//�@���f�X�g���N�^�ɂ͖߂�l���������Ȃ��B