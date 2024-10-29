#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//求n的阶乘，循环
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
//int fac(int n)//求n的阶乘，递归
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
//int main()//求第n个斐波那契数，循环
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
//int fibo(int n)//求第n个斐波那契数，递归
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
//int main()//青蛙跳台阶问题
//{
//	int n = 0;
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	printf("青蛙共跳：");
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
//	printf("则可能的步数:%d", c);
//	return 0;
//}
//void swap(int* a,int* b)//用代码将三个整数从大大到小输出
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