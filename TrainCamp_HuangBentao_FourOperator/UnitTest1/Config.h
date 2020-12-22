#ifndef __CONFIG_H
#define __CONFIG_H
#include "../Divs/Divs.h"
#include "windows.h"
//#define CONFIG_INI "C:\\Users\\�Ʊ���\\Documents\\TrainCamp_HuangBentao_FourOperator\\TrainCamp_HuangBentao_FourOperator\\Debug\\Test.ini"
#define CONFIG_INI "..\\Debug\\Test.ini"   //����ʹ�����·��
#define DATA_SIZE  64
#define DATA_TEMP  32
union result_t
{
	int result_i;
	double result_d;
};
struct message_t   //�ļ���Ŀ��ڵ�����Ϣ
{
	char name[50];	//Ŀ��ڵ���
	int num;		//Ŀ��ڵ���	
};

struct parameterandresult //��ǰ�ڵ���Ϣ
{
	result_t a;	//����1
	result_t b;	//����2
	result_t result;	//Ԥ��ֵ
};
bool get_case_space(message_t *result, char* section);/*���ص�һ���׶���Ŀ�����ͽڵ����ͽڵ���*/
bool analyze(char* sectionaddr, parameterandresult *paraandresult);/*������ǰ�ڵ��е�����ֵ��Ԥ��ֵ������*/
bool double_judge_eq(double a, double b);	/*�ж������������Ƿ�������*/

#endif // ! __CONFIG_H



