#ifndef __ADD_H
#define __ADD_H
#include <stdio.h>
#define	INT_MAX 2147483647	//宏定义int类型数据的最大值
#ifdef  __cplusplus//条件编译去保证函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	int Add(int a, int b);	//计算两个整数之和

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __ADDLL_H
