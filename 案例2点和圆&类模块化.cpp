//#include <iostream>
//#include "circle.h"
//#include "point.h"
//using namespace std;
////class point
////{
////public:
////	//���û�ȡxy
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
////	point m_center;//�����п�������һ�����Ϊ��Ա
////};
//
//void isincircle(circle& c, point& p)//�ж��Ƿ���Բ��,���빫ʽ
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
//	//����Բ
//	circle c;
//	c.setr(10);
//	point center;
//	center.setx(10);
//	center.sety(0);
//	c.setcenter(center);
//	//������
//	point p;
//	p.setx(10);
//	p.sety(11);
//
//	isincircle(c, p);
//	system("pause");
//	return NULL;
//}