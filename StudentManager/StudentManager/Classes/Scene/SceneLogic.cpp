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
		printf("ѡ���½�û�����:\n");
		printf("1. ѧ��\t2. ��ʦ\t3. ����Ա\n�����룺");
		string strType = "\0";
		// ����ѡ���½������
		cin >>strType;
		// ��ȡ�û���Ϣ������
		UserManager* pUserManager = UserManager::getInstance();
		// ����
		if (strType.compare("1") == 0 || strType.compare("ѧ��") == 0 || strType.compare("1. ѧ��") == 0)
		{
			// ��¼����ѧ��
			pUserManager->setUserType(TypeData::Type_Student);
		}
		else if (strType.compare("2") == 0 || strType.compare("��ʦ") == 0 || strType.compare("2. ��ʦ") == 0)
		{
			// ��¼������ʦ
			pUserManager->setUserType(TypeData::Type_Teacher);
		}
		else if (strType.compare("3") == 0 || strType.compare("����Ա") == 0 || strType.compare("3. ����Ա") == 0)
		{
			// ��¼���͹���Ա
			pUserManager->setUserType(TypeData::Type_Manager);
		}
		else
		{
			printf("\n�������ʹ�������������\n");
			// ��������ѭ��
			continue;
		}
		// ����ɹ�����ѭ��
		break;
	}
	// ��¼ѭ��
	// ������������������ܵ�½����
	for (int i = 0; i < 3; i++)
	{
		string strAccount = "\0";
		string strPassword = "\0";
		// �����˺�


		printf("�������û�ID: ");
		cin >> strAccount;
		printf("\n����������:");
		cin >>strPassword;
	}



}

