//#include <iostream>
//#include <string>
//using namespace std;
///*
//�Ǿ�̬��Ա����ֻ������һ�ݺ���ʵ�������ͬ���͵Ķ�����һ�����
//��������ĸ���������������
//thisָ��ָ�򱻵��õĳ�Ա������������
//1.�βκͳ�Ա����ͬ������������,������Ƴ�ͻ
//2.���ض�����*this
//*/
//
//class person
//{
//public:
//	//person(int age)
//	//{
//	//	age = age;//��������Ϊ����age��ͬһ��
//	//}
//	person(int age)//��һ
//	{
//		this->age = age;//��������Ϊ����age��ͬһ��
//	}
//
//	void personaddperson(person &p)
//	{
//		this->age += p.age;
//	}
//
//	person &personaddperson_plus(person& p)
//	{ //&personaddperson_plus������Ϊ�˷���p2��������p2�ڴ�
//		//��p2����һ��PersonAddAge�����󣬽�p2�Ľ������Ϊp2'��
//		// ��ֵ���ݣ����ÿ�������������һ�������������ܸı�p2��ֵ��
//		//�ص�
//		this->age += p.age;
//		return *this;
//		//���ֱ�ӷ���Person���ͣ��Ƿ��صľͲ���*p1����Ľ����ã�
//		// ���ǻᴴ���µĶ��󷵻� ��Ϊp1' �ٵ��� p1''��������ɶ����֪��������˵��p1ûɶ��ϵ��
//	}
//	
//	int age;//��������Ϊm_age��ϰ��
//};
//
//
//void test01()//������Ƴ�ͻ
//{
//	person p1(18);//p1���ú�����thisָ����ú�����p1
//	cout << "����" << p1.age << endl;
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(10);
//	p2.personaddperson(p1);
//	cout << "p2����" << p2.age << endl;
//}
//
//void test03()
//{
//	person p1(10);
//	person p2(10);
//	//��ʽ���˼��
//	p1.personaddperson_plus(p2).personaddperson_plus(p2).personaddperson_plus(p2);
//	cout << "p2����" << p1.age << endl;
//}
//int main()
//{
//	test01();
//	test02(); 
//	test03();
//	system("pause");
//	return 0;
//}