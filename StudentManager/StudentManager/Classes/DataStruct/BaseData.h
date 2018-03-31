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
	// ����
	std::string m_strName;
	// ����
	std::string m_strPassword;
	// �˺�
	std::string m_strAccount;
	// ����
	TypeData m_eType;
};


#endif // !__Base_Data_H__
