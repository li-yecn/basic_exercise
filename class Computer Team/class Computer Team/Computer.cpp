#include "Computer.h"
#include <iostream>
#include "CPU.h"
#include "CDROM.h"
#include "RAM.h"
using namespace std;

Computer::Computer(CPU C,RAM R, CDROM CD):cpu(C),ram(R),cdrom(CD)
{
	cout << "Computer���캯��" << endl;
}
Computer::~Computer()
{
	cout << "Competer��������" << endl;
}
void Computer::run()
{
	cout << "Computer��ʼ����" << endl;
}
void Computer::stop()
{
	cout << "Computerֹͣ����" << endl;
}
