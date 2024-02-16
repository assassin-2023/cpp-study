//#include <iostream>
//using namespace std;
//int main()
//{
//	//常量指针,指针指向的值不可以改，指针的指向可以改
//	/*
//	int a = 10, b = 20;
//	const int* p = &a;
//	*p = 20;//错
//	p = &b;//对
//	*/
//
//	//指针常量,指针指向的值可以改，指针的指向不可以改
//	/*
//	int a = 10, b = 20;
//	 int * const p = &a;
//	*p = 20;//对
//	p = &b;//错
//	*/
//
//	//如何记忆：看const修饰了什么，const*p则是限定解引用，也就是值；const p限定指针，也就是指向
//
//
//	//const修饰指针与常量,指针指向的值不可以改，指针的指向不可以改
//	/*
//	int a = 10, b = 20;
//	 const int * const p = &a;
//	*p = 20;//错
//	p = &b;//错
//	*/
//
//	system("pause");
//	return 0;
//}