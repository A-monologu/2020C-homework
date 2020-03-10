#include <iostream>
using namespace std;
int main()
{
	const int c = 12;
	int height;
	cout << "输入自己的身高（英寸为单位)_";
	cin >> height;
	int a, b;
	float d;
	a = height / c;
	b = height % c;
	d = (b * 1.0) / (c*1.0);
	cout << "你身高转换为英尺为:" << a << endl;
	system("pause");
	return 0;
}