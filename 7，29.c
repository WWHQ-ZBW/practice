#define _CRT_SECURE_NO_WARNINGS
//字面常量
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const int n = 20;
//	int arr[n] = { 0 };
//	return 0;
//}

//#define MAX 100
//#define S "asdf"
//int main()
//{
//	printf("%d\n",MAX);
//	printf("%s\n", S);
//	return 0;
//}
//enum Color
//{
//	RED,
//	GREEN,
//	BIUE
//};
//int main()
//{
//	RED = 10;
//}
//int main()
//{
//	char ab = "abc";
//	return 0;
//}
//int main()
//{
//	char arr1[] = "asdf";
//	char arr2[] = { 'a','s','d','f','\0'};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("abc\n");
//	printf("%c\n",'\'');
//	printf("abc\ndef");
//	printf("\"");
//	printf("abc\\0a\n");
//	printf("\a");
//	printf("%c\n",'\130');
//	printf("%c\n",'\x63');//c
//	return 0;
//}
/*int main()
{
	int* p = NULL;//chuangjianzhizhen为变量p,并赋值为NULL
}*///c的
//c++的注释风格//给自己的代码写注释
//int main()
//{
//	int input = 0;
//	printf("进入大学\n");
//	printf("要好好学习吗（1/0)?");
//	scanf("% d",&input);
//	if (input == 1)
//	{
//		printf("hao/n");
//	}
//	else
//	{
//		printf("buhao\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("xuexi\n");
//	while(a<1000)
//	{
//		printf("努力:%d\n",a);
//		a++;
//	}
//	if (a == 1000)
//	{
//		printf("实现理想\n");
//	}
//	else
//	{
//		printf("加油\n");
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	/*int z = 0;
//	z = x + y;
//	return z;*/
//	return(x + y);
//}
//
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d",&n1,&n2);
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char ch[] = {"abcd\0"};
//	int arr[10] = { 0,1,2,3,4,5,6,7,18,9 };
//	//printf("%d\n", arr[8])
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		printf("%d\n", ch[i]);
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int daxiao(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//	return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = daxiao(a, b);
//	printf("%d\n",c);
//	return 0;
//}
//int three(int x)
//{
//	if (x>0)
//		return -1;
//	else if (x==0)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int y = 0;
//	int z = 0;
//	scanf("%d",&z);
//	y= three(z);
//	printf("%d\n", y);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d",&x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d", y);
//	return 0;
//}
//int main()//除号的两端都是整数执行是整数除法
//{
//	float a = 7 / 2.0;
//	printf("%.1f\n", a);
//	int b = 7 % 2;//取模的两端都是整数
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a = 20;
//	a = a + 3;//a+=3
//	return 0;
//}
//0是假 非零是真
//int main()
//{
//	int a = 0;
//	if (!a)
//	printf("hao\n");
//	printf("%d\n", sizeof a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	/*int a = (int)3.14;
//	printf("%d\n", a);*/
//	int a = 15;
//	int b = 13;
//	//if (a||b)
//	//{
//	//	printf("hao");
//	//}
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}
//int Add(int x, int y)
//	{
//		return x + y;
//	}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = 12;
//	int d = (c = a - 9, b = a + b, c + b);
//	printf("%d\n", d);
//	
//	return 0;
//}
//typedef
/