#include <iostream>
using namespace std;
//��Ԫ��Ŀ������һ�����������������һ�����е�˽�г�Ա

class Building
{
	friend void goodgay(Building* building);
	//goodgay������Building���ѣ��ɷ�����˽�г�Ա
public:
	Building()
	{
		m_sittingroom = "����";
		bedroom = "����";
	}
public:
	string m_sittingroom;
private:
	string bedroom;
};

void goodgay(Building*building)
{
	cout << "visit my friend's:" << building->m_sittingroom << endl;
	cout << "visit my friend's:" << building->bedroom << endl;
}
void test01()
{
	Building building;
	goodgay(&building);
}
int main()
{
	test01();
	system("pause");
	return 0;
}