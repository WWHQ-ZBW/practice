#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//��ӡ1-100�������ı���
//{
//	for (int i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()//ȥ�����������Լ��//շת���
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()//ȥ����������С������
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	int d = a;
//	int e = b;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	b = d * e / b;
//	printf("%d", b);
//	return 0;
//}
//int main()//�������������Լ��//�������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int i = min;
//	for (; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", i);
//	return 0;
//}
//int main()//����
//{
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += (1.0 / i);
//		}
//		else
//		{
//			sum -= (1.0 / i);
//		}
//	}
//	printf("%f", sum);
//	return 0;
//}
//ѭ���в��÷�֧
//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i) * flag;
//		flag = -flag;
//	}
//	printf("%f", sum);
//	return 0;
//}
//��ʮ���������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	for(int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int i = 1; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//��ӡ9*9�˷���
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		for (int m = 1; m <= i; m++)
//		{
//			printf("%d*%d=%-2d ", i , m , i * m);//������λʱ��ӡ�ո�,�����Ҷ��룬���������
//		}
//		printf("\n");
//	}
//	return 0;
//}