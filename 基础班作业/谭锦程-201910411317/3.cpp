#include<iostream>
using namespace std;
void yuefen(int a, int b);
int  gongyue(int a, int b);
int main(void)
{
	int a, b;
	cout << "请分别输入分子分母："<<endl;
	cin >> a >> b;
	yuefen(a, b);
	system("pause");
	return 0;
	
}
void yuefen(int a, int b)
{
	if (b == 0) {
		cout << "None!"<<endl;
		return;
	}
	int n = gongyue(a,b);
	if (n == 1) {
		cout << a << "/" << b << endl;
	}
	for (int i = 0;; i++)
	{
		if (a / n != 0 && b / n != 0) {
			a /= n;
			b /= n;
		}
		if (a / n == 0 || b / n == 0)
		{   
			cout << a << "/" << b<<endl;
			break;
		}
	}
	

}
int  gongyue(int a, int b)
{   
	int t;
	if (a <b) {
		t = a;
		a = b;
		b = t;
	}
	while ((t = a % b) != 0)
	{
		a = b;
		b = t;
	}
	if (b == 1) {
		return b;
	}
	else return b;
}