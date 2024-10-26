#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	char input[20] = { 0 };
//	again:
//	printf("请输入：我是猪，否则将在六十秒后关机");
//	system("shutdown -s -t 60");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while(strcmp(input, "我是猪") != 0)
//	{
//		printf("请输入：我是猪，否则将在六十秒后关机");
//		scanf("%s", input);
//
//	}
//	
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello";
//	memset(arr1+1, 'y', 1);
//	printf("%s", arr1);
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
	int stepmax = 25;
	int score = 0;
	while (step <= stepmax)
	{
		system("cls");
		printf("得分%d               \n", score);
		printf("当前步数%d最大步数%d \n", step, stepmax);
		printf("请猜数字（1-100）:   \n");
		scanf("%d", &num2);
		if (num2 == num1)
		{
			printf("猜对了");
			score = score + 1;
			num1 = rand() % 100 + 1;
			int i = 0;
			printf("选择Buff\n");
			printf("1.stepmax+3\n");
			printf("2.无");
			scanf("%d", &i);
			switch(i)
			{
			case 1:
				stepmax = stepmax + 3;
				break;
			default:
				break;
			}
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
		Sleep(1000);
		step++;
	}
	printf("        end          \n");
	printf("      score:%d       \n", score);
	printf("                     \n");
	printf("                     \n");
	Sleep(1000);
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
	} while (input);
	return 0;
}
