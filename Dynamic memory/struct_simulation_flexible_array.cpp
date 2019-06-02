#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#define NUM 10
int main()
{
	typedef struct st_type
	{
		int i;
		int *p_a;
	}type_a;
	type_a *p =(type_a*) malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int *)malloc(100 * sizeof(int));//p_a指向一个有100个元素的数组。
	//业务处理
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->p_a[i] = i;
	}
	for ( i = 0; i < 100; i++)
	{
		printf("%d ",p->p_a[i]);
	}
	//释放空间
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	system("pause");
	return 0;
}