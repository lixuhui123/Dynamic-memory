#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#define NUM 10
//动态开辟内存过程中常见的错误
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//值传递
//	strcpy(str, "hello world");
//	printf(str);
//}
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//p的指向返回了，但那段空间被收回了，解决方法加上static关键字
//	printf(str);
//}
/*void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str);
	str = NULL;
}*/

void Test(void)
{
	char* str = NULL;
    str = (char *)malloc(100);
	int c = 0;
	
	free(str);//释放之后的那段空间还给内存了，但是指针还是指向那段内存，所以没人用的时候
	//这段内存是可以用的，如果操作系统将它分配给别的进程此时用它就会出错，所以不要这样写。
	strcpy(str, "hello");
	printf(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
int main5()
{
	
	Test();
	system("pause");
	return 0;
}