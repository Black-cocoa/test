#ifndef __SUB_H
#define __SUB_H
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
//使用宏来生成动态库时
#ifdef SUB_EXPORTS   
#define DLL_SUB __declspec(dllexport)
#else 
#define DLL_SUB __declspec(dllimport)
#endif // SUB_EXPORTS   

#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	//DLL_SUB    使用宏的方式导出动态库时要加在函数的声明前面
	DLL_SUB int Sub(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __SUB_H