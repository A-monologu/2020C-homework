#include <iostream>
using namespace std;
int main()
{   
	int flag = 0;
	cout << "请输入一个数：";
	float n;
	cin >> n;
	int count = 0;
	while(n > 10) {
		n = n / 10;
		count++;
		flag = 1;
	}
	if (flag == 1) {
		cout << n << "e" << count << endl;
	}
	while (n < 1)
	{
		n = n * 10;
		count++;
	}
	if (flag == 0) {
		cout << n << "e-" << count << endl;
	}
	system("pause");
	return 0;

}