//#include <iostream>
//using namespace std;
///*
//���������вι��� �޲ι��죨Ĭ�Ϲ��죩
//�����ͣ���ͨ���� ��������
//
//���÷�ʽ������ ��ʾ ��ʽת��
//
//*/
//class person
//{
//public:
//	person()//�޲ι��죨Ĭ�Ϲ��죩
//	{
//		cout << "�޲ι���" << endl;
//	}
//	person(int a)//�вι���
//	{
//		age = a;
//		cout << "�вι���" << endl;
//	}
//	person(const person &p)//��������
//	{  //������������ϵ����Կ����������ϣ������г�Ա��ʼ���³�Ա��
//		age = p.age;
//		cout << "��������" << endl;
//	}
//	~person()
//	{
//		cout << "����" << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	/*1.���ŷ�
//	person p1;//��Ҫ������person p1����������������Ϊ�Ǻ�������
//	person p2(10);
//	person p3(p2);
//	*/
//
//	/*2.��ʾ��
//	person p1;
//	person p2 = person(10);
//	person p3= person (p2);
//	//person(10)�������󣬸���ִ�к�ϵͳ�����ջ���������
//	//��Ҫ���ÿ������캯����ʼ����������person ��p3��
//	*/
//
//	/*3.��ʽת����
//	person p4=10;//person p4=person(10)
//	persosn p5=p4;
//	*/
//	//�Ƽ����ŷ�
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}