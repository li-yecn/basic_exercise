#include "CPU.h"
#include <iostream>
#include "Computer.h"
using namespace std;

CPU::CPU(CPU_rank R, int F, double V)
{
	rank = R;
	frequency = F;
	vlitage = V;
	cout << "CPU���캯��" << endl;
}
CPU::CPU(const CPU &a) 
{
	rank = a.rank;
	frequency = a.frequency;
	vlitage = a.vlitage;
	cout << "CPU���ƹ��캯��" << endl;
}
CPU::CPU() 
{
	cout << "CPUĬ�Ϲ��캯��" << endl;
}
CPU::~CPU()
{
	cout << "CPU��������" << endl;
}
void CPU::run()
{
	cout << "CPU��ʼ����" << endl;
}
void CPU::stop()
{
	cout << "CPUֹͣ����" << endl;
}