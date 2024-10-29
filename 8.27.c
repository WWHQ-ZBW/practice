#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char arr1[] = { "abcdefg" };
//	char arr2[] = { "#######" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	for (; left <= right;)
//	{
//		printf("%s\n", arr1);
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { "abcd" };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s",password);
//		if (strcmp(password, "abcd") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("登录失败退出程序");
//	return 0;
//}
void menu()
{
	printf("25 step gauess number\n");
	printf("      1.play         \n");
	printf("      0.exit         \n");
	printf("                     \n");
}
void game()
{
	int num1 = rand() % 100 + 1;
	int num2 = 0;
	int step = 1;
	int score = 0;
	while(step<=25)
	{
		printf("输入数字\n当前步数%d\n得分%d\n", step,score);
		scanf("%d", &num2);
		if (num2 == num1)
		{
			printf("猜对了");
			score = score + 1;
			num1 = rand() % 100 + 1;
			Sleep(1000);
		}
		else if (num2 > num1)
		{
			printf("猜大了");
		}
		else
		{
			printf("猜小了");
		}
		step++;
	}
}



int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			printf("game start");
			game();
		}
		else if (input == 0)
		{
			break;
		}
		else
		{
			printf("error");
			Sleep(1000);
		}
		system("cls");
	}
	while (input);
	return 0;
}
