//用二分法查找在数组中找一个数（通过函数的形式）
#include<stdio.h>
//本质int arr1[]是指针，传递arr1首地址
int binary_search(int arr1[],int k,int sz)
{
	//int sz = sizeof(arr1) / sizeof(arr1[0]);//把他放在函数外部，把sz传递到自定义函数
	int left = 0;//z左下标
	int right = sz - 1;//右下标

	while (left <= right)
	{
		int mid = (left + right) / 2;//中间下标
		if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	int ret = binary_search(arr1,k,sz);//函数定义
	if (ret == -1)
	{
		printf("找不到这个数\n");
	}
	else
	{
		printf("找到了这个数，下标是：%d\n", ret);
	}
	return 0;
}