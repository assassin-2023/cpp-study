//#include <iostream>
//using namespace std;
///*
//常函数不可以修改成员属性
//成员属性加mutable可在常函数中修改
//常对象只能调常函数
//*/
//class person
//{
//public:
//	//this的本质是指针常量，指针指向不可修改，值可修改
//	// const person *const this
//	//加了const值也不可以修改了
//	void showperson()const//常函数
//	{
//		this->m_age = 18;
//		this->m_score = 100;
//	}
//	int m_age;
//	mutable int m_score;//特殊变量，关键字mutable
//
//	void func()
//	{
//
//	}
//};
//void test()
//{
//	const person p;//常对象
//	p.m_age = 18;
//	p.m_score = 100;//特殊值，在常对象中也可以修改
//	//常对象只能调用常函数
//	p.showperson();
//	p.func();//不行
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}