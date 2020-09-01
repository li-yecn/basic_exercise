#pragma once
#include "CPU.h"
#include "CDROM.h"
#include "RAM.h"

//私有变量直接加private修饰
class Computer
{
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	Computer(CPU C, RAM R, CDROM CDs);
	~Computer();
	void run();
	void stop();
}; 


