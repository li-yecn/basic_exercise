#pragma once

enum ELei
{
	DDR1 = 1,
	DDR2,
	DDR3,
	DDR4
};

class RAM
{
public:
	int nRong;
	ELei nLei;
	int nPin;
	RAM(int R, ELei E, int P);
	RAM(const RAM &b);
	~RAM();
	RAM();
	void run();
	void stop();
};

