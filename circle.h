#pragma once
#include <iostream>
#include "point.h"//������һ����Ҫ��ͷ�ļ�
using namespace std;
class circle
{
public:
	void setr(int r);
	
	int getr();

		void setcenter(point center);
	
		point getcenter();
	
private:
	int m_r;
	point m_center;//�����п�������һ�����Ϊ��Ա
};
