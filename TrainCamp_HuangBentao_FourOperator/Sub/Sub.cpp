#include "Sub.h"
int Sub(int a, int b)
{
	if (a > 0 && b < 0)//正溢出
	{

		if (INT_MAX + b < a)
		{
			printf("数据溢出\n");
			return -1;
		}
	}
	if (a< 0 && b < 0)//负溢出
	{
		if (a + INT_MAX + 1 < -b)
		{
			printf("数据溢出\n");
			return -1;
		}
	}
	return a - b;
}

