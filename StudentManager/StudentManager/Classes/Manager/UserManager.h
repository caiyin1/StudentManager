#ifndef __User_Manager_H__
#define __User_Manager_H__
#include "../DataStruct/BaseData.h"
#include "../DataStruct/TypeData.h"

class UserManager
{
public:
	// 单例模式
	static UserManager* getInstance();
	void init();
public:
	/*
	* @brief 设置用户的登陆类型
	*/
	void setUserType(const TypeData& eType);
	/*
	* @brief 设置用户的账号密码
	*/
	void setUserAccountAndPassword(const std::string& strAccount, const std::string& strPassWord);
	/*
	* @brief 获取用户数据
	*/
	const BaseData& getUserBaseData();
	/*
	* @brief 设置用用户的登陆状态
	*/
	void setUserPassStatus(bool b);
	/*
	* @brief 检查用户是否登陆成功
	*/
	bool isUserPass();


private:
	// 用户基本信息
	BaseData m_baseData;
	// 用户是否登陆成功
	bool m_bPass;
};

#endif // !__User_Manager_H__
