#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int find = 3;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int right = size - 1;
//	int left = 0;
//	int mid = (left + right) / 2;
//	for (; right >= left; mid = (left + right) / 2)//mid=left+(right-left)/2Ҳ��
//	{
//		if (arr[mid] < find)
//			left = mid + 1;
//		else if (arr[mid] > find)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ����±���%d", mid);
//			break;
//		}
//	}
//	if (right < left)
//		printf("�Ҳ���");
//		return 0;
//}
//int main()//ʧ��
//{
//	char arr1[] = "welcome to here!!!";
//	char arr2[] = "##################";
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	int i = size / 2 + size % 2;
//	int n = 0;
//	for (;i>0;i--)
//	{
//		for(int i=0;i<size;i++)
//			printf("%c", arr2[i]);
//		arr2[n] = arr1[n];
//		arr2[size - n - 1] = arr1[size - n - 1];
//		n++;
//		printf("\n");
//	}
//	return 0;
//}//�������size���ַ������ȼ�һ
#include <windows.h>
int main()//����
{
	char arr1[] = "welcome to here!!!";
	char arr2[] = "##################";
	//int size = sizeof(arr1) / sizeof(arr1[0]) - 1; ����
	int size = strlen(arr2);
	int i = size / 2 + size % 2;
	int n = 0;
	for (; i >= 0; i--)
	{
		/*for (int i = 0; i < size; i++)
			printf("%c", arr2[i]);*/
		printf("%s", arr2);
		arr2[n] = arr1[n];
		arr2[size - n - 1] = arr1[size - n - 1];
		n++;
		printf("\n");
		sleep(1000);
	}
	return 0;
}
