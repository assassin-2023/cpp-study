//#include <iostream>
//#include <string>
//using namespace std;
////成员变量和成员函数是分开存储的
//class person
//{
//	int age;//非静态成员 属于类的对象
//	static int score;//静态成员 不属于类的对象
//	void func(){}//非静态成员函数 不属于类的对象
//	static void func2(){}//非静态成员函数 不属于类的对象
//};
//int person::score = 100;
//
//void test01()
//{
//	person p;
//	cout <<"size of p=" << sizeof(p) << endl;
//	//空类占用内存空间是1,每个空对象应该有独一无二的位置
//	//区分空对象占据内存的位置
//}
//void test02()
//{
//	person p;
//	cout << "size of p=" << sizeof(p) << endl;
//	//含非静态成员变量占用内存空间是4
//}
//void test03()
//{
//	person p;
//	cout << "size of p=" << sizeof(p) << endl;
//	//含静态成员变量和非静态成员占用内存空间是4
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}