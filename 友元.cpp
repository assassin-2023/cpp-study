#include <iostream>
using namespace std;
//友元的目的是让一个函数或者类访问另一个类中的私有成员

class Building
{
	friend void goodgay(Building* building);
	//goodgay函数是Building好友，可访问其私有成员
public:
	Building()
	{
		m_sittingroom = "客厅";
		bedroom = "卧室";
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