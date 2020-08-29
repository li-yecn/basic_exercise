#pragma once
/*
玩家：
等级
战斗力
职业（战士、法师、吸血鬼、骑士）
名字
是否支持组队
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