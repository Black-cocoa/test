#include "stdafx.h"
#include "CppUnitTest.h"
#include "./Config.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(addtest)
		{
			// TODO: �ڴ�������Դ���
			message_t *p = (message_t *)malloc(sizeof(message_t));  //������ջ�ȡͨ�ýڵ���Ϣ�ṹ��
			char section[DATA_SIZE] = {0};		//������սڵ����ṹ��
			int a = get_case_space(p, "add");    //��ȡͨ�õĽڵ���Ϣ
			parameterandresult paraandresult;		//��ǰ�ڵ���Ϣ�ṹ��
			Assert::AreNotEqual(a,0);					//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�

			for ( int i = 1; i < p->num+1; i++)		//������ǰ���������в�������
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//�õ���ǰ�ڵ������
				a = analyze(section, &paraandresult);//�����ַ���������ز����ͽ��
				Assert::AreNotEqual(a, 0);						//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�
				Assert::AreEqual(paraandresult.result.result_i, Add(paraandresult.a.result_i, paraandresult.b.result_i));//���Ե�ǰ��������Ƿ����Ԥ��
			}
			free(p);
		}

		TEST_METHOD(subtest)
		{
			// TODO: �ڴ�������Դ���
			message_t *p = (message_t *)malloc(sizeof(message_t));  //������ջ�ȡͨ�ýڵ���Ϣ�ṹ��
			char section[DATA_SIZE] = { 0 };		//������սڵ����ṹ��
			int a = get_case_space(p, "sub");    //��ȡͨ�õĽڵ���Ϣ
			parameterandresult paraandresult;		//��ǰ�ڵ���Ϣ�ṹ��
			Assert::AreNotEqual(a, 0);					//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�

			for (int i = 1; i < p->num + 1; i++)		//������ǰ���������в�������
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//�õ���ǰ�ڵ������
				a = analyze(section, &paraandresult);//�����ַ���������ز����ͽ��
				Assert::AreNotEqual(a, 0);						//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�
				Assert::AreEqual(paraandresult.result.result_i, Sub(paraandresult.a.result_i, paraandresult.b.result_i));//���Ե�ǰ��������Ƿ����Ԥ��
			}
			free(p);
		}

		TEST_METHOD(multest)
		{
			// TODO: �ڴ�������Դ���
			message_t *p = (message_t *)malloc(sizeof(message_t));  //������ջ�ȡͨ�ýڵ���Ϣ�ṹ��
			char section[DATA_SIZE] = { 0 };		//������սڵ����ṹ��
			int a = get_case_space(p, "mul");    //��ȡͨ�õĽڵ���Ϣ
			parameterandresult paraandresult;		//��ǰ�ڵ���Ϣ�ṹ��
			Assert::AreNotEqual(a, 0);					//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�

			for (int i = 1; i < p->num + 1; i++)		//������ǰ���������в�������
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//�õ���ǰ�ڵ������
				a = analyze(section, &paraandresult);//�����ַ���������ز����ͽ��
				Assert::AreEqual(paraandresult.result.result_i, Mul(paraandresult.a.result_i, paraandresult.b.result_i));//���Ե�ǰ��������Ƿ����Ԥ��
			}
			free(p);
		}

		TEST_METHOD(divtest)
		{
			// TODO: �ڴ�������Դ���
			message_t *p = (message_t *)malloc(sizeof(message_t));  //������ջ�ȡͨ�ýڵ���Ϣ�ṹ��
			char section[DATA_SIZE] = { 0 };		//������սڵ����ṹ��
			int a = get_case_space(p, "div");    //��ȡͨ�õĽڵ���Ϣ
			double ActResult;							//���պ��������ʵ��ֵ
			parameterandresult paraandresult;		//��ǰ�ڵ���Ϣ�ṹ��
			Assert::AreNotEqual(a, 0);					//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�

			for (int i = 1; i < p->num + 1; i++)		//������ǰ���������в�������
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//�õ���ǰ�ڵ������
				a = analyze(section, &paraandresult);//�����ַ���������ز����ͽ��
				Assert::AreNotEqual(a, 0);						//�����жϻ�ȡ��Ϣ�Ƿ�ɹ�
				ActResult = Divs(paraandresult.a.result_i, paraandresult.b.result_i);//�õ������͵Ľ��
				a = double_judge_eq(paraandresult.result.result_d, ActResult);//�ж�Ԥ�ں���������������Ƿ����
				Assert::AreNotEqual(a,0);//���Ե�ǰ��������Ƿ����Ԥ��
			}
			free(p);
		}
	};
}