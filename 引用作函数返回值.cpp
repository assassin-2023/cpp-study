//#include <iostream>
//using namespace std;
///*
//��Ҫ���ؾֲ�����������
//�����ĵ��ÿ���Ϊ��ֵ
//*/
//
//int& test1()
//{
//	int a = 10; //�����ջ��
//	return a;
//}
//
//int& test2()
//{
//	static int a = 20;//������̬�������洢��ȫ��������ϵͳ�ͷ�
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
//	test2() = 1000; //�����ĵ��ÿ���Ϊ��ֵ
//	cout << ref2 << endl;//test2()����a�����ã�������a�����ã���a��һ������Ϊ1000
//	//��aҲ��ref2����ref2ҲΪ1000
//	cout << ref2 << endl;
//
//	system("pause");
//	return NULL;
//}