#pragma once

enum EJie
{
	SATA = 1,
	USB
};

enum EAn
{
	external = 1,
	buintin
};

class CDROM
{
public:
	EJie jie;
	int nHuan;
	EAn an;
	CDROM(EJie J, int H, EAn A);
	CDROM();
	CDROM(const CDROM &c);
	~CDROM();
	void run();
	void stop();
};

