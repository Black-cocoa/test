#include "Sub.h"
/*
功能：实现两个整数之间的减法运算
参数：a 被减数   b 减数
返回值：成功返回两个数相处的结果    数据溢出打印溢出信息，返回-1
*/
int Sub(int a, int b)
{
	if (a > 0 && b < 0)//正溢出
	{

		if (INT_MAX + b < a)
		{
			printf("减法数据正溢出\n");
			return -1;
		}
	}
	if (a< 0 && b > 0)//负溢出
	{
		if ((a + INT_MAX) + 1 < b)
		{
			printf("减法数据负溢出\n");
			return -1;
		}
	}
	return a - b;	//正常
}

