#include"stusystem.h"
void countstu(Node* head) {
	int count = 0;//�����������
	Node* move = head->next;//��ָ��ָ��ͷ���
	while (move != NULL) {
		count++;
		move = move->next;//����ָ���������ѧ������
	}
	printf("ѧ��������Ϊ:%d\n", count);
	
}