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
//		{ "张三",18,100 },
//		{"李四",18,100},
//		{"王五",18,100}
//	};
//};
//int main()
//{        
//	struct Student s = { "李四",16,98 };
//	struct Student * p = &s;//struct can be ignore
//	cout << "  姓名：" << p->name << "  年龄:  " << p->age << "  成绩:  " << p->score << endl;
//	
//	struct Teacher t1;
//	t1.name = "王老师";
//	t1.id = 12456;
//	cout << "  姓名：" << t1.name << "  id:  " << t1.id << "  学生姓名:  " << t1.arr[0].name <<
//		"  学生年龄:  " << t1.arr[0].age << "  学生成绩:  " << t1.arr[0].score<<endl;
//	
//	system("pause");
//	return 0;
//}