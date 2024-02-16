//#include <iostream>
//using namespace std;
///*
//按参数：有参构造 无参构造（默认构造）
//按类型：普通构造 拷贝构造
//
//调用方式：括号 显示 隐式转换
//
//*/
//class person
//{
//public:
//	person()//无参构造（默认构造）
//	{
//		cout << "无参构造" << endl;
//	}
//	person(int a)//有参构造
//	{
//		age = a;
//		cout << "有参构造" << endl;
//	}
//	person(const person &p)//拷贝构造
//	{  //将传入的人身上的属性拷贝到我身上（用已有成员初始化新成员）
//		age = p.age;
//		cout << "拷贝构造" << endl;
//	}
//	~person()
//	{
//		cout << "析构" << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	/*1.括号法
//	person p1;//不要加括号person p1（），编译器会认为是函数声明
//	person p2(10);
//	person p3(p2);
//	*/
//
//	/*2.显示法
//	person p1;
//	person p2 = person(10);
//	person p3= person (p2);
//	//person(10)匿名对象，该行执行后，系统立刻收回匿名对象
//	//不要利用拷贝构造函数初始化匿名对象person （p3）
//	*/
//
//	/*3.隐式转换法
//	person p4=10;//person p4=person(10)
//	persosn p5=p4;
//	*/
//	//推荐括号法
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}