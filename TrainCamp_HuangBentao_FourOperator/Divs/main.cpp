#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Divs.h"

int main(void)
{
	typedef int(*lucky)(int, int); //����ָ��
	HINSTANCE hdll;    //���
	hdll = LoadLibrary("../Debug/Mul.dll");
	if (NULL == hdll)
	{
		printf("�޷����붯̬��\n");
		FreeLibrary(hdll);
	}
	lucky Mul = (lucky)GetProcAddress(hdll, "Mul");
	if (NULL == Mul)
	{
		printf("�޷���ȡ������ַ\n");
		FreeLibrary(hdll);
	}

	printf("1 + 2 = %d\n", Add(1, 2));
	printf("2 - 1 = %d\n", Sub(2, 1));
	printf("1 * 2 = %d\n", Mul(1, 2));
	printf("2 / 1 = %f\n", Divs(2, 1));
	system("pause");
	return 0;


}
