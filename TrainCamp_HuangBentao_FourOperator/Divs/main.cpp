#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Divs.h"

int main(void)
{
	//动态加载Mul动态库
	typedef int(*lucky)(int, int); //函数指针  用来接收乘法函数的地址
	HINSTANCE hdll;    //句柄		//接收库地址
	hdll = LoadLibrary("../Debug/Mul.dll");	//加载动态库，获取库地址
	if (NULL == hdll)	//加载失败
	{
		printf("无法载入动态库\n");
		FreeLibrary(hdll);	//释放加载库所占用的内存
	}
	lucky Mul = (lucky)GetProcAddress(hdll, "Mul");//获取乘法函数的地址
	if (NULL == Mul)	//获取失败
	{
		printf("无法获取函数地址\n");
		FreeLibrary(hdll);	//释放库占用的内存
	}
	printf("1 + 2 = %d\n", Add(1, 2));	//调用前面写的API接口看是否能够有效调用
	printf("2 - 1 = %d\n", Sub(2, 1));
	printf("1 * 2 = %d\n", Mul(1, 2));
	printf("2 / 1 = %f\n", Divs(2, 1));
	system("pause");
	return 0;
}
