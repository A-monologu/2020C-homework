#include <iostream>
using namespace std;
int main()
{
	const int c = 12;
	int height;
	cout << "�����Լ�����ߣ�Ӣ��Ϊ��λ)_";
	cin >> height;
	int a, b;
	float d;
	a = height / c;
	b = height % c;
	d = (b * 1.0) / (c*1.0);
	cout << "�����ת��ΪӢ��Ϊ:" << a << endl;
	system("pause");
	return 0;
}