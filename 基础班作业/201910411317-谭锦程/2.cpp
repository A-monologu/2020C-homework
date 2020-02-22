#include <iostream>
#include <string>
using namespace std;
typedef struct Student
{
	char name[10];
	char stu_id[15];
	int age;
	struct Student* next;
};
void find_infor(struct Student* goal)
{
	struct Student* head;
	head = goal;
	if (head == NULL)
	{   
		string you;
		cout << "是否需要输入信息:(请输入YES&NO)";
		cin >> you;
		if (you == "YES")
		{
			bianxie_1(head);
		}
		return;
	}
	while(head != NULL)
	{
		cout << "姓名：" << head->age << "id:" << head->stu_id << "   age:" << head->name;
		head = head->next;
	}
	string your;
	cout << "是否需要添加信息：(请输入YES&NO)";
	cin >> your;
	if (your == "YES")
	{
		bianxi_2(head);
		return;
	}
}
void bianxie_1(struct Student*en)
{
	string you;
	struct Student* head, *p, *q;
	head = en; q = NULL;
	do {
		p = (struct Student*)malloc(sizeof(struct Student));
		p->next = NULL;
		cout << "姓名："; cin >> head->name;
		cout << "年龄："; cin >> head->age;
		cout << "ID:"; cin >> head->stu_id;
		head = p;
		q = p;
		
		
		cout<< "是否需要添加信息：(请输入YES&NO)";
		cin >> you;
	} while (you == "YES");
	

}
void bianxi_2(struct Student* en)
{   
	struct Student* head;
	head = en;
	while (head != NULL)
	{
		head = head->next;
	}
	string you;
	struct Student* head, * p, * q;
	head = en; q = NULL;
	do {
		p = (struct Student*)malloc(sizeof(struct Student));
		p->next = NULL;
		cout << "姓名："; cin >> head->name;
		cout << "年龄："; cin >> head->age;
		cout << "ID:"; cin >> head->stu_id;
		head = p;
		q = p;


		cout << "是否需要添加信息：(请输入YES&NO)";
		cin >> you;
	} while (you == "YES");

}
int main(void)
{
	struct Student goal;
	find_infor(&goal);
	return 0;

}