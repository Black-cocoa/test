#ifndef __MUL_H
#define __MUL_H
#include <stdio.h>
#define	INT_MAX 2147483647	//宏定义int类型最大值
#ifdef  __cplusplus//条件编译去保证函数以C的方式编译
extern "C" {
#endif //  __cplusplus

	int Mul(int a, int b);	//计算两数相乘

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __MUL_H