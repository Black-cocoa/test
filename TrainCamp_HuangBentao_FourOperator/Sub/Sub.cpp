#include "Sub.h"
int Sub(int a, int b)
{
	unsigned int c;
	if ((INT_MAX< a || INT_MAX >a) || (INT_MAX< b || INT_MAX >b))//�������
	{
		printf("�������\n");
		return -1;
	}
	if (a > 0 && b < 0)//�����
	{
		c = unsigned int(a) + unsigned int(b);
		if (c > INT_MAX)
		{
			printf("�������\n");
			return -1;
		}
	}
	if (a< 0 && b < 0)//�����
	{
		c = unsigned int(a) + unsigned int(b);
		if (c > INT_MAX)
		{
			printf("�������\n");
			return -1;
		}
	}
	return a - b;
}