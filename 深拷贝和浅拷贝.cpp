//#include <iostream>
//using namespace std;
//
///*
//ǳ���򵥵ĸ�ֵ����
//��ڶ�����������ռ䣬���п���
//�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ��������
//*/
//
//class person
//{
//public:
//	person()
//	{
//		cout << "�޲�" << endl;
//	}
//	person(int a,int height)
//	{
//		age = a;
//		m_height =new  int(height);//new�ڶ����������ݣ�������������ָ��
//		cout << "�в�" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "����" << endl;
//		age = p.age; //m_height=p.m_heightϵͳ����
//		m_height = new int(*p.m_height);//�������p2��һ���µĶ����ڴ�
//	}
//	
//	
//	~person()
//	{
//		//���ڶ������ٵ������ͷ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "����" << endl;
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
//	ǳ���������⣺
//	p1�ȴ������ͷš�p2������p1���ͷŶ����ڴ棬
//	��p1��p2ָ��ͬһ������ڴ棬�ֵ�p1�ͷ�ʱ,
//	��Ϊ��������ڴ��Ѿ����ͷ��ˣ�������ظ��ͷţ�����
//	*/
//	system("pause");
//	return 0;
//}