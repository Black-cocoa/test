#include "Mul.h"

int Mul(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;
	if ((a & 1 << 31)^(b & 1 << 31))	//�ж�a��b�Ƿ�ͬ��
	{
		if ((a > 0) && (b < (-INT_MAX - 1) / a))//��Խ���ж�
		{
			printf("�˷����������\n");
			return -1;
		}
		if ((a < 0) && (b >(-INT_MAX -1)/a))
		{
			printf("�˷����������\n");
			return -1;
		}
	}
	else              //��Խ���ж�
	{
		if ((a > 0) && (b > INT_MAX / a))
		{
			printf(" b = %d �˷�������1���\n",b);
			return -1;
		}
		if ((a < 0) && (b < INT_MAX / a))
		{
			printf("�˷����������\n");
			return -1;
		}
	}
	return a * b;
}
