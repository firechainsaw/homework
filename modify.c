#include"stusystem.h"
#include"save&load.h"
void modify(Node* head) {
	printf("请输入需要修改的学生学号 ");
int stunum = 0;
scanf("%d", &stunum);
Node* move = head;
while (move != NULL) {
	if (move->stu.stunum == stunum) {
		printf("请输入学生姓名，成绩\n");
		scanf("%s%d", move->stu.stuname, &move->stu.score);
		printf("修改学生信息成功\n");
		//停止循环
		break;
	}
	move = move->next;
}
//如果循环完毕，也没找到学生
if (move == NULL) {
	printf("未找到学生信息\n");
}
//同步到文件
save(head);
}