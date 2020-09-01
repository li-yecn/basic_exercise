#pragma once
#include "CPU.h"
#include "CDROM.h"
#include "RAM.h"
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


