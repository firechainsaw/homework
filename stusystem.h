#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//运用结构体定义学生信息
 typedef  struct _student
{
	int stunum;
	char stuname[20];
	int score;
}Student;	
 //结点信息
 typedef struct _Node
 {
	 Student stu;
	 struct _Node* next;
 }Node;
 