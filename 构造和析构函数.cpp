//#include <iostream>
//using namespace std;
///*
//对象的初始化和清理
//如果我们不提供构造和析构，编译器会提供（空实现 ）
//构造：创建对象时为对象成员属性赋值
//类名（）{}：没有返回值没有void，函数名与类名相同，函数可以有参数可发生重载
//构析：对象销毁前执行清理工作
//~类名（）{}：没有返回值没有void，函数名与类名相同，函数不可以有参数不可发生重载
//*/
//class person
//{
//public:
//	person()
//	{
//		cout << "hello" << endl;
//	}
//	~person()
//	{
//		cout << "bye" << endl;
//	}
//};
//void test()
//{
//	person x;//局部对象，栈上的数据，执行test（）后释放这个对象
//}
//int main()
//{
//	person p;//在main函数中，在return0之前都没有释放，所以只执行构造函数
//	test();
//	system("pause");
//	return 0;
//}