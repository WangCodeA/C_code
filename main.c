#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	//����һ������
//	//����     ����������=0���Ƽ�
//	//����     ���������֣����Ƽ�
//	int age = 20;
//	double weight = 65.4;
//	age = age + 1;
//	weight = weight - 5;
//	printf(" % d\n", age);//
//	printf("%lf\n", weight);//���ڸ����ʹ�ӡfloat��%f,double��%lf
//	return 0;
//}
//%d-����
//% f - float
//% lf - double

//ȫ�ֱ���{}�ⲿ�����
//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�����{}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ�������,�ֲ�����
//	//������Ѿֲ�������ȫ�ֱ���дһ��
//	printf("%d\n,a");
//	return 0;
//}

//������������
//scanf�����뺯��
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
