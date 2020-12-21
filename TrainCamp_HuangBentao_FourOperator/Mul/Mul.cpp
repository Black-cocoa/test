#include "Mul.h"

int Mul(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;
	if (a << 31 && b << 31)//负越界判断
	{
		if ((a > 0) && (b < (-INT_MAX - 1) / a))
		{
			printf("数据越界\n");
			return -1;
		}
		if ((a < 0) && (b >(-INT_MAX -1)/a))
		{
			printf("数据越界\n");
			return -1;
		}
	}
	else              //正越界判断
	{
		if ((a > 0) && (b > INT_MAX / a))
		{
			printf("数据越界\n");
			return -1;
		}
		if ((a < 0) && (b < INT_MAX / a))
		{
			printf("数据越界\n");
			return -1;
		}
	}
	return a * b;
}
