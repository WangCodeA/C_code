#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//全局变量
//int g_val = 2022;
//(没有static修饰时候，在另外.c文件中声明就可以使用)
//static int g_val = 2022;
//(有static修饰时候，在另外.c文件中声明也不可使用，只能在自己.c文件中使用)


int Add(int x,int y)
//(没有static修饰时候，在另外.c文件中声明就可以使用)
//static int Add(int x, int y)
//(有static修饰时候，在另外.c文件中声明也不可使用，只能在自己.c文件中使用)
{
	return x + y;
}

