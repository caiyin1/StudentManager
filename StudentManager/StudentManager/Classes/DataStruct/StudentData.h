#ifndef __StudentData_H__
#define __StudentData_H__
#include "TypeData.h"
#include "BaseData.h"

class StudentData: public BaseData
{
public:
	// 学生班级
	int m_nClass;
	// 数学成绩
	int m_nMathScore;
	// 语文成绩
	int m_nChineseScore;
	// 英语成绩
	int m_nEnglishScore;
	// 班级排名
	int m_nClassRank;
	// 学校排名
	int m_nSchoolRank;
	// 总成绩
	int m_nSumScore;
};


#endif // !__StudentData_H__
