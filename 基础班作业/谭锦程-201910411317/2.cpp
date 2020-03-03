#include <iostream>
using namespace std;
#define SIZE 10000
int en(int a, int first);
void emmm(int a, int first);
int main(void)
{
	cout << "请输入你要的数：";
	int a, first = 1;
	cin >> a;
	emmm(a, first);
	
}
void emmm(int a, int first)
{ 
	while(1)
	{
		int n = en(a, first);
		int i = first;
		for (; i <= n;i++)
		{  
			cout << i << "+";
		}
		cout<<endl;
		first++;
		if (first >= (a / 2+2))
		{
			return;
		}
	}
}
int en(int a, int first)
{
	for (;;)
	{
		if (a >0)
		{
			a = a - first;
			first++;
		}
		if (a < 0) {
			return 0;
		}
		if (a == 0) {
			return first;
		}
		
	}
}