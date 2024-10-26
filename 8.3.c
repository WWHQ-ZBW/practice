#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("a");
//	printf("%c\n", 97);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 43 ,56, 56 ,67 ,89 ,97 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	while (i < size)
//	{
//		printf("%c\n", arr[i]);
//		i++;
//		}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d", day);
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	float C = 0.0f;
//	float math = 0.0f;
//	float Chinese = 0.0f;
//	scanf("%8d;%f,%f,%f", &num,&C,&math,&Chinese);
//	printf("The each subject of NO. %d is %.2f, %.2f, %.2f.",num,C,math,Chinese);
//	return 0;
//}
//int main()
//{
//	
//	int n=printf("Hello world!");
//	printf("\n%d", n);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c ,& d);
//	if (a > b && a > c && a > d)
//		printf("%d", a);
//	else if (b > c && b > d)
//		printf("%d", b);
//	else if (c > d)
//		printf("%d", c);
//	else
//		printf("%d", d);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while(i<4)
//	{
//		scanf("%d",&arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 0;
//	while (i< 4)
//	{
//		if (max < arr[i])
//			max = arr[i];
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	float r = 0.0f;
//	scanf("%f", &r);
//	float V = 4 * r*r*r / 3 * 3.1415926;
//	printf("%.3f", V);
//	return 0;
//}
//int main()
//{
//	int h = 0;
//	int m = 0;
//	scanf("%d %d", &m, &h);
//	float BMI = m/(h/100.0)/(h/100.0);
//	printf("%.2f", BMI);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d",arr[i]);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}