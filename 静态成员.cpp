//#include <iostream>
//#include <string>
//using namespace std;
///*静态成员变量
//所有对象共享同一份数据
//在编译阶段分配内存
//类内声明，类外初始化
//
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
//*/
//
//class person
//{
//public:
//	static void func()
//	{
//		age = 20;
//		//score = 100;非静态成员报错
//		cout << "static void调用" << endl;
//	}
//	
//	
//	static int age;//类内声明
//	int score;
//};
//
//int person::age = 18;//类外初始化
//
//void test01()
//{
//	person p;
//	cout << p.age << endl;
//
//	person p2;
//	p2.age = 16;
//	cout << p.age << endl;//共享同一份数据
//
//}
//
//void test02()
//{
//	person p;
//	cout << p.age << endl;//通过对象访问
//
//	cout <<person::age << endl;//通过类名访问
//
//}
//
//void test03()
//{
//	person p;//通过对象访问
//	p.func();
//
//	person::func();//通过类名访问
//	
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}