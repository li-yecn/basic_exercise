// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	struct Time {
		unsigned int year;
		enum month
		{
					 1,2,3,4,5,6,7,8,9,10,11,12
		};
		unsigned day;
		unsigned hour;
		unsigned minute;
		unsigned sec;
   };
	Time now = { 2020,2,14,6,49,35 };
	cout << "please input year:" << endl;
	cin >>now.year;
	cout << "please input month:" << endl;
	cin >> now.month;
	cout << "please input day:" << endl;
	cin >> now.day;
	cout << "please input hour:" << endl;
	cin >> now.hour;
	cout << "please input minute:" << endl;
	cin >> now.minute;
	cout << "please input sec:" << endl;
	cin >> now.sec;
	cout << "It is:" << now.year << " " << now.month << " " << now.day << " "
		 << now.hour << " " << now.minute << " " << now.sec << endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
