#include"stusystem.h"
void printstudent(Node* head) {
	//����ָ��ָ��ͷ��㣬���ڱ�������
	Node* move = head->next;
	while (move != NULL) {
	printf("ѧ��:%d ����:%s �ɼ�:%d\n", move->stu.stunum, move->stu.stuname, move -> stu.score);
	//��ӡ��¼�������ѧ����Ϣ
		move = move->next;
	}
	
}