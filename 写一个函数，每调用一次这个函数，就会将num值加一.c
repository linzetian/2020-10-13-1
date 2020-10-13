//写一个函数，每调用一次这个函数，就会将num值加一
#include<stdio.h>
void Add(int* p)
{
	(*p)++; //*p++等价于*（p++）
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n",num);
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}