#define _CRT_SECURE_NO_WARNINGS
//typedef unsigned int unit;
//static
//局部变量或全局
#include <stdio.h>
//void test()(bufanhui)
//{
//	static int a = 1;//static修饰局部变量改变了变量的存储位置
//	//栈区局部变量 静态区静态变量程序结束
//	a++;
//	printf("%d\n", a);
//}
//
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	/*printf("nihao");
//	printf("nihao");
//	printf("%d\n", a);*/
//	return 0;
//}
//extern Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#define MIN 1000
//#define ADD(x,y) ((x)+(y))//宏名 宏的参数 宏体 宏替换
//int main()
//{
//	printf("%d\n", MIN);
//	int x = 12;
//	int y = 13;
//	int z = ADD(x, y);
//	printf("%d\n", z);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p就是指针变量 *说明p是指针变量
//	char ah = 'w';
//	char* pah = &ah; 
//	*p = 20;//解引用 通过地址找到对象
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//	{
//	printf("%zu\n", sizeof(char*));
//		printf("%zu\n",sizeof(float*));
//		return 0;
//	}
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu s)
//{
//	printf("%s,%d,%s,%s\n", s.name, s.age, s.sex, s.tele);
//}
//
//
//
//
//
//int main()
//{
//	struct Stu s = { "zhang",20,"man","1234567890" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(s);
//	return 0;
////}
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//	return 0;
//}
//int main()
//{
//	struct Stu s = { "zhang",20,"man","1234567890" };
//	print(&s);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int c = a / b;
//	//int d = a % b;
//	printf("%d %d",a/b,a%b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= 10)
//		printf("nihao");
//	else if (a > 10 && a <= 20)
//		printf("buhao");
//	else
//		printf("buzhidao");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d\m", &num);
//	int ab = num % 2;
//	if(ab==1)
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a < 101)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//	return 0;
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	default:
//		printf("错误");
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//break永久跳过
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	int ch = 10;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	//getchar();
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N)");
//	int abc = getchar();
//	if (abc = 'Y')
//		printf("yes");
//	else
//		printf("no");
//
//	return 0;
//}
