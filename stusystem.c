#include "stusystem.h"//����ͷ�ļ����ã�����ģ������
#include"inputstudent.h"
#include"printstudent.h"
#include"countstu.h"
#include"findstu.h"
#include"save&load.h"
#include"modify.h"
#include"delete.h"

//����welcome��������Ϊ�����ʼ����
void welcome()
{
	printf("*********************************\n");
	printf("*\tѧ���ɼ�����ϵͳ\t*\n");
	printf("*********************************\n");
	printf("*\t��ѡ�����б�\t\t*\n");
	printf("*********************************\n");
	printf("*\t1.¼��ѧ����Ϣ\t\t*\n");
	printf("*\t2.��ӡѧ����Ϣ\t\t*\n");
	printf("*\t3.ͳ��ѧ������\t\t*\n");
	printf("*\t4.����ѧ����Ϣ\t\t*\n");
	printf("*\t5.�޸�ѧ����Ϣ\t\t*\n");
	printf("*\t6.ɾ��ѧ����Ϣ\t\t*\n");
	printf("*\t7.�˳�ϵͳ\t\t*\n");
	printf("*********************************\n");
}
int main()
{   //����ͷ���
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	load(head);//ÿ������ʱ��ȡ֮ǰ�洢������
	welcome();
	
	while (1) {
		//����ѭ��ʹ������Գ�������
		char c = getchar();
		switch (c)
		{
		case '1': //¼��ѧ����Ϣ
			inputstudent(head);
			break;
		case '2': //��ӡѧ����Ϣ
			printstudent(head);
			break;
		case '3': //ͳ��ѧ������
			countstu(head);
			break;
		case '4': //����ѧ����Ϣ
			findstu(head);
			break;
		case '5': //�޸�ѧ����Ϣ
			modify(head);
			break;
		case '6': //ɾ��ѧ����Ϣ
			delete(head);
			break;
		case '7': //�˳�ϵͳ
			printf("Bye Bye!\n");
			exit(0);
			break;
		default:
			break;
		}
	}
	return 0;
}

