#include "Computer.h"
#include <iostream>
#include "CPU.h"
#include "CDROM.h"
#include "RAM.h"
using namespace std;

Computer::Computer(CPU C,RAM R, CDROM CD):cpu(C),ram(R),cdrom(CD)
{
	cout << "Computer构造函数" << endl;
}
Computer::~Computer()
{
	cout << "Competer析构函数" << endl;
}
void Computer::run()
{
	cout << "Computer开始运行" << endl;
}
void Computer::stop()
{
	cout << "Computer停止运行" << endl;
}
