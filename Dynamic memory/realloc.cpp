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
				//ҵ����
			}
			else
			{
				exit(EXIT_FAILURE);
			}
			//��չ����
			//����1
			//ptr = (int *)realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)

			//����2
			int*p = NULL;
			p = (int *)realloc(ptr, 1000);
			if (p != NULL)
			{
				ptr = p;
			}
			//ҵ����
			free(ptr);
	system("pause");
	return 0;
}