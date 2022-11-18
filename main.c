#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//c语言提供的关键字
//1.c语言提供的，不能自己创建关键字
//2.变量名不能是关键字


//
////typedef类型重命名
//typedef unsigned int u_int;//把unsigned int重命名为 u_int
//int main()
//{
//	//unsigned int num = 100;和下面的一样
//	u_int num2 = 100;
//	return 0;
//}

//static静态的
//1.static修饰局部变量
//2.static修饰全局变量
//3.static修饰函数
//
//void test()
//{
//	static int a = 1;
//	//(如果不加static，局部变量a出括号就销毁，while循环10次输出10个2)
//	//(加static，局部变量a出括号不销毁，while循环10次输出2到11）
//	a++;
//	printf("%d", a);
//}
////static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的储存类型）
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//
////声明extern
//extern int g_val;
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//}


//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//
//	return 0;定义
//}




//define是一个预处理指令
//1.define定义常量
#define MAX 10000
int main()
{
	printf("%d\n", MAX);
	return 0;
}

//2.define定义宏
#define ADD(X,Y) ((X)+(Y))
int main()
{

	printf("%d\n", 4*ADD(2, 3));
	return 0;

}