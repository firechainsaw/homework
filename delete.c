#include"stusystem.h"
#include"save&load.h"
void delete(Node* head) {
	printf("������Ҫɾ����ѧ��ѧ�� ");
	int stunum = 0;
	scanf("%d", &stunum);
	Node* move = head;
	while (move->next != NULL) {
		if (stunum == move->next->stu.stunum) {
			Node* temp = move->next;
			move->next = move->next->next; //ɾ�����ֻ��Ҫһ��
			free(temp); //���ǵý�ɾ���Ķ�̬�ռ��ͷŵ�
			temp = NULL; //�ͷź��漴ָ��NULL
			//ͬ�����ļ�
			save(head);
			printf("ɾ��ѧ���ɹ�\n");
			break;
		}
		move = move->next;
	}
	if (move->next == NULL) {
		printf("δ�ҵ�ѧ����Ϣ\n");
	}
}