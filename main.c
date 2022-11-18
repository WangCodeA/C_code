#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;//a在内存中要分配四个字节
//	printf("%p\n", &a);//%p专门用来打印地址的,地址相当于房间
//	int*pa = &a;//pa是用来存放地址的，在c语言中叫指针变量，pa相当于存放房间的空间
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	
//
//	//指针变量创建
//	char ch = 'w';
//	printf("%p\n", &ch);
//	char* pc = &ch;
//	return 0;
//}



////指针就是地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作，*pa就是通过pa里面的地址找到a
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