//#include <iostream>
//using namespace std;
///*
//不要返回局部变量的引用
//函数的调用可以为左值
//*/
//
//int& test1()
//{
//	int a = 10; //存放在栈区
//	return a;
//}
//
//int& test2()
//{
//	static int a = 20;//创建静态变量，存储在全局区，由系统释放
//	return a;
//}
//
//int main()
//{
//	int& ref = test1();
//	cout << ref << endl;
//	cout << ref<< endl;
//
//	int& ref2 = test2();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//
//	test2() = 1000; //函数的调用可以为左值
//	cout << ref2 << endl;//test2()返回a的引用（看作是a的引用），a的一个引用为1000
//	//而a也叫ref2，故ref2也为1000
//	cout << ref2 << endl;
//
//	system("pause");
//	return NULL;
//}