#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//��n�Ľ׳ˣ�ѭ��
//{
//	int n = 0;
//	scanf("%d", &n);
//	int n1 = 1;
//	for (int i = 1;i <= n ; i++)
//	{
//		n1 *= i;
//	}
//	printf("%d", n1);
//	return 0;
//}
//int fac(int n)//��n�Ľ׳ˣ��ݹ�
//{
//	int n1 = n;
//	if (n1 > 1)
//	{
//		return n1 * fac(n1 - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int n1 = fac(n);
//	printf("%d", n1);
//	return 0;
//}
//int main()//���n��쳲���������ѭ��
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = 1;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{ }
//	else
//	{
//		for (int i = 0; i < n-2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	printf("%d", c);
//	return 0;
//}
//int fibo(int n)//���n��쳲����������ݹ�
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int n1 = fibo(n);
//	printf("%d", n1);
//	return 0;
//}
//int main()//������̨������
//{
//	int n = 0;
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	printf("���ܹ�����");
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		c = a;
//	}
//	else if (n == 2)
//	{
//		c = b;
//	}
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	printf("����ܵĲ���:%d", c);
//	return 0;
//}
//void swap(int* a,int* b)//�ô��뽫���������Ӵ��С���
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		swap(&a, &b);
//	}
//	if (c > a)
//	{
//		swap(&a, &c);
//	}
//	if (c > b)
//	{
//		swap(&c, &b);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}