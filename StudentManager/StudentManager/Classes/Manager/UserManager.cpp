#include "UserManager.h"

static UserManager* s_global = nullptr;

UserManager* UserManager::getInstance()
{
	if (s_global == nullptr)
	{
		s_global = new UserManager;
		s_global->init();
	}
	return s_global;
};

void UserManager::init()
{
	// 初始化数据
	m_baseData.m_nId = 0;
	m_baseData.m_eType = TypeData::Type_Black;
	m_baseData.m_strName = "\0";
	m_baseData.m_strPassword = "\0";
	// 初始化用户的登陆状态
	m_bPass = false;
}

void UserManager::setUserType(const TypeData& eType)
{
	m_baseData.m_eType = eType;
}

void UserManager::setUserAccountAndPassword(const std::string& strAccount, const std::string& strPassWord)
{
	m_baseData.m_strAccount = strAccount;
	m_baseData.m_strPassword = strPassWord;
}

const BaseData& UserManager::getUserBaseData()
{
	return m_baseData;
}

void UserManager::setUserPassStatus(bool b)
{
	m_bPass = b;
}

bool UserManager::isUserPass()
{
	return m_bPass;
}
