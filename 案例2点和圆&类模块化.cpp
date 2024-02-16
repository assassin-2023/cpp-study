//#include <iostream>
//#include "circle.h"
//#include "point.h"
//using namespace std;
////class point
////{
////public:
////	//设置获取xy
////	void setx(int x)
////	{
////		m_x = x;
////	}
////	int getx()
////	{
////		return m_x;
////	}
////	void sety(int y)
////	{
////		m_y = y;
////	}
////	int gety()
////	{
////		return m_y;
////	}
////private:
////	int m_x;
////	int m_y;
////};
////
////class circle
////{
////public:
////	void setr(int r)
////	{
////		m_r = r;
////	}
////	int getr()
////	{
////		return m_r;
////	}
////	void setcenter(point center)
////	{
////		m_center =center;
////	}
////	point getcenter()
////	{
////		return m_center;
////	}
////private:
////	int m_r;
////	point m_center;//在类中可以让另一个类变为成员
////};
//
//void isincircle(circle& c, point& p)//判断是否在圆内,距离公式
//{
//	int distance =
//		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	int r_distance =
//		c.getr() * c.getr();
//	if (distance == r_distance)
//	{
//		cout << "on" << endl;
//	}
//	else if (distance > r_distance)
//	{
//		cout << "out" << endl;
//	}
//	else
//	{
//		cout << "in" << endl;
//	}
//
//
//}
//int main()
//{
//	//创建圆
//	circle c;
//	c.setr(10);
//	point center;
//	center.setx(10);
//	center.sety(0);
//	c.setcenter(center);
//	//创建点
//	point p;
//	p.setx(10);
//	p.sety(11);
//
//	isincircle(c, p);
//	system("pause");
//	return NULL;
//}