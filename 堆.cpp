//#include <iostream>
//using namespace std;
///*
//由程序员分配释放，若不释放，程序结束时由操作系统回收
//*/
//int* fun()
//{   //利用new将数据开辟到堆区，用delete进行释放
//	//new返回的是该数据类型的指针
//	int *p = new int(10);//用指针p（局部变量）接收堆区的地址
//	return p;
//}
//
//void test()
//{
//	int* arr = new int[10];//利用new开辟数组
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;//释放内存
//}
//
//
//int main()
//{
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;
//	cout << *p << endl;//内存已经被释放，再访问就是非法操作
//
//
//	system("pause");
//	return NULL;
//}