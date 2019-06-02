#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#define NUM 10
int main2()
{
	int *p = NULL;
	p = (int *)calloc(NUM, sizeof(int));
	if (NULL != p)
	{
		int i = 0;
		for (i = 0; i < NUM; ++i)
		{
			*(p + i) = i;
		}
	}
	for (int i = 0; i < NUM; ++i)
	{
		printf("%d ", *(p + i));
	}
	puts("\n");
	free(p);
	p = NULL;
	system("pause");
	return 0;
}