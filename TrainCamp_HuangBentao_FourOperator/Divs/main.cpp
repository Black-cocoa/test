#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Divs.h"

int main(void)
{
	//��̬����Mul��̬��
	typedef int(*lucky)(int, int); //����ָ��  �������ճ˷������ĵ�ַ
	HINSTANCE hdll;    //���		//���տ��ַ
	hdll = LoadLibrary("../Debug/Mul.dll");	//���ض�̬�⣬��ȡ���ַ
	if (NULL == hdll)	//����ʧ��
	{
		printf("�޷����붯̬��\n");
		FreeLibrary(hdll);	//�ͷż��ؿ���ռ�õ��ڴ�
	}
	lucky Mul = (lucky)GetProcAddress(hdll, "Mul");//��ȡ�˷������ĵ�ַ
	if (NULL == Mul)	//��ȡʧ��
	{
		printf("�޷���ȡ������ַ\n");
		FreeLibrary(hdll);	//�ͷſ�ռ�õ��ڴ�
	}
	printf("1 + 2 = %d\n", Add(1, 2));	//����ǰ��д��API�ӿڿ��Ƿ��ܹ���Ч����
	printf("2 - 1 = %d\n", Sub(2, 1));
	printf("1 * 2 = %d\n", Mul(1, 2));
	printf("2 / 1 = %f\n", Divs(2, 1));
	system("pause");
	return 0;
}
