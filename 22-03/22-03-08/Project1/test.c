#include<stdio.h>


void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr,sz); //把数组初始化为0
	Reverse(arr,sz);
	Print(arr, sz);
	return 0;
}