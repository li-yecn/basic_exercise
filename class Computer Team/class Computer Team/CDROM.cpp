#include "CDROM.h"
#include <iostream>
using namespace std;

CDROM::CDROM(EJie J, int H, EAn A)
{
	jie = J;
	nHuan = H;
	an = A;
	cout << "CDROM构造函数" << endl;
}
CDROM::CDROM(const CDROM &c)
{
	jie = c.jie;
	nHuan = c.nHuan;
	an = c.an;
	cout << "CDROM复制构造函数" << endl;
}
CDROM::CDROM()
	{
	cout << "CDROM默认构造函数" << endl;
	}

CDROM::~CDROM()
{
	cout << "CDROM析构函数" << endl;
}
void CDROM::run()
{
	cout << "CDRPM开始运行" << endl;
}
void CDROM::stop()
{
	cout << "CDROM停止运行" << endl;
}