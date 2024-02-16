//#include <iostream>
//#include <string>
//using namespace std;
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};//创建结构体要放在最前面
//void print1(struct Student s)//值传递
//{
//
//	cout << "  姓名：" << s.name << "\t年龄:  " << s.age << "\t成绩:  " << s.score << endl;
//}
//
//void print2(const struct Student *p)//地址传递，可以改值，节省内存空间   const可以防止改值
//{
//
//	cout << "  姓名：" << p->name << "\t年龄:  " << p->age << "\t成绩:  " << p->score << endl;
//}
//
//
//
//
//int main()
//{       
//	
//	struct Student s2 = { "李四",16,98 };
//	print1(s2);
//	print2(&s2);
//	
//	system("pause");
//	return 0;
//}