#include"stusystem.h"
void findstu(Node* head) {
	int stunum;//�����û����ҵ����ݱ���
printf("������Ҫ���ҵ�ѧ����ѧ��: ");
scanf("%d", &stunum);
Node* move = head->next;//ָ���ʼ��
while (move != NULL) 
{
	if (move->stu.stunum == stunum)//���û�����ѧ����ṹ���б����ѧ�űȶԣ�����ѱ���������������
	{
		printf("ѧ��:%d ����:%s �ɼ�:%d\n", move->stu.stunum, move->stu.stuname,
			move->stu.score);
		system("pause");//���û����ҵ���Ҫ���ݹ̶�ס����������´�ѭ��
		return;
	}
	move = move->next;
}
printf("δ���ҵ�ѧ����Ϣ\n");//���û��������ݲ�����
}