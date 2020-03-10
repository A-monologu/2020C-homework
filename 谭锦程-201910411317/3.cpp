#include <iostream>
using namespace std;
int main()
{
	cout << "请分别输入度 分 秒:" << endl;
	cout << "请输入度:__";
	int degree;
	cin >> degree;
	cout << "请输入分:__";
	int minute;
	cin >> minute;
	cout << "请输入秒:__";
	int second;
	cin >> second;
	const int first = 60;
	double lens;
	lens = degree + double(minute) / first + double(second) / first / first;
	cout << degree << " 度, " << minute << " 分, " << second << " 秒 = " << lens << " 度" << endl;
	system("pause");
	return 0;

}