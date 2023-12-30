#include"stusystem.h"
#include"save&load.h"
void delete(Node* head) {
	printf("请输入要删除的学生学号 ");
	int stunum = 0;
	scanf("%d", &stunum);
	Node* move = head;
	while (move->next != NULL) {
		if (stunum == move->next->stu.stunum) {
			Node* temp = move->next;
			move->next = move->next->next; //删除结点只需要一句
			free(temp); //最后记得将删除的动态空间释放掉
			temp = NULL; //释放后随即指向NULL
			//同步到文件
			save(head);
			printf("删除学生成功\n");
			break;
		}
		move = move->next;
	}
	if (move->next == NULL) {
		printf("未找到学生信息\n");
	}
}