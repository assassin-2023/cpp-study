//#include <iostream>
//using namespace std;
//class cube
//{
//public://���ò���ȡ�����
//	void setl(int l)
//	{
//		lengh = l;
//	}
//	int getl()
//	{
//		return lengh;
//	}
//
//	void setw(int w)
//	{
//		width = w;
//	}
//	int getw()
//	{
//		return width;
//	}
//
//	void seth(int h)
//	{
//		height = h;
//	}
//	int geth()
//	{
//		return height;
//	}
//	//���
//	int calv()
//	{
//		return lengh * width * height;
//	}
//	//���
//	int cals()
//	{
//		return 2 * (lengh * width + lengh * height + width * height);
//	}
//	//��Ա����
//	bool issame_class(cube& c)
//	{
//		if (height == c.geth() && width == c.getw() && lengh == c.getl())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//
//	}
//
//private:
//	int lengh;
//	int width;
//	int height;
//};
//
//bool issame(cube& c1, cube& c2)//ȫ�ֺ���
//{
//	if (c1.geth() == c2.geth() && c1.getw() == c2.getw() && c1.getl() == c2.getl())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	cube c1;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//
//	cube c2;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//	cout << "���" << c1.cals() << endl;
//	cout << "���" << c1.calv() << endl;
//
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//
//	bool ret2 = c1.issame_class(c2);
//	if (ret2)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//	system("pause");
//	return 0;
//}