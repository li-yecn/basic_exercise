#include "CPU.h"
#include <iostream>
#include "Computer.h"
using namespace std;

CPU::CPU(CPU_rank R, int F, double V)
{
	rank = R;
	frequency = F;
	vlitage = V;
	cout << "CPU构造函数" << endl;
}
CPU::CPU(const CPU &a) 
{
	rank = a.rank;
	frequency = a.frequency;
	vlitage = a.vlitage;
	cout << "CPU复制构造函数" << endl;
}
CPU::CPU() 
{
	cout << "CPU默认构造函数" << endl;
}
CPU::~CPU()
{
	cout << "CPU析构函数" << endl;
}
void CPU::run()
{
	cout << "CPU开始运行" << endl;
}
void CPU::stop()
{
	cout << "CPU停止运行" << endl;
}