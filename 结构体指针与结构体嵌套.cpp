//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct Teacher
//{
//	string name;
//	int id;
//	struct Student arr[3] =
//	{
//		{ "����",18,100 },
//		{"����",18,100},
//		{"����",18,100}
//	};
//};
//int main()
//{        
//	struct Student s = { "����",16,98 };
//	struct Student * p = &s;//struct can be ignore
//	cout << "  ������" << p->name << "  ����:  " << p->age << "  �ɼ�:  " << p->score << endl;
//	
//	struct Teacher t1;
//	t1.name = "����ʦ";
//	t1.id = 12456;
//	cout << "  ������" << t1.name << "  id:  " << t1.id << "  ѧ������:  " << t1.arr[0].name <<
//		"  ѧ������:  " << t1.arr[0].age << "  ѧ���ɼ�:  " << t1.arr[0].score<<endl;
//	
//	system("pause");
//	return 0;
//}