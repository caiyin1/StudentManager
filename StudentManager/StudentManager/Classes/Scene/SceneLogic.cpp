#include "SceneLogic.h"
#include "../Manager/UserManager.h"
#include "../DataStruct/TypeData.h"
#include <iostream>
#include <string>

using namespace std;

void handleLogIn()
{
	while (1)
	{
		printf("选择登陆用户属性:\n");
		printf("1. 学生\t2. 老师\t3. 管理员\n请输入：");
		string strType = "\0";
		// 输入选择登陆的类型
		cin >>strType;
		// 获取用户信息管理类
		UserManager* pUserManager = UserManager::getInstance();
		// 教研
		if (strType.compare("1") == 0 || strType.compare("学生") == 0 || strType.compare("1. 学生") == 0)
		{
			// 登录类型学生
			pUserManager->setUserType(TypeData::Type_Student);
		}
		else if (strType.compare("2") == 0 || strType.compare("老师") == 0 || strType.compare("2. 老师") == 0)
		{
			// 登录类型老师
			pUserManager->setUserType(TypeData::Type_Teacher);
		}
		else if (strType.compare("3") == 0 || strType.compare("管理员") == 0 || strType.compare("3. 管理员") == 0)
		{
			// 登录类型管理员
			pUserManager->setUserType(TypeData::Type_Manager);
		}
		else
		{
			printf("\n输入类型错误请重新输入\n");
			// 跳过本次循环
			continue;
		}
		// 输入成功调处循环
		break;
	}
	// 登录循环
	// 输入错误三次重新宣哲登陆类型
	for (int i = 0; i < 3; i++)
	{
		string strAccount = "\0";
		string strPassword = "\0";
		// 输入账号


		printf("请输入用户ID: ");
		cin >> strAccount;
		printf("\n请输入密码:");
		cin >>strPassword;
	}



}

