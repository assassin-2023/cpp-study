//#include <iostream>
//using namespace std;
///*
//�ɳ���Ա�����ͷţ������ͷţ��������ʱ�ɲ���ϵͳ����
//*/
//int* fun()
//{   //����new�����ݿ��ٵ���������delete�����ͷ�
//	//new���ص��Ǹ��������͵�ָ��
//	int *p = new int(10);//��ָ��p���ֲ����������ն����ĵ�ַ
//	return p;
//}
//
//void test()
//{
//	int* arr = new int[10];//����new��������
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	delete[] arr;//�ͷ��ڴ�
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
//	cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٷ��ʾ��ǷǷ�����
//
//
//	system("pause");
//	return NULL;
//}