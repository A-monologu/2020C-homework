#include <iostream>
using namespace std;
int main()
{
	cout << "��ֱ������ �� ��:" << endl;
	cout << "�������:__";
	int degree;
	cin >> degree;
	cout << "�������:__";
	int minute;
	cin >> minute;
	cout << "��������:__";
	int second;
	cin >> second;
	const int first = 60;
	double lens;
	lens = degree + double(minute) / first + double(second) / first / first;
	cout << degree << " ��, " << minute << " ��, " << second << " �� = " << lens << " ��" << endl;
	system("pause");
	return 0;

}