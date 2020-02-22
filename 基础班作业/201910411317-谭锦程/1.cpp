#include <iostream>
using namespace std;
typedef struct Student
{
	char name[10];
	char stu_id[15];
	int age;
	char sex[5];
}student;
student* find_id(char id[], student stus[], int num)
{
	int flag = 0;
	for (int i = 0; i < num; i++)
	{
		if (stus[i].stu_id == id) {
			return &stus[i];
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return NULL;
	}
}

int main(void)
{
	student person[100];
	char id[15];
	scanf_s("%s", &id);
	int num;
	scanf_s("%d", &num);
	student* goal;
	goal=find_id(id, person, num);
	return 0;
}