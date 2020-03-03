#include <iostream>
using namespace std;
double jiecheng(int n);
int main(void)
{
	int n;
	int i = 1;
	cout << "需要cos(X)的多少项：";
	cin >> n;
	if (i >= 1) {
		cout << "1";
			i++;
	}
	for (; i<=n; i++)
	{
		if (i % 2 == 0) {
			cout << "-x" << i << "/" << jiecheng(i);
		}
		if (i % 2 == 1) {
			cout << "+x" << i << "/" << jiecheng(i);
		}
	}
	system("pause");
	return 0;
}
double jiecheng(int n)
{   
	double all = 1;
	int i = 1;
	for (; i<=n; i++)
	{
		all = all* i;
	}
	return all;
}