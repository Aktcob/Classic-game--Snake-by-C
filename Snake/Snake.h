#pragma once
#include "Ge.h"

class CSnake
{
private:

public:
	CSnake(void);
	virtual ~CSnake(void);
public:
	CString mm_string;
	int Time;
	int power;
	int m_marks;//����
	CString m_string;//�ַ���
	int n;//������
	CGe body[600];//��������
	int direction;//��ǰ������1�������ϣ�2�������ң�3�������£�4��������
public:
	CGe forwardup();//����ǰ��
	CGe forwardright();//����ǰ��
	CGe forwarddown();//����ǰ��
	CGe forwardleft();//����ǰ��
	bool IsBeanInSnake(int, int);
	bool SnakeEatBean(int, int);
	bool GameLose(CSnake);
	bool IsHeadPengShen(CSnake);

};
