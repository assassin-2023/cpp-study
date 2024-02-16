//#include <iostream>
//#include <string>
//using namespace std;
///*
//非静态成员函数只会生成一份函数实例，多个同类型的对象共用一块代码
//如何区分哪个对象调用这个函数
//this指针指向被调用的成员函数所属对象
//1.形参和成员变量同名，进行区分,解决名称冲突
//2.返回对象本身*this
//*/
//
//class person
//{
//public:
//	//person(int age)
//	//{
//	//	age = age;//编译器认为三个age是同一个
//	//}
//	person(int age)//法一
//	{
//		this->age = age;//编译器认为三个age是同一个
//	}
//
//	void personaddperson(person &p)
//	{
//		this->age += p.age;
//	}
//
//	person &personaddperson_plus(person& p)
//	{ //&personaddperson_plus引用是为了返回p2本身，共用p2内存
//		//对p2进行一次PersonAddAge操作后，将p2的结果拷贝为p2'，
//		// （值传递，调用拷贝函数，创建一个新匿名对象不能改变p2的值）
//		//重点
//		this->age += p.age;
//		return *this;
//		//如果直接返回Person类型，那返回的就不是*p1自身的解引用，
//		// 而是会创建新的对象返回 称为p1' 再调用 p1''，具体是啥？不知道，可以说和p1没啥关系了
//	}
//	
//	int age;//法二，改为m_age好习惯
//};
//
//
//void test01()//解决名称冲突
//{
//	person p1(18);//p1调用函数，this指向调用函数的p1
//	cout << "年龄" << p1.age << endl;
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	p2.personaddperson(p1);
//	cout << "p2年龄" << p2.age << endl;
//}
//
//void test03()
//{
//	person p1(10);
//	person p2(10);
//	//链式编程思想
//	p1.personaddperson_plus(p2).personaddperson_plus(p2).personaddperson_plus(p2);
//	cout << "p2年龄" << p1.age << endl;
//}
//int main()
//{
//	test01();
//	test02(); 
//	test03();
//	system("pause");
//	return 0;
//}