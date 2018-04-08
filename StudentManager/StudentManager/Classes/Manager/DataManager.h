#ifndef __Data_Manager_H__
#define __Data_Manager_H__
#include "../DataStruct/TeacherData.h"
#include "../DataStruct/StudentData.h"
#include <map>


class DataManager
{
public:
	static DataManager* getInstance();
	void init();
public:
	// ѧ������Map��
	std::map<int, StudentData> m_MapStuedntData;
	// ��ʦ����Map��
	std::map<int, TeacherData> m_MapTeacherData;
};
#endif // !__Data_Manager_H__
