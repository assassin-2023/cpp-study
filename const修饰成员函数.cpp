//#include <iostream>
//using namespace std;
///*
//�������������޸ĳ�Ա����
//��Ա���Լ�mutable���ڳ��������޸�
//������ֻ�ܵ�������
//*/
//class person
//{
//public:
//	//this�ı�����ָ�볣����ָ��ָ�򲻿��޸ģ�ֵ���޸�
//	// const person *const this
//	//����constֵҲ�������޸���
//	void showperson()const//������
//	{
//		this->m_age = 18;
//		this->m_score = 100;
//	}
//	int m_age;
//	mutable int m_score;//����������ؼ���mutable
//
//	void func()
//	{
//
//	}
//};
//void test()
//{
//	const person p;//������
//	p.m_age = 18;
//	p.m_score = 100;//����ֵ���ڳ�������Ҳ�����޸�
//	//������ֻ�ܵ��ó�����
//	p.showperson();
//	p.func();//����
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}