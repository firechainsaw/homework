#include"stusystem.h"
void printstudent(Node* head) {
	//定义指针指向头结点，用于遍历链表
	Node* move = head->next;
	while (move != NULL) {
	printf("学号:%d 姓名:%s 成绩:%d\n", move->stu.stunum, move->stu.stuname, move -> stu.score);
	//打印已录入的所有学生信息
		move = move->next;
	}
	
}