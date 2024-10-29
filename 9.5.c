#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//分别打印1234
//{
//	int i = 0;
//	int input = 0;
//	scanf("%d", &input);
//	int arr[20] = { 0 };
//	while(input>0)
//	{
//		arr[i] = input % 10;
//		input /= 10;
//		i++;
//	}
//	for (i=i-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void print(int input)
//{
//	if (input >= 10)
//	{
//		print(input / 10);
//	}
//	printf("%d ", input % 10);
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}
//int my_strlen(char* arrp)
//{
//	if (*arrp != '\0')
//	{
//		return 1+ my_strlen(arrp + 1);//arrp前不能加*，是对地址而不是对字符操作
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = { "abc" };
//	int num = my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}
//int my_strlen(char* arrp)
//{
//	if (*arrp != '\0')
//	{
//		return 1 + my_strlen(arrp + 1);//arrp前不能加*，是对地址而不是对字符操作
//	}
//	return 0;
//}
//int my_strlen(char* arrp)
//{
//	int count = 0;
//	while (*arrp != '\0')
//	{
//		arrp += 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "abc" };
//	int num = my_strlen(arr);
//	printf("%d", num);
//	return 0;
//}