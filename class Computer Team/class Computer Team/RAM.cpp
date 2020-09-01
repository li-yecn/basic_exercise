#include "RAM.h"
#include <iostream>
using namespace std;

RAM::RAM(int R, ELei L, int P)
{
	nRong = R;
	nLei = L;
	nPin = P;
	cout << "RAM构造函数" << endl;
}
RAM::RAM(const RAM &b)
{
	nRong = b.nRong;
	nLei = b.nLei;
	nPin = b.nPin;
	cout << "RAM复制构造函数" << endl;
}
RAM::RAM()
{
	cout << "RAM默认构造函数" << endl;
}
RAM::~RAM()
{
	cout << "RAM析构函数" << endl;
}
void RAM::run()
{
	cout << "RAM开始运行" << endl;
}
void RAM::stop()
{
	cout << "RAM停止运行" << endl;
}