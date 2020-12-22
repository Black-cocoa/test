#ifndef __CONFIG_H
#define __CONFIG_H
#include "../Divs/Divs.h"
#include "windows.h"
//#define CONFIG_INI "C:\\Users\\黄本涛\\Documents\\TrainCamp_HuangBentao_FourOperator\\TrainCamp_HuangBentao_FourOperator\\Debug\\Test.ini"
#define CONFIG_INI "..\\Debug\\Test.ini"   //这里使用相对路径
#define DATA_SIZE  64
#define DATA_TEMP  32
union result_t
{
	int result_i;
	double result_d;
};
struct message_t   //文件中目标节点总信息
{
	char name[50];	//目标节点名
	int num;		//目标节点数	
};

struct parameterandresult //当前节点信息
{
	result_t a;	//参数1
	result_t b;	//参数2
	result_t result;	//预期值
};
bool get_case_space(message_t *result, char* section);/*返回第一个阶段中目标类型节点名和节点数*/
bool analyze(char* sectionaddr, parameterandresult *paraandresult);/*分析当前节点中的期望值和预期值并返回*/
bool double_judge_eq(double a, double b);	/*判断两个浮点数是否符合相等*/

#endif // ! __CONFIG_H



