#include "CDROM.h"
#include <iostream>
using namespace std;

CDROM::CDROM(EJie J, int H, EAn A)
{
	jie = J;
	nHuan = H;
	an = A;
	cout << "CDROM���캯��" << endl;
}
CDROM::CDROM(const CDROM &c)
{
	jie = c.jie;
	nHuan = c.nHuan;
	an = c.an;
	cout << "CDROM���ƹ��캯��" << endl;
}
CDROM::CDROM()
	{
	cout << "CDROMĬ�Ϲ��캯��" << endl;
	}

CDROM::~CDROM()
{
	cout << "CDROM��������" << endl;
}
void CDROM::run()
{
	cout << "CDRPM��ʼ����" << endl;
}
void CDROM::stop()
{
	cout << "CDROMֹͣ����" << endl;
}