//#include <iostream>
//using namespace std;
//
///*
//浅：简单的赋值拷贝
//深：在堆区重新申请空间，进行拷贝
//总结：如果属性有在堆区开辟的，一定要自己提供拷贝函数
//*/
//
//class person
//{
//public:
//	person()
//	{
//		cout << "无参" << endl;
//	}
//	person(int a,int height)
//	{
//		age = a;
//		m_height =new  int(height);//new在堆区开辟数据，返回数据类型指针
//		cout << "有参" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝" << endl;
//		age = p.age; //m_height=p.m_height系统给的
//		m_height = new int(*p.m_height);//深拷贝，给p2搞一个新的堆区内存
//	}
//	
//	
//	~person()
//	{
//		//将在堆区开辟的数据释放
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "析构" << endl;
//	}
//	int age;
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(18,170);
//	cout << p1.age << endl;
//	cout << p1.m_height << endl;
//	
//	person p2(p1);
//	cout << p2.age << endl;
//	cout << p2.m_height << endl;
//}
//int main()
//{
//	test01();
//	/*
//	浅拷贝的问题：
//	p1先创建后释放。p2拷贝完p1后释放堆区内存，
//	而p1和p2指向同一块堆区内存，轮到p1释放时,
//	因为这个堆区内存已经被释放了，会存在重复释放，报错
//	*/
//	system("pause");
//	return 0;
//}