#ifndef __DIVS_H
#define __DIVS_H
#include <stdio.h>
#include "../Add/Add.h"
#include "../Sub/Sub.h"
#include "../Mul/Mul.h"
#ifdef  __cplusplus//��������ȥ��������C�ķ�ʽ����
extern "C" {
#endif //  __cplusplus
	extern int Sub(int a, int b);
	extern int Add(int a, int b);
	extern int Mul(int a, int b);
	float  Divs(int a, int b);
#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __DIVS_H
