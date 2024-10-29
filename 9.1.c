#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int is_prime(int n)//判断一个数是否是素数
//{
//	if (n <= 1)
//	{
//		return 0;
//	}
//	for (int n1 = 2; n1 <= sqrt(n); n1++)
//	{
//		if (n % n1 == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &i);
//	if (is_prime(i))
//	{
//		printf("是素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}
//	return 0;
//}
//打印1-100所有的素数
//int is_prime(int n)
//{
//	int i = 0;
//	if (n <= 1)
//	{
//		return 0;
//	}
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}
//打印1000-2000之间的所有闰年
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	for (int year = 1000; year <= 2000; year += 4)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}
//int dinary_search(int* arr, int k, int size)
//{
//	int left = 0;
//	int right = size - 1;
//	int mid = left + (right - left) / 2;
//	while(right>=left)
//	{
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//		mid = left + (right - left) / 2;
//	}
//	if (right < left)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 5;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = dinary_search(arr,k,size);
//	if (i >= 0)
//	{
//		printf("找到了，下表是%d",i );
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//Add(int* num_p)
//{
//	(*num_p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num );
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}