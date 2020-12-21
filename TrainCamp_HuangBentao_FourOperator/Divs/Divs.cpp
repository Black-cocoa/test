#include "Divs.h"

float  Divs(int a, int b)
{
	if (b == 0)
	{
		printf("除数不能为0\n");
		return -1;
	}
	if ((a == -INT_MAX - 1) && (b == -1))
	{
		printf("数据溢出");
		return -1;
	}
	return a*1.0 / b*1.0;
}