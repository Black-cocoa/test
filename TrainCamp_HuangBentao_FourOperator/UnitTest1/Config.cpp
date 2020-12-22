#include "stdafx.h"//���ͷ�ļ���.C�ļ�����Ч
#include "config.h"

//�õ�������Ϣ
/*
���ܣ��õ���Ӧ�����Ĳ�������������Ϣ
������result����ز������������ֺ͸������ݳ�ȥ   section Ҫ��ĺ�����ini�ļ��ж�Ӧ�ļ�
����ֵ���ɹ�����true����0��   ʧ�ܷ���false��0��
*/
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

/*
���ܣ�������ǰ�ڵ��е�����ֵ��Ԥ��ֵ������
������sectionaddr�ڵ�����   paraandresult ���ض�Ӧ�ڵ��а����Ĳ�����Ԥ��ֵ
����ֵ���ɹ�����true����0��   ʧ�ܷ���false��0��
*/
bool analyze(char* sectionaddr, parameterandresult *paraandresult)//�����ַ���������ز����ͽ��
{
	int i = 0, j = 0,z = 0;
	char temp[DATA_TEMP] = { 0 };	//��תֵ
	char data[DATA_SIZE] = { 0 };//�����洢�����Ĳ����ַ���

	result_t *p = &paraandresult->a; //��ȡ�ṹ���Ա�׵�ַ

	if (NULL == sectionaddr || NULL == paraandresult)//��ַΪ���˳�
	{
		return false;
	}
	GetPrivateProfileStringA(sectionaddr, "key", "", data, sizeof(data), CONFIG_INI);//�õ���Ч�����ַ���
	while (data[i] != '\0')//���������ַ���
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
	//Ԥ�ڽ��
	memset(temp, 0, sizeof(temp));
	GetPrivateProfileStringA(sectionaddr, "value", "", data, sizeof(data), CONFIG_INI);//��ȡԤ�ڽ���ַ���
	strncpy(temp, sectionaddr, strlen(sectionaddr) - 1);
	if(!strcmp(temp,"div"))		//�����div�����򷵻�float���͵�Ԥ������
		p[j].result_d = atof(data);
	else
	{
		
		p[j].result_i = atoi(data);//��������ֻ��Ҫint���͵�Ԥ������
	}
	return true;
}
/*
���ܣ��ж������������Ƿ����
������a������   b������
����ֵ����ȷ���true����0��   ����ȷ���false��0��
*/
bool double_judge_eq(double a, double b)	/*�ж������������Ƿ�������*/
{
	if (fabs(a - b) < 1e-6)
		return true;
	else
		return false;
}