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
			// TODO: 在此输入测试代码
			message_t *p = (message_t *)malloc(sizeof(message_t));  //定义接收获取通用节点信息结构体
			char section[DATA_SIZE] = {0};		//定义接收节点名结构体
			int a = get_case_space(p, "add");    //获取通用的节点信息
			parameterandresult paraandresult;		//当前节点信息结构体
			Assert::AreNotEqual(a,0);					//断言判断获取信息是否成功

			for ( int i = 1; i < p->num+1; i++)		//遍历当前函数的所有测试样例
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//得到当前节点的名字
				a = analyze(section, &paraandresult);//分析字符串返回相关参数和结果
				Assert::AreNotEqual(a, 0);						//断言判断获取信息是否成功
				Assert::AreEqual(paraandresult.result.result_i, Add(paraandresult.a.result_i, paraandresult.b.result_i));//断言当前函数结果是否符合预期
			}
			free(p);
		}

		TEST_METHOD(subtest)
		{
			// TODO: 在此输入测试代码
			message_t *p = (message_t *)malloc(sizeof(message_t));  //定义接收获取通用节点信息结构体
			char section[DATA_SIZE] = { 0 };		//定义接收节点名结构体
			int a = get_case_space(p, "sub");    //获取通用的节点信息
			parameterandresult paraandresult;		//当前节点信息结构体
			Assert::AreNotEqual(a, 0);					//断言判断获取信息是否成功

			for (int i = 1; i < p->num + 1; i++)		//遍历当前函数的所有测试样例
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//得到当前节点的名字
				a = analyze(section, &paraandresult);//分析字符串返回相关参数和结果
				Assert::AreNotEqual(a, 0);						//断言判断获取信息是否成功
				Assert::AreEqual(paraandresult.result.result_i, Sub(paraandresult.a.result_i, paraandresult.b.result_i));//断言当前函数结果是否符合预期
			}
			free(p);
		}

		TEST_METHOD(multest)
		{
			// TODO: 在此输入测试代码
			message_t *p = (message_t *)malloc(sizeof(message_t));  //定义接收获取通用节点信息结构体
			char section[DATA_SIZE] = { 0 };		//定义接收节点名结构体
			int a = get_case_space(p, "mul");    //获取通用的节点信息
			parameterandresult paraandresult;		//当前节点信息结构体
			Assert::AreNotEqual(a, 0);					//断言判断获取信息是否成功

			for (int i = 1; i < p->num + 1; i++)		//遍历当前函数的所有测试样例
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//得到当前节点的名字
				a = analyze(section, &paraandresult);//分析字符串返回相关参数和结果
				Assert::AreEqual(paraandresult.result.result_i, Mul(paraandresult.a.result_i, paraandresult.b.result_i));//断言当前函数结果是否符合预期
			}
			free(p);
		}

		TEST_METHOD(divtest)
		{
			// TODO: 在此输入测试代码
			message_t *p = (message_t *)malloc(sizeof(message_t));  //定义接收获取通用节点信息结构体
			char section[DATA_SIZE] = { 0 };		//定义接收节点名结构体
			int a = get_case_space(p, "div");    //获取通用的节点信息
			double ActResult;							//接收函数运算的实际值
			parameterandresult paraandresult;		//当前节点信息结构体
			Assert::AreNotEqual(a, 0);					//断言判断获取信息是否成功

			for (int i = 1; i < p->num + 1; i++)		//遍历当前函数的所有测试样例
			{
				memset(section, 0, sizeof(section));
				sprintf(section, "%s%d", p->name, i);	//得到当前节点的名字
				a = analyze(section, &paraandresult);//分析字符串返回相关参数和结果
				Assert::AreNotEqual(a, 0);						//断言判断获取信息是否成功
				ActResult = Divs(paraandresult.a.result_i, paraandresult.b.result_i);//得到浮点型的结果
				a = double_judge_eq(paraandresult.result.result_d, ActResult);//判断预期和求的两个浮点数是否相等
				Assert::AreNotEqual(a,0);//断言当前函数结果是否符合预期
			}
			free(p);
		}
	};
}