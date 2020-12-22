#include "stdafx.h"//这个头文件在.C文件中有效
#include "config.h"

//得到样例信息
bool get_case_space(message_t *result, char* section)
{
	if (NULL == result || NULL == section)
	{
		return false;
	}
	strcpy(result->name, section);
	result->num = GetPrivateProfileIntA("message", section, 30, CONFIG_INI);
	return true;
}
/*分析当前节点中的期望值和预期值并返回*/
bool analyze(char* sectionaddr, parameterandresult *paraandresult)//分析字符串返回相关参数和结果
{
	int i = 0, j = 0,z = 0;
	char temp[DATA_TEMP] = { 0 };	//中转值
	char data[DATA_SIZE] = { 0 };//用来存储分析的参数字符串

	result_t *p = &paraandresult->a; //获取结构体成员首地址

	if (NULL == sectionaddr || NULL == paraandresult)//地址为空退出
	{
		return false;
	}
	GetPrivateProfileStringA(sectionaddr, "key", "", data, sizeof(data), CONFIG_INI);//得到有效参数字符串
	while (data[i] != '\0')//解析参数字符串
	{
		if (data[i] == '{' || data[i] == ' ')
			i++;
		else if (data[i] == '}')
		{
			p[j].result_i = atoi(temp);
			memset(temp, 0, sizeof(temp));
			j++;
			z = 0;
			break;
		}
		else if (data[i] == ',')
		{
			p[j].result_i = atoi(temp);
			memset(temp, 0, sizeof(temp));
			z = 0;
			i++;
			j++;
		}
		else
		{
			temp[z++] = data[i];
			i++;
		}
	}
	//预期结果
	memset(temp, 0, sizeof(temp));
	GetPrivateProfileStringA(sectionaddr, "value", "", data, sizeof(data), CONFIG_INI);//获取预期结果字符串
	strncpy(temp, sectionaddr, strlen(sectionaddr) - 1);
	if(!strcmp(temp,"div"))
		p[j].result_d = atof(data);
	else
	{
		
		p[j].result_i = atoi(data);
	}
	return true;
}
bool double_judge_eq(double a, double b)	/*判断两个浮点数是否符合相等*/
{
	if (fabs(a - b) < 1e-6)
		return true;
	else
		return false;
}