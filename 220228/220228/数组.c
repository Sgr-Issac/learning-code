#include <stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3};//不完全初始化
//	char arr2[5];
//	int n = 5;
//	//char ch[n];//[]内必须是个常量
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,5,6};
//	char ch[5][6];
//	return 0;
//}


//冒泡排序

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tep = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tep;
				flag = 0;
			}

		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 5,9,8,7.6};//不完全初始化
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);  //数组名即首元素地址
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	//int n = 5;
	//char ch[n];//[]内必须是个常量
	return 0;
}