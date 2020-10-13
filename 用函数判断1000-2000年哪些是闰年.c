//用函数判断1000-2000年哪些是闰年
#include<stdio.h>
int is_leap_year(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400))
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i) == 1)
			printf("%d ",i);
	}
	return 0;
}