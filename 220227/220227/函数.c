#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}
//void  Swap1(int x, int y)  x,y有独立空间
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//Swap1(a, b);
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//Swap2(int*pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int *pa = &a;/*
//	//int *pb = &b;*/
//	Swap2(&a,&b);  //传址调用
//	//*pa = 20;
//	printf("a=%db=%d\n", a,b);
//
//	return 0;
//}

int binary_search(int arr[], int k,int sz) //****二分查找
{
	
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid]>k)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz); //数组仅仅传递首元素的地址
	if (ret == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("%d\n", ret);
	}

	return 0;
}