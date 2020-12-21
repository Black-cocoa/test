#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Divs.h"

int main(void)
{
	typedef int(*lucky)(int, int); //函数指针
	HINSTANCE hdll;    //句柄
	hdll = LoadLibrary("../Debug/Mul.dll");
	if (NULL == hdll)
	{
		printf("无法载入动态库\n");
		FreeLibrary(hdll);
	}
	lucky Mul = (lucky)GetProcAddress(hdll, "Mul");
	if (NULL == Mul)
	{
		printf("无法获取函数地址\n");
		FreeLibrary(hdll);
	}

	printf("1 + 2 = %d\n", Add(1, 2));
	printf("2 - 1 = %d\n", Sub(2, 1));
	printf("1 * 2 = %d\n", Mul(1, 2));
	printf("2 / 1 = %f\n", Divs(2, 1));
	system("pause");
	return 0;


}
