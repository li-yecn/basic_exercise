#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(int R, ELei L, int P)
{
	nRong = R;
	nLei = L;
	nPin = P;
	cout << "RAM���캯��" << endl;
}
RAM::RAM(const RAM &b)
{
	nRong = b.nRong;
	nLei = b.nLei;
	nPin = b.nPin;
	cout << "RAM���ƹ��캯��" << endl;
}
RAM::RAM()
{
	cout << "RAMĬ�Ϲ��캯��" << endl;
}
RAM::~RAM()
{
	cout << "RAM��������" << endl;
}
void RAM::run()
{
	cout << "RAM��ʼ����" << endl;
}
void RAM::stop()
{
	cout << "RAMֹͣ����" << endl;
}