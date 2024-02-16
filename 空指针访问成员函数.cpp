//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	void showa()
//	{
//		cout << "showa" << endl;
//	}
//
//	void show_age()
//	{
//		/*if (this == NULL)
//		{
//			return;
//		}*/
//		cout << "show_age" << m_age/*也就是this->m_age*/ << endl;
//	}//报错原因，传入空指针，this为空，也就没有m_age
//	int m_age;
//};
//void test01()
//{
//	person* p = NULL;
//	p->showa();
//	p->show_age();//报错
//}
//int main()
//{
//	system("pause");
//	return 0;
//}