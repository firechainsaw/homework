#include"stusystem.h"
#include"save&load.h"
void modify(Node* head) {
	printf("��������Ҫ�޸ĵ�ѧ��ѧ�� ");
int stunum = 0;
scanf("%d", &stunum);
Node* move = head;
while (move != NULL) {
	if (move->stu.stunum == stunum) {
		printf("������ѧ���������ɼ�\n");
		scanf("%s%d", move->stu.stuname, &move->stu.score);
		printf("�޸�ѧ����Ϣ�ɹ�\n");
		//ֹͣѭ��
		break;
	}
	move = move->next;
}
//���ѭ����ϣ�Ҳû�ҵ�ѧ��
if (move == NULL) {
	printf("δ�ҵ�ѧ����Ϣ\n");
}
//ͬ�����ļ�
save(head);
}