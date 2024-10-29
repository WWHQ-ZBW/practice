#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()//判断一个数是否是素数
//{
//	int input = 0;
//	printf("请输入数字：");
//	scanf("%d", &input);
//	int leave = 0;
//	int a = input;
//	while (input > 2)
//	{
//		input--;
//		leave = a % input;
//		if (leave == 0)
//		{
//			printf("不是素数");
//			break;
//		}
//	}
//	if (leave != 0)
//	{
//		printf("是素数");
//	}
//	return 0;
//}
//int main()//100到200素数
//{
//	int input = 0;
//	int leave = 0;
//	int a = 0;
//	for (int i = 100; i <= 200;i++ )
//	{
//		input = i;
//		a = input;
//			while (input > 2)
//			{
//				input--;
//				leave = a % input;
//				if (leave == 0)
//				{
//					break;
//				}
//			}
//			if (leave != 0)
//			{
//				printf("是质数%d\n", i);
//			}
//	}
//	return 0;
//}
//写一个函数判断一个数是否是素数
int is_prime(int n)
{
	for (int n1 = 2; n1 <= sqrt(n); n1++)
	{
		if (n % n1 == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	printf("请输入一个数字：");
	scanf("%d", &i);
	if (is_prime(i));
	{
		printf("是素数");
	}
	return 0;
}
