#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////������  
////�ֲ������������򣬾��Ǳ������ڵľֲ���Χ���ֲ�����a��������{}�
////ȫ�ֱ�����������,�������̣���.c�ļ�Ҳ�����ã���Ҫ����extern int g;��
//
//int g = 2021;//ȫ�ֱ���
//int main()
//{
//	printf("1��%d\n", g);
//	printf("hehe\n");
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("2��%d\n", g);
//
//	}
//
//	printf("3��%d\n", g);
//	return 0;
//
//}

////��������
////��������������:�����Ĵ���������֮���ʱ���
////�ֲ���������������:����ֲ���Χ������ʼ�����ֲ���Χ��������
////ȫ�ֱ�������������:�����������������
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
//	//1.���泣�� 3.14��  10�� 'a';  "abcd"
//
//	//2. const���εĳ�����
//	//const int num = 10;//num���ǳ�����-���г�����(���ܱ��ı������)//num = 20:
//	//printf ("num = %d\n", num) ;//20
//
//	//int arr[10] = { 0 };//10��Ԫ��
//	//const int n = 10;
//	//int arr2[n] = { 0 };//n�Ǳ�����,�����ǲ���
//
//	
//	//3.#define����ı�ʶ������
//	//MAX = 20000;//����д��
//	//int n = MAX;
//	//printf("n=%d\n",n);
//	return 0;
//}
	
//4.ö�ٳ���  enumö�ٹؼ���
	//����1һһ�оٵĳ���
//	//�Ա�(�� Ů ����)
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٳ���
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
//�ַ�������һ���ַ�����˫��������"abcdef";
//�ַ����ڽ�β��λ��������һ��\0���ַ�
//�ַ����Ľ�����־��һ��\0��ת���ַ�,�ڼ����ַ�����ʱ��\0�ǽ�����־������Ϊ�ַ�������
//int main()
//{
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//��ӡ�ַ���
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//���ַ���������strlen(��Ҫ����ͷ�ļ�#include<string.h>)
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
////printf("%d\n", 100);   %d-����
////printf("%c\n", 'a');  %c��ӡ�ַ�
////printf("%s\n", "abc");  %s��ӡ�ַ���

//ѡ��
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("����:>\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?>:\n");
//	scanf("%d", &input);
//		if (input == 1)
//		printf("offer\n");
//		else
//			printf("������\n");
//	return 0;
//}



//
//int main()
//{
//	int line = 0;
//	while(line < 30000)
//	{
//		printf("д����%d\n", line);
//		line++;
//
//
//	}
//	if (line == 30000) 
//	{
//		printf("��offer\n");
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
//	//�����ķ�ʽ���
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
//	//...̫�鷳
//
//	//����-һ����ͬ���͵�Ԫ�صļ���
//	//10������1-10������
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
	int a = 9 % 2;//%ȡģ���ࣩ
	printf("%d\n", a);

}


