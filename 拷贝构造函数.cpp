//#include <iostream>
//using namespace std;
//
///*
//使用时机
//1.使用一个已创建的对象来初始化另一个对象
//2.值传递的方式给函数传参
//3.值方式返回局部对象
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
//	person(const person& p)
//	{
//		age = p.age;
//		cout << "拷贝" << endl;
//	}
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
//	person p1(20);
//	person p2(p1);
//	cout << "p2年龄：" << p2.age << endl;
//}
//
//
//
////2.值传递的方式给函数传参
//void dowork(person p)
//{
//}
//void test02()
//{
//	person p;
//	dowork(p);//实参p传给实参person p调用拷贝
//}
//
//
////3.值方式返回局部对象
//person dowork02()
//{
//	person p1;
//	return p1;//函数使用后p1消失，根据p1创建新对象返回person类型
//}
//void test03()
//{
//	person p= dowork02();
//	
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}