#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////作用域  
////局部变量的作用域，就是变量所在的局部范围（局部变量a作用域在{}里）
////全局变量的作用域,整个工程（跨.c文件也可以用，需要声明extern int g;）
//
//int g = 2021;//全局变量
//int main()
//{
//	printf("1：%d\n", g);
//	printf("hehe\n");
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("2：%d\n", g);
//
//	}
//
//	printf("3：%d\n", g);
//	return 0;
//
//}

////生命周期
////变量的生命周期:变量的创建和销毁之间的时间段
////局部变量的生命周期:进入局部范围生命开始，出局部范围生命结束
////全局变量的生命周期:整个程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//
//
//#define MAX 10000
//int main()
//{
//	//1.字面常量 3.14；  10； 'a';  "abcd"
//
//	//2. const修饰的常变量
//	//const int num = 10;//num就是常变量-具有常属性(不能被改变的属性)//num = 20:
//	//printf ("num = %d\n", num) ;//20
//
//	//int arr[10] = { 0 };//10个元素
//	//const int n = 10;
//	//int arr2[n] = { 0 };//n是变量的,这里是不行
//
//	
//	//3.#define定义的标识符常量
//	//MAX = 20000;//错误写法
//	//int n = MAX;
//	//printf("n=%d\n",n);
//	return 0;
//}
	
//4.枚举常量  enum枚举关键字
	//可以1一一列举的常量
//	//性别(男 女 保密)
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET,
//
//};
//
//int main()
//{
//
//	enum Sex s = MALE;
//	printf(" % d\n", MALE);
//	printf(" % d\n", FEMALE);
//	printf(" % d\n", SECRET);
//
//	return 0;
//}

#include<string.h>
//字符串就是一串字符（由双引号引起）"abcdef";
//字符串在结尾的位置隐藏了一个\0的字符
//字符串的结束标志是一个\0的转义字符,在计算字符长度时候\0是结束标志，不算为字符串内容
//int main()
//{
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//求字符串长度用strlen(需要引用头文件#include<string.h>)
//	//int len = strlen("abc");
//	//printf("%d\n", len);

	//return 0;
//}


//int main()
//{
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//	return 0;
//}
////printf("%d\n", 100);   %d-整型
////printf("%c\n", 'a');  %c打印字符
////printf("%s\n", "abc");  %s打印字符串

//选择
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入:>\n");
//	printf("那要好好学习吗(1/0)?>:\n");
//	scanf("%d", &input);
//		if (input == 1)
//		printf("offer\n");
//		else
//			printf("卖红薯\n");
//	return 0;
//}



//
//int main()
//{
//	int line = 0;
//	while(line < 30000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//
//
//	}
//	if (line == 30000) 
//	{
//		printf("好offer\n");
//	}
//
//	return 0;

//}

//
//int Add(int x,int y)
//{
//
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum=num1 + num2;
//	//函数的方式解决
//	int sum=Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}
//
//
int main()
{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//...太麻烦
//
//	//数组-一组相同类型的元素的集合
//	//10个整形1-10存起来
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//			i++;
//
//	}
//
//
//	//char ch[5]  = {'a','b','c'};
//
//
//		return 0;
//
	//int a = 9 / 2;
	//float a = 9 / 2;
	int a = 9 % 2;//%取模（余）
	printf("%d\n", a);

}


