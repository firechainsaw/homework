#include "stusystem.h"
#include"save&load.h"
void inputstudent(Node* head) 
{       //定义指针指向头结点，用于遍历链表
		Node* move = head;
		while (move->next != NULL) {
			move = move->next;
		}
		//创建结点
		Node* fresh = malloc(sizeof(Node));
		fresh->next = NULL;
		//输入用户信息
		printf("请输入学生的学号、姓名、成绩: ");
		scanf("%d%s%d", &fresh->stu.stunum, fresh->stu.stuname, &fresh->stu.score);
		//将新创建的结点，添加到链表的尾部
		move->next = fresh;
		save(head);
	}

