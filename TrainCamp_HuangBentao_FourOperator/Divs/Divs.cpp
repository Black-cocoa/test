#include "Divs.h"

float  Divs(int a, int b)
{
	if (b == 0)
	{
		printf("��������Ϊ0\n");
		return -1;
	}
	if ((a == -INT_MAX - 1) && (b == -1))
	{
		printf("�������");
		return -1;
	}
	return a*1.0 / b*1.0;
}