#pragma once
#include <iostream>
#include "point.h"//引用另一个类要加头文件
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
	point m_center;//在类中可以让另一个类变为成员
};
