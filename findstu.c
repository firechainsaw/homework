#include"stusystem.h"
void findstu(Node* head) {
	int stunum;//引入用户查找的依据变量
printf("请输入要查找的学生的学号: ");
scanf("%d", &stunum);
Node* move = head->next;//指针初始化
while (move != NULL) 
{
	if (move->stu.stunum == stunum)//将用户输入学号与结构体中保存的学号比对，如果已保存则调出相关数据
	{
		printf("学号:%d 姓名:%s 成绩:%d\n", move->stu.stunum, move->stu.stuname,
			move->stu.score);
		system("pause");//将用户查找的需要数据固定住，以免进入下次循环
		return;
	}
	move = move->next;
}
printf("未查找到学生信息\n");//如用户输入数据不存在
}