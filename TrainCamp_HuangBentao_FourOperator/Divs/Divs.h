#ifndef __DIVS_H
#define __DIVS_H
#include <stdio.h>
#include "../Add/Add.h"			//在Divs中提供其它几个函数的接口
#include "../Sub/Sub.h"
#include "../Mul/Mul.h"
#ifdef  __cplusplus//条件编译去保证函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	extern 	DLL_SUB int Sub(int a, int b);	//两数相减
	extern int Add(int a, int b);			//两数相加
	extern int Mul(int a, int b);			//两数相乘
	double  Divs(int a, int b);				//两数相除
#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __DIVS_H
