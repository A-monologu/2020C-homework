#include <iostream>
using namespace std;
int main()
{
	using namespace std;

	cout << "请输入总人口:";
	long long allp;
	cin >> allp;
	cout << "请输入美国的人口:";
	long long ap;
	cin >> ap;
	float rate;
	rate = float(ap) / float(allp) * 100;
	cout << "比列为： " << rate << endl;
	system("pause");
	return 0;
}