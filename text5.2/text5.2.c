#define _CRT_SECURE_NO_WARNINGS 1
//链式访问
//把一个函数的返回值作为另外一个函数的参数
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
	int ret = strlen(strcat(arr, "bit"));//这里介绍一下strlen函数
	printf("%d\n", ret);	//8
	return 0;
}