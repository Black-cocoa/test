#include "Sub.h"
int Sub(int a, int b)
{
	if (a > 0 && b < 0)//�����
	{

		if (INT_MAX + b < a)
		{
			printf("�������\n");
			return -1;
		}
	}
	if (a< 0 && b < 0)//�����
	{
		if (a + INT_MAX + 1 < -b)
		{
			printf("�������\n");
			return -1;
		}
	}
	return a - b;
}

