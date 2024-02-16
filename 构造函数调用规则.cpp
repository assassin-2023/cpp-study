//#include <iostream>
//using namespace std;
//
///*
//默认情况下，编译器至少给一个函数添加3个函数
//默认构造
//默认析构
//默认拷贝
//用户定义提供有参构造，编译器不提供无参构造，提供默认拷贝构造
//用户定义提供拷贝构造，编译器不提供其他构造函数
//*/
//class person
//{
//public:
//	person()
//	{
//		cout << "无参" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "有参" << endl;
//	}
//	/*person(const person& p)
//	{
//		age = p.age;    //编译器提供的拷贝构造里有这句
//		cout << "拷贝" << endl;
//	}*/
//	
//	
//	~person()
//	{
//		cout << "析构" << endl;
//	}
//	int age;
//};
//
//void test01()//1.使用一个已创建的对象来初始化另一个对象
//{
//	person p1;
//	p1.age=18;
//	person p2(p1);
//	cout << "p2年龄" << p2.age << endl;
//	
//}
//
//
//
//
//int main()
//{
//	
//	test01();
//	system("pause");
//	return 0;
//}