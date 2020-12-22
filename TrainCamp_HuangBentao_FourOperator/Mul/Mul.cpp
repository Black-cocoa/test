#include "Mul.h"

int Mul(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;
	if ((a & 1 << 31)^(b & 1 << 31))	//判断a，b是否同号
	{
		if ((a > 0) && (b < (-INT_MAX - 1) / a))//负越界判断
		{
			printf("乘法负数据溢出\n");
			return -1;
		}
		if ((a < 0) && (b >(-INT_MAX -1)/a))
		{
			printf("乘法负数据溢出\n");
			return -1;
		}
	}
	else              //正越界判断
	{
		if ((a > 0) && (b > INT_MAX / a))
		{
			printf(" b = %d 乘法正数据1溢出\n",b);
			return -1;
		}
		if ((a < 0) && (b < INT_MAX / a))
		{
			printf("乘法正数据溢出\n");
			return -1;
		}
	}
	return a * b;
}
