//#include <iostream>
//using namespace std;
///*
//ȫ������ȫ�ֱ��� static��̬���� �������ַ���������constȫ�ֱ���(������)
//
//��ȫ�������ֲ����� const�ֲ�����
//*/
//
////ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////constȫ�ֱ���(������)
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{       
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�������ַ��" << (int) & a << endl;
//	cout << "�ֲ�������ַ��" << (int)&b << endl;
//	
//	cout << "ȫ�ֱ�����ַ��" << (int)&g_a << endl;
//	cout << "ȫ�ֱ�����ַ��" << (int)&g_b << endl;
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬������ַ��" << (int)&s_a << endl;
//	cout << "��̬������ַ��" << (int)&s_b << endl;
//
//	//����
//	//�ַ�������
//	cout << "�ַ���������ַ��" << (int)&"hello world"<< endl;
//
//	//constȫ�ֱ���
//	cout << "constȫ�ֱ�����ַ��" << (int)&c_g_a << endl;
//	cout << "constȫ�ֱ�����ַ��" << (int)&c_g_b << endl;
//
//	//const�ֲ�����
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "const�ֲ�������ַ��" << (int)&c_l_a << endl;
//	cout << "const�ֲ�������ַ��" << (int)&c_l_b << endl;
//
//
//	system("pause");
//	return 0;
//}