#include <iostream>
using namespace std;
int main()
{
	using namespace std;

	cout << "���������˿�:";
	long long allp;
	cin >> allp;
	cout << "�������������˿�:";
	long long ap;
	cin >> ap;
	float rate;
	rate = float(ap) / float(allp) * 100;
	cout << "����Ϊ�� " << rate << endl;
	system("pause");
	return 0;
}