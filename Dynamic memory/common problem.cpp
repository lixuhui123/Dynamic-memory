#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#define NUM 10
//��̬�����ڴ�����г����Ĵ���
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//ֵ����
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
//	str = GetMemory();//p��ָ�򷵻��ˣ����Ƕοռ䱻�ջ��ˣ������������static�ؼ���
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
	
	free(str);//�ͷ�֮����Ƕοռ仹���ڴ��ˣ�����ָ�뻹��ָ���Ƕ��ڴ棬����û���õ�ʱ��
	//����ڴ��ǿ����õģ��������ϵͳ�����������Ľ��̴�ʱ�����ͻ�������Բ�Ҫ����д��
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