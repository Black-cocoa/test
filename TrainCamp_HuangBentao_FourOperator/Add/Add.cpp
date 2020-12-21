#include "Add.h"

int Add(int a, int b)
{
	unsigned int c;
	if ((INT_MAX< a || INT_MAX >a) || (INT_MAX< b || INT_MAX >b))//输入溢出
	{
		printf("数据溢出\n");
		return -1;
	}
	if (a > 0&& b > 0)//正溢出
	{
		c = unsigned int(a) + unsigned int(b);
		if (c > INT_MAX)
		{
			printf("数据溢出\n");
			return -1;
		}
	}
	if (a< 0&&b < 0)//负溢出
	{
		c = unsigned int(a) + unsigned int(b);
		if (c > INT_MAX + 1)
		{
			printf("数据溢出\n");
			return -1;
		}
	}
	return a + b;//正常
}