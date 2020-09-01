#pragma once

enum CPU_rank
{
	P1 = 1,
	P2,
	P3,
	P4,
	P5,
	P6,
	P7
};

class CPU
{
public:
	CPU_rank rank;
	int frequency;
	double vlitage;
	void run();
	void stop();
	CPU(CPU_rank R, int F, double V);
	CPU(const CPU &a);
	CPU();
	~CPU();
};

