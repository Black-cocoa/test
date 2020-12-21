#ifndef __ADD_H
#define __ADD_H
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	int Add(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __ADDLL_H
