//#include <iostream>
//using namespace std;
///*
//全局区：全局变量 static静态变量 常量：字符串常量、const全局变量(常变量)
//
//非全局区：局部变量 const局部变量
//*/
//
////全局变量
//int g_a = 10;
//int g_b = 10;
//
////const全局变量(常变量)
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{       
//	//局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量地址：" << (int) & a << endl;
//	cout << "局部变量地址：" << (int)&b << endl;
//	
//	cout << "全局变量地址：" << (int)&g_a << endl;
//	cout << "全局变量地址：" << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量地址：" << (int)&s_a << endl;
//	cout << "静态变量地址：" << (int)&s_b << endl;
//
//	//常量
//	//字符串常量
//	cout << "字符串常量地址：" << (int)&"hello world"<< endl;
//
//	//const全局变量
//	cout << "const全局变量地址：" << (int)&c_g_a << endl;
//	cout << "const全局变量地址：" << (int)&c_g_b << endl;
//
//	//const局部变量
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "const局部变量地址：" << (int)&c_l_a << endl;
//	cout << "const局部变量地址：" << (int)&c_l_b << endl;
//
//
//	system("pause");
//	return 0;
//}