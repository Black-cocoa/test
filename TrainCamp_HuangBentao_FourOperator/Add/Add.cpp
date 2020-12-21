#include "Add.h"

int Add(int a, int b)
{
	if (a > 0&& b > 0)//正溢出
	{
		if (INT_MAX - a < b)
		{
			printf("加法数据溢出\n");
			return -1;
		}
	}
	if (a< 0&&b < 0)//负溢出
	{
		if (-INT_MAX-1 - a > b)
		{
			printf("加法数据溢出\n");
			return -1;
		}
	}
	return a + b;//正常
}

