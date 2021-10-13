#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int binary_search(int ar[] ,int b, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//			if(ar[mid] < b)
//			{
//				left = mid + 1;
//			}
//			else if (ar[mid] > b)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//			}
//	 }
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int a = binary_search(arr, key,sz);
//	if (-1==a)
//	{
//		 printf("找不到/n");
//	}
//	else
//	{
//		printf("找到了，下标为%d", a);
//	}
//
//
//	return 0;
//}
//
//
//void Add(int* a)
//{
//	(*a)++;
//
//}
//int main()
//{
//
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//	
//
//	return 0;
//}


int main()
{
	char arr[] ="年号麻花打赏";
	printf("%d", strlen(arr));
	return 0;

}
