#pragma once

//名字不要使用中文命名
enum ELei
{
	DDR1 = 1,
	DDR2,
	DDR3,
	DDR4
};

//类内成员，记得规范 m_ 开头，类名记得C开头
//而且不要这样子写，这样写很难看，一般构造函数、析构是接在public底下的
//变量基本都是放在最底下的，有的时候，为了跟方法分开，还会再加一个public
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

