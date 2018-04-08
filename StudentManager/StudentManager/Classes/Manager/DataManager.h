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
	// 学生数据Map表
	std::map<int, StudentData> m_MapStuedntData;
	// 老师数据Map表
	std::map<int, TeacherData> m_MapTeacherData;
};
#endif // !__Data_Manager_H__
