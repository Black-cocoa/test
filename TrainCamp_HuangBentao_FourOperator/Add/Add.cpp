#include "Add.h"

int Add(int a, int b)
{
	if (a > 0&& b > 0)//�����
	{
		if (INT_MAX - a < b)
		{
			printf("�ӷ��������\n");
			return -1;
		}
	}
	if (a< 0&&b < 0)//�����
	{
		if (-INT_MAX-1 - a > b)
		{
			printf("�ӷ��������\n");
			return -1;
		}
	}
	return a + b;//����
}

