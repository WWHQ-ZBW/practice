#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()//�ж�һ�����Ƿ�������
//{
//	int input = 0;
//	printf("���������֣�");
//	scanf("%d", &input);
//	int leave = 0;
//	int a = input;
//	while (input > 2)
//	{
//		input--;
//		leave = a % input;
//		if (leave == 0)
//		{
//			printf("��������");
//			break;
//		}
//	}
//	if (leave != 0)
//	{
//		printf("������");
//	}
//	return 0;
//}
//int main()//100��200����
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
//				printf("������%d\n", i);
//			}
//	}
//	return 0;
//}
//дһ�������ж�һ�����Ƿ�������
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
	printf("������һ�����֣�");
	scanf("%d", &i);
	if (is_prime(i));
	{
		printf("������");
	}
	return 0;
}
