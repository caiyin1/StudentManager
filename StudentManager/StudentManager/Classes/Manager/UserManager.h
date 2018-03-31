#ifndef __User_Manager_H__
#define __User_Manager_H__
#include "../DataStruct/BaseData.h"
#include "../DataStruct/TypeData.h"

class UserManager
{
public:
	// ����ģʽ
	static UserManager* getInstance();
	void init();
public:
	/*
	* @brief �����û��ĵ�½����
	*/
	void setUserType(const TypeData& eType);
	/*
	* @brief �����û����˺�����
	*/
	void setUserAccountAndPassword(const std::string& strAccount, const std::string& strPassWord);
	/*
	* @brief ��ȡ�û�����
	*/
	const BaseData& getUserBaseData();
	/*
	* @brief �������û��ĵ�½״̬
	*/
	void setUserPassStatus(bool b);
	/*
	* @brief ����û��Ƿ��½�ɹ�
	*/
	bool isUserPass();


private:
	// �û�������Ϣ
	BaseData m_baseData;
	// �û��Ƿ��½�ɹ�
	bool m_bPass;
};

#endif // !__User_Manager_H__
