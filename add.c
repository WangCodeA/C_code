#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ȫ�ֱ���
//int g_val = 2022;
//(û��static����ʱ��������.c�ļ��������Ϳ���ʹ��)
//static int g_val = 2022;
//(��static����ʱ��������.c�ļ�������Ҳ����ʹ�ã�ֻ�����Լ�.c�ļ���ʹ��)


int Add(int x,int y)
//(û��static����ʱ��������.c�ļ��������Ϳ���ʹ��)
//static int Add(int x, int y)
//(��static����ʱ��������.c�ļ�������Ҳ����ʹ�ã�ֻ�����Լ�.c�ļ���ʹ��)
{
	return x + y;
}

