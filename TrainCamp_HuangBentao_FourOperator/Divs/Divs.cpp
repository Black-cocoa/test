#include "Divs.h"
/*
功能：实现两个整数之间的除法运算
参数：a 被除数   b 除数
返回值：成功返回两个数相处的结果    数据溢出打印溢出信息，返回-1
*/
double  Divs(int a, int b)
{
	if (b == 0)			//除数不能为0
	{
		printf("除数不能为0\n");
		return -1;
	}
	if ((a == -INT_MAX - 1) && (b == -1))//int最小值除以一个-1会超过int的最大值
	{
		printf("除法数据溢出");
		return -1;
	}
	return a*1.0 / b*1.0;	//这里选择返回double类型数据是因为只保留整数部分误差太大，此时上方溢出现象是不存在的
}