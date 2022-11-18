#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	//创建一个变量
//	//类型     变量的名字=0；推荐
//	//类型     变量的名字；不推荐
//	int age = 20;
//	double weight = 65.4;
//	age = age + 1;
//	weight = weight - 5;
//	printf(" % d\n", age);//
//	printf("%lf\n", weight);//对于浮点型打印float用%f,double用%lf
//	return 0;
//}
//%d-整型
//% f - float
//% lf - double

//全局变量{}外部定义的
//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量{}内部定义的
//	//当局部变量和全局变量名字冲突的情况下,局部优先
//	//不建议把局部变量和全局变量写一样
//	printf("%d\n,a");
//	return 0;
//}

//求两个整数和
//scanf是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
		return 0;

}
