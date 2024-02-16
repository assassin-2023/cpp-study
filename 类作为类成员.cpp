//#include <iostream>
//#include <string>
//using namespace std;
//
//class phone
//{
//public:
//	phone(string name)
//	{
//		m_pname = name;
//	}
//	string m_pname;
//
//};
//
// 
//class person
//{
//public:
//	person(string name, string pname):m_name(name),m_phone(pname)//隐式转换法
//	{
//	}
//	//先构造phone对象，再构造person；析构的顺序相反
//	string m_name;
//	phone m_phone;
//};
//
//void test01()
//{
//	person p("张三", "苹果15");
//	cout << p.m_name << "拿着" << p.m_phone.m_pname << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}