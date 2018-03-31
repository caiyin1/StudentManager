#ifndef __StudentData_H__
#define __StudentData_H__
#include "TypeData.h"
#include "BaseData.h"

class StudentData: public BaseData
{
public:
	// ѧ���༶
	int m_nClass;
	// ��ѧ�ɼ�
	int m_nMathScore;
	// ���ĳɼ�
	int m_nChineseScore;
	// Ӣ��ɼ�
	int m_nEnglishScore;
	// �༶����
	int m_nClassRank;
	// ѧУ����
	int m_nSchoolRank;
	// �ܳɼ�
	int m_nSumScore;
};


#endif // !__StudentData_H__
