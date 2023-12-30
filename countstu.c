#include"stusystem.h"
void countstu(Node* head) {
	int count = 0;//引入计数变量
	Node* move = head->next;//将指针指向头结点
	while (move != NULL) {
		count++;
		move = move->next;//运用指针计数所有学生人数
	}
	printf("学生总人数为:%d\n", count);
	
}