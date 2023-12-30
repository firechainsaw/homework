#include "stusystem.h"//利用头文件引用，将各模块连接
#include"inputstudent.h"
#include"printstudent.h"
#include"countstu.h"
#include"findstu.h"
#include"save&load.h"
#include"modify.h"
#include"delete.h"

//定义welcome函数，作为程序初始界面
void welcome()
{
	printf("*********************************\n");
	printf("*\t学生成绩管理系统\t*\n");
	printf("*********************************\n");
	printf("*\t请选择功能列表\t\t*\n");
	printf("*********************************\n");
	printf("*\t1.录入学生信息\t\t*\n");
	printf("*\t2.打印学生信息\t\t*\n");
	printf("*\t3.统计学生人数\t\t*\n");
	printf("*\t4.查找学生信息\t\t*\n");
	printf("*\t5.修改学生信息\t\t*\n");
	printf("*\t6.删除学生信息\t\t*\n");
	printf("*\t7.退出系统\t\t*\n");
	printf("*********************************\n");
}
int main()
{   //创建头结点
	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	load(head);//每次启动时读取之前存储的数据
	welcome();
	
	while (1) {
		//引入循环使程序可以持续运行
		char c = getchar();
		switch (c)
		{
		case '1': //录入学生信息
			inputstudent(head);
			break;
		case '2': //打印学生信息
			printstudent(head);
			break;
		case '3': //统计学生人数
			countstu(head);
			break;
		case '4': //查找学生信息
			findstu(head);
			break;
		case '5': //修改学生信息
			modify(head);
			break;
		case '6': //删除学生信息
			delete(head);
			break;
		case '7': //退出系统
			printf("Bye Bye!\n");
			exit(0);
			break;
		default:
			break;
		}
	}
	return 0;
}

