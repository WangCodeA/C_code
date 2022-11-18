#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf(" % d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//int为4个字节，一个字节8比特位
//	//整数a用二进制表示为32个0（00000000 00000000 00000000 00000000）
//	printf("%d\n", ~a);//~按位取反（所有二进制中的0变1，1变0）
//	
//	return 0;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用再加加
//
//	printf("%d\n", b);//10
//	printf("%d\n", a);//11
//
//	/*int a = 10;*/
//	//int b = ++a;//前置++,先加加再使用
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//	
//		max = a;
//	
//	else
//	
//	max = b;*/
//	
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a=5   c=1    b=3
//	int d = (a=b+2,c=a-4,b=c+2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

////下标引用操作符[]
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//想打印6，则输入arr[5]，c语言下标从零开始
//
//	return 0;
//}

//函数调用操作符()
int main()
{
	//调用函数的时候，函数后面的()就是函数调用操作符
	printf("hehe\n");
	printf("%d\n",100);
	return 0;
}