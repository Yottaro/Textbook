#include <iostream>

using namespace std;

//�@���p���N���X(�e�N���X)��
class Parent {

protected:

	int* array; //�@���z��
	int size;
	int box;

public:

	Parent(int); //�@���R���X�g���N�^��
	~Parent(); //�@���f�X�g���N�^��
	void SET(); //�@�����́�
	virtual void SUM() = 0; //�@���v�Z��
	virtual void SHOW() = 0; //�@���\����
};

//�@�����ϒl�N���X(�q�N���X)��
class Average : public Parent {

public:

	Average(int); //�@���R���X�g���N�^��
	void SUM(); //�@���v�Z��
	void SHOW(); //�@���\����
};

//�@���ő�l�N���X�i�q�N���X�j��
class Max : public Parent {

public:

	Max(int); //�@���R���X�g���N�^��
	void SUM(); //�@���v�Z��
	void SHOW(); //�@���\����
};

//�@���p���N���X(�e�N���X)�̎���������
//�@���R���X�g���N�^��
Parent::Parent(int x) {

	array = new int [x];
	size = x;
	box = 0;
}

//�@���f�X�g���N�^��
Parent::~Parent() {

	delete[] array;
}

//�@�����́�
void Parent::SET() {

	int n; //�@�����[�J���ϐ���

	for (int i = 0; i < size; i++) {

		cout << "���Ȃ�(" << i + 1 << "���)�F";
		cin >> n;
		array[i] = n;
	}
}

//�@�����ϒl�N���X(�q�N���X)�̎���������
//�@���R���X�g���N�^��
//�@���e�N���X�̃R���X�g���N�^���q�N���X�̃R���X�g���N�^�Ƌ��L���遡
Average::Average(int x) : Parent(x) {}

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

//�@���ő�l�N���X(�q�N���X)�̎���������
//�@���R���X�g���N�^��
//�@���e�N���X�̃R���X�g���N�^���q�N���X�̃R���X�g���N�^�Ƌ��L���遡
Max::Max(int x) : Parent(x) {}

//�@���v�Z��
void Max::SUM() {

	box = array[0]; //�@���z������������遡

	for (int i = 0; i < size; i++) {

		//�@���wbox�x���傫�����l�����͂��ꂽ���ɒu�������遡
		if (box < array[i]) box = array[i];
	}
}

//�@���\����
void Max::SHOW() {

	SUM(); //�@���v�Z��

	cout << endl;
	cout << "�R���s���[�^����F�ő�l�� " << box << " �ł��B" << endl;
}

int main() {

	int n; //�@�����[�J���ϐ���

	cout << "�R���s���[�^����F���ϒl�ƍő�l���v�Z���܂��B�v�Z����񐔂���͂��ĉ������B" << endl;
	
	cout << "���Ȃ��F";
	cin >> n;

	//�@���R���X�g���N�^��
	Average average(n);
	Max max(n);

	cout << endl;
	cout << "�R���s���[�^����F�܂����ϒl�̌v�Z�����܂��B�l��" << n << "����͂��ĉ������B" << endl;

	average.SET(); //�@�����́�
	average.SHOW(); //�@���\����

	cout << endl;
	cout << "�R���s���[�^����F���ɍő�l�̌v�Z�����܂��B�l��" << n << "����͂��ĉ������B" << endl;

	max.SET(); //�@�����́�
	max.SHOW(); //�@���\����
}

//�@���v�_��
//�@������N���X����ɐV�����N���X����邱�Ƃ��ł���B������p���ƌ����B
//�@���p���́wclass �N���X��: �A�N�Z�X�w��q ���N���X���x�ƍs���B
//�@���h���N���X�͊��N���X�̃����o���p������B
//�@���wprotected:�x�ȍ~�̃����o�͊O���ɂ͌��J����Ȃ����h���N���X�ɂ͌��J�����B
//�@�������`�̊֐���h���N���X�ōĒ�`���邱�Ƃ��w�I�[�o�[���C�h�x�ƌ����B
//�@���wvirtual�x�̂���ꂽ�����o�֐����w���z�֐��x�ƌ����B
//�@���w���z�֐��x�̐錾��0��������`�ɏ����Ǝ����������Ȃ��Ȃ�B
//�@�������������Ȃ��w���z�֐��x���w�������z�֐��x�ƌ����B
//�@���w�I�[�o�[���C�h�x�Ɓw���z�֐��x�𗘗p���邱�Ƃ��w�|�����[�t�B�Y��(���Ԑ�)�x�ƌ����B