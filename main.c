#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ�����ĸ��ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��,��ַ�൱�ڷ���
//	int*pa = &a;//pa��������ŵ�ַ�ģ���c�����н�ָ�������pa�൱�ڴ�ŷ���Ŀռ�
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//	
//
//	//ָ���������
//	char ch = 'w';
//	printf("%p\n", &ch);
//	char* pc = &ch;
//	return 0;
//}



////ָ����ǵ�ַ
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*�����ò�����*pa����ͨ��pa����ĵ�ַ�ҵ�a
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}