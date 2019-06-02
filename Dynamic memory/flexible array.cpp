#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#define NUM 10
typedef struct My_type
{
	int i = 0;
	int arr[0];
}type_a;
int main7()
{
	int i = 0;
	type_a *p = (type_a *)malloc(sizeof(type_a) + 100 * sizeof(int));//相当于404个相同的结构体
	//p->i = 10;
	for (i = 0; i < 100; ++i)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 100; ++i)
	{
		printf("%d ",p->arr[i]);
	}
	free(p);
	system("pause");
	return 0;
}