#ifndef __SUB_H
#define __SUB_H
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
//ʹ�ú������ɶ�̬��ʱ
#ifdef SUB_EXPORTS   
#define DLL_SUB __declspec(dllexport)
#else 
#define DLL_SUB __declspec(dllimport)
#endif // SUB_EXPORTS   

#ifdef  __cplusplus//��������ȥ��������C�ķ�ʽ����
extern "C" {
#endif //  __cplusplus
	//DLL_SUB    ʹ�ú�ķ�ʽ������̬��ʱҪ���ں���������ǰ��
	DLL_SUB int Sub(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __SUB_H