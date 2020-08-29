// 函数重载.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int max1(int a, int b)
{
	int x;
	a > b ?  x=a: x=b;
	return x;
}
int max1(int a, int b, int c)
{
	return max1(max1(a, b), c);
}
double max1(double a, double b)
{
	double x;
	a > b ?  x = a: x = b;
	return x;
}
double max1(double a, double b, double c)
{
	double x;
	a > b ?  x = a: x = b;
	x > c ?  x: x = c;
	return x;
}
int main()
{
	int a, b;
	cout << "please input a nimber:\n";
	cin >> a;
	cout << "please input another number:\n";
	cin >> b;
	cout << "输入的数字中最大的是:" << max1(a,b) << endl;
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
