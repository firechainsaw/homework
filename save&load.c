#include "stusystem.h"
//����save�����洢�ļ�
void save(Node* head) {
	//���ļ�
	FILE* file = fopen("./stu.info", "w");
	if (file == NULL) {
		printf("���ļ�ʧ��\n");
		return;
	}
	Node* move = head->next;
	while (move != NULL) {
		//���ṹ��д���ļ�
		if (fwrite(&move->stu, sizeof(Student), 1, file) != 1) {
			printf("����%s���ִ���\n", move->stu.stuname);
		} 
		move = move->next;
	}
	//�ر��ļ�
	fclose(file);
}
//����load������ȡ�ļ�
void load(Node* head) {
	//���ļ�
	FILE* file = fopen("./stu.info", "r");
	if (!file) {
		printf("δ�ҵ�ѧ���ļ�,������ȡ\n");
		return;
	}
	//����һ�����
	Node* fresh = malloc(sizeof(Node));
	fresh->next = NULL;
	Node* move = head;
	while (fread(&fresh->stu, sizeof(Student), 1, file) == 1) {
		move->next = fresh;
		move = fresh;
		fresh = malloc(sizeof(Node));
		fresh->next = NULL;
	}
	free(fresh); //���ඨ��һ��fresh��Ҫ�����ͷŵ�
	//�ر��ļ�
	fclose(file);
	printf("��ȡ�ɹ�\n");
}