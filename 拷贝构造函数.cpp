//#include <iostream>
//using namespace std;
//
///*
//ʹ��ʱ��
//1.ʹ��һ���Ѵ����Ķ�������ʼ����һ������
//2.ֵ���ݵķ�ʽ����������
//3.ֵ��ʽ���ؾֲ�����
//*/
//class person
//{
//public:
//	person()
//	{
//		cout << "�޲�" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "�в�" << endl;
//	}
//	person(const person& p)
//	{
//		age = p.age;
//		cout << "����" << endl;
//	}
//	
//	
//	~person()
//	{
//		cout << "����" << endl;
//	}
//	int age;
//};
//
//void test01()//1.ʹ��һ���Ѵ����Ķ�������ʼ����һ������
//{
//	person p1(20);
//	person p2(p1);
//	cout << "p2���䣺" << p2.age << endl;
//}
//
//
//
////2.ֵ���ݵķ�ʽ����������
//void dowork(person p)
//{
//}
//void test02()
//{
//	person p;
//	dowork(p);//ʵ��p����ʵ��person p���ÿ���
//}
//
//
////3.ֵ��ʽ���ؾֲ�����
//person dowork02()
//{
//	person p1;
//	return p1;//����ʹ�ú�p1��ʧ������p1�����¶��󷵻�person����
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