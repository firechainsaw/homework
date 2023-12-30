#include "stusystem.h"
//定义save函数存储文件
void save(Node* head) {
	//打开文件
	FILE* file = fopen("./stu.info", "w");
	if (file == NULL) {
		printf("打开文件失败\n");
		return;
	}
	Node* move = head->next;
	while (move != NULL) {
		//将结构体写入文件
		if (fwrite(&move->stu, sizeof(Student), 1, file) != 1) {
			printf("保存%s出现错误\n", move->stu.stuname);
		} 
		move = move->next;
	}
	//关闭文件
	fclose(file);
}
//定义load函数读取文件
void load(Node* head) {
	//打开文件
	FILE* file = fopen("./stu.info", "r");
	if (!file) {
		printf("未找到学生文件,跳过读取\n");
		return;
	}
	//创建一个结点
	Node* fresh = malloc(sizeof(Node));
	fresh->next = NULL;
	Node* move = head;
	while (fread(&fresh->stu, sizeof(Student), 1, file) == 1) {
		move->next = fresh;
		move = fresh;
		fresh = malloc(sizeof(Node));
		fresh->next = NULL;
	}
	free(fresh); //最后多定义一个fresh，要将它释放掉
	//关闭文件
	fclose(file);
	printf("读取成功\n");
}