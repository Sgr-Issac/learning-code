#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//	const char *p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//
//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5); //数组名-首元素地址(第一行)
//	print2(arr, 3, 5);
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i <sz-1; i++)
	{
		for (int j = 0; j <sz-i-1 ; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};

//void qsort(void *base, size_t num, size_t width, int(*cmp)(const void *e1, const void *e2));

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu s[3] = { { "zhanagsan", 20 }, { "list", 30 }, { "wangwu", 42 } };
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}