#include<iostream>
using namespace std;
struct ListNode {
	int val;
	struct ListNode* next;
};
int main(void)
{
	ListNode man;
	reverseList(&man);
	return 0;
	
}
struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* awu;
	awu = head;
	if (awu == NULL) {
		return;
	}
	else {
		cout << "  "<<awu->val;
		awu = awu->next;
		reverseList(awu);
	}
}