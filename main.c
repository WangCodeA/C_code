#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//c�����ṩ�Ĺؼ���
//1.c�����ṩ�ģ������Լ������ؼ���
//2.�����������ǹؼ���


//
////typedef����������
//typedef unsigned int u_int;//��unsigned int������Ϊ u_int
//int main()
//{
//	//unsigned int num = 100;�������һ��
//	u_int num2 = 100;
//	return 0;
//}

//static��̬��
//1.static���ξֲ�����
//2.static����ȫ�ֱ���
//3.static���κ���
//
//void test()
//{
//	static int a = 1;
//	//(�������static���ֲ�����a�����ž����٣�whileѭ��10�����10��2)
//	//(��static���ֲ�����a�����Ų����٣�whileѭ��10�����2��11��
//	a++;
//	printf("%d", a);
//}
////static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ������ͣ�
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
////����extern
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
//	return 0;����
//}




//define��һ��Ԥ����ָ��
//1.define���峣��
#define MAX 10000
int main()
{
	printf("%d\n", MAX);
	return 0;
}

//2.define�����
#define ADD(X,Y) ((X)+(Y))
int main()
{

	printf("%d\n", 4*ADD(2, 3));
	return 0;

}