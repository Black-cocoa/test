#ifndef __SUB_H
#define __SUB_H
#include <stdio.h>
#define INT_MAX 2147483647	//�궨�����int�������ֵ
//ʹ�ú���������̬��
#ifdef SUB_EXPORTS   //��ʶ�꣬�����������뻹�ǵ���
#define DLL_SUB __declspec(dllexport)	//������ʶ
#else 
#define DLL_SUB __declspec(dllimport)	//�����ʶ
#endif // SUB_EXPORTS   

#ifdef  __cplusplus//��������ȥ��֤������C�ķ�ʽ����
extern "C" {
#endif //  __cplusplus
	//DLL_SUB    ʹ�ú�ķ�ʽ������̬��ʱҪ���ں���������ǰ��
	DLL_SUB int Sub(int a, int b);	//�������

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __SUB_H