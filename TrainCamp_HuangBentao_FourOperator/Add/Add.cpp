#include "Add.h"
/*
功能：实现两个整数之间的加法运算
参数：a 加数1     加数2
返回值：成功返回两个数的和   数据溢出打印溢出信息返回-1
*/
int Add(int a, int b)
{
	if (a > 0&& b > 0)//正溢出		数据大于int类型的最大值
	{
		if (INT_MAX - a < b)
		{
			printf("加法数据正溢出\n");
			return -1;
		}
	}
	if (a< 0&&b < 0)//负溢出		数据小于int类型的最小值
	{
		if (-INT_MAX-1 - a > b)		//int类型数据最小值为-INT_MAX-1
		{
			printf("加法数据负溢出\n");
			return -1;
		}
	}
	return a + b;//正常
}

