#include <iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÃëÊý:____";
	long sec;
	cin >> sec;
	const int _sec = 60;
	const int _min = 60;
	const int _h = 24;
	int s, d, h, min;
	s = sec % _sec;
	int all;
	all = sec / _sec;
	min = all % _min;
	all = all / _min;
	h = all % _h;
	d = all / _h;
	cout << sec << " seconds = " << d << " days, " << h << " hours, " << min << " minutes, " << s << " seconds" << endl;
	system("pause");
	return 0;
}