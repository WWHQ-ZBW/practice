#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//n�Ľ׳�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int n1= 1;
//	for (i = n; i > 0; i = i - 1)
//	{
//		if (n > 1)
//		{
//			n1 = n * n1;
//			n = n - 1;
//		}
//	}
//		printf("%d", n1);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 1;
//	int n1 = 1;
//	for (i = 1; i <= n; i++)
//	{
//		n1 = n1 * i;
//	}
//	printf("%d", n1);
//	return 0;
//}
//int n1(int x)//1��10�Ľ׳˺�
//{
//	int i = 1;
//	int n2 = 1;
//	for (i = 1; i <= x; i++)
//	{
//		n2 = n2 * i;
//	}
//	return n2;
//}
//int main()
//{
//	int a = 0;
//	int a1 = 0;
//	int a2 = 0;
//	for (a = 1; a < 11; a++)
//	{
//		a2 = n1(a);
//		a1 = a1 + a2;
//	}
//	printf("%d", a1);
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int n1 = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		n1 = n * n1;
//		sum = sum + n1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()//�������������е�ĳ����
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int find = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= size; i++)
//	{
//		if (arr[i] == find)
//		{
//			printf("�ҵ��˵�%d��", i);
//			break;
//		}
//	}
//	if (i == size)
//		printf("û�ҵ�");
//	return 0;
//}
//int main()//2�ֲ���
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 1;
//	int n = 2;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int find = 0;
//	scanf("%d", &find);
//	for(i=size/n;arr[i]!=find;)
//	{
//		if (arr[i] > find && i != i + size / (n * 2))
//		{
//			i = i - size / (n * 2);
//		}
//		else if (arr[i] < find && i != i + size / (n * 2))
//		{
//			i = i + size / (n * 2);
//		}
//		else
//		{
//			break;
//		}
//		n = n * 2;
//	}
//	if (arr[i] == find)
//		printf("�ҵ����±���%d", i);
//	else
//		printf("�Ҳ���");
//	return 0;
//}
