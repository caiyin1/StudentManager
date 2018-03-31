#ifndef __Base_Data_H__
#define __Base_Data_H__
#include "TypeData.h"
#include <iostream>
#include <string.h>

class BaseData
{
public:
	//  ID
	int m_nId;
	// Ãû³Æ
	std::string m_strName;
	// ÃÜÂë
	std::string m_strPassword;
	// ÕËºÅ
	std::string m_strAccount;
	// ÀàĞÍ
	TypeData m_eType;
};


#endif // !__Base_Data_H__
