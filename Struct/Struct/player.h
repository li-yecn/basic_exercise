#pragma once
/*
��ң�
�ȼ�
ս����
ְҵ��սʿ����ʦ����Ѫ����ʿ��
����
�Ƿ�֧�����
*/
struct Player
{
	int level;
	int def;
	enum EOccupation
	{
		knight = 1,
		fashi,	
		zhanshi,
		xixuegui
	};
	EOccupation zhiye=knight;
	char name;
	bool decision;
};