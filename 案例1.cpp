//#include <iostream>
//#include <string>
//#include <ctime>//�������������ͷ�ļ�
//using namespace std;
////������ʦ��ÿ����ʦ������ѧ��
//struct Student
//{
//	string name;
//
//	int score;
//};
//
//struct Teacher
//{
//	string name;
//
//	struct Student arr1[3];
//};
//
//void input(struct Teacher arr2[], int len)
//{
//	string nameseed = "ABC";
//	for (int i = 0; i < len; i++)
//	{
//		arr2[i].name = "Teacher_";
//		arr2[i].name += nameseed[i];
//		for(int j =0;j<3;j++)
//		{
//			arr2[i].arr1[j].name = "student_";
//			arr2[i].arr1[j].name+= nameseed[j];//�����ַ���ƴ��
//			int random = rand() % 61 + 40;
//			arr2[i].arr1[j].score = random;
//		}
//
//	}
//}
//
//void output(struct Teacher arr2[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout <<"��ʦ������"<< arr2[i].name << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "\tѧ��������" << arr2[i].arr1[j].name << "\tѧ���ɼ���" << arr2[i].arr1[j].score << endl;
//		}
//
//	}
//}
//
//
//int main()
//{       
//	srand((unsigned int)time(NULL));//�������������
//	
//	struct Teacher arr2[3];
//	int len = sizeof(arr2) / sizeof(arr2[0]);
//	input( arr2, len);
//	output ( arr2,  len);
//	
//	system("pause");
//	return 0;
//}