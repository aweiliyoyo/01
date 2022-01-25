#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.写出主函数
//c语言是从主函数的第一行开始执行的
//C语言代码中得有主函数
//{}里面的是函数体
//int是函数的返回类型
//main是函数
//printf-库函数-屏幕
//printf的使用，要打招呼（引用头文件stdio.h）
int main()
{
	printf("HelloWorld\n");
	/*char ch = 'a';
	int sh = 1222;
	int age = 20;*/
	//printf("%d\n,sh");//打印一个整数 - %d
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//编译+链接+运行代码 快捷键ctrl+f5