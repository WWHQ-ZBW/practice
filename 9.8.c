#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//自己输入打印乘法表
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int a = 1; a <= i; a++)
//		{
//			printf("%d*%d=%-2d ", i, a, i * a);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()//打印一个二维数组
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int n = 0; n < 4; n++)
//		{
//			printf("%d ", arr[i][n]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//冒泡算法，排列数组
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void bubble_sort(int arr[],int sz)
//{
//	for (int i = sz - 1; i >= 1; i--)
//	{
//		for (int n = 1; n <= i; n++)
//		{
//			if (arr[n - 1] > arr[n])
//			{
//				Swap(&arr[n - 1], &arr[n]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}