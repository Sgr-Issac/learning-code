#include <stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3};//����ȫ��ʼ��
//	char arr2[5];
//	int n = 5;
//	//char ch[n];//[]�ڱ����Ǹ�����
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,5,6};
//	char ch[5][6];
//	return 0;
//}


//ð������

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
	int arr[] = { 1, 2, 3, 5,9,8,7.6};//����ȫ��ʼ��
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);  //����������Ԫ�ص�ַ
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	//int n = 5;
	//char ch[n];//[]�ڱ����Ǹ�����
	return 0;
}