#include "stusystem.h"
#include"save&load.h"
void inputstudent(Node* head) 
{       //����ָ��ָ��ͷ��㣬���ڱ�������
		Node* move = head;
		while (move->next != NULL) {
			move = move->next;
		}
		//�������
		Node* fresh = malloc(sizeof(Node));
		fresh->next = NULL;
		//�����û���Ϣ
		printf("������ѧ����ѧ�š��������ɼ�: ");
		scanf("%d%s%d", &fresh->stu.stunum, fresh->stu.stuname, &fresh->stu.score);
		//���´����Ľ�㣬��ӵ������β��
		move->next = fresh;
		save(head);
	}

