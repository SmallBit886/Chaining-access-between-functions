#define _CRT_SECURE_NO_WARNINGS 1
//��ʽ����
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));//�������һ��strlen����
	printf("%d\n", ret);	//8
	return 0;
}