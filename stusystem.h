#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//���ýṹ�嶨��ѧ����Ϣ
 typedef  struct _student
{
	int stunum;
	char stuname[20];
	int score;
}Student;	
 //�����Ϣ
 typedef struct _Node
 {
	 Student stu;
	 struct _Node* next;
 }Node;
 