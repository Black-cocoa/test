#ifndef __SUB_H
#define __SUB_H
#include <stdio.h>
#define INT_MAX 2147483647	//宏定义最大int类型最大值
//使用宏来导出动态库
#ifdef SUB_EXPORTS   //标识宏，用来决定导入还是导出
#define DLL_SUB __declspec(dllexport)	//导出标识
#else 
#define DLL_SUB __declspec(dllimport)	//导入标识
#endif // SUB_EXPORTS   

#ifdef  __cplusplus//条件编译去保证函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	//DLL_SUB    使用宏的方式导出动态库时要加在函数的声明前面
	DLL_SUB int Sub(int a, int b);	//整数相减

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __SUB_H