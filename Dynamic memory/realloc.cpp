#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#define NUM 10
int main3()
{
		int *ptr =(int*) malloc(100);
			if (ptr != NULL)
			{
				//业务处理
			}
			else
			{
				exit(EXIT_FAILURE);
			}
			//扩展容量
			//代码1
			//ptr = (int *)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)

			//代码2
			int*p = NULL;
			p = (int *)realloc(ptr, 1000);
			if (p != NULL)
			{
				ptr = p;
			}
			//业务处理
			free(ptr);
	system("pause");
	return 0;
}