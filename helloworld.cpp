#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.д��������
//c�����Ǵ��������ĵ�һ�п�ʼִ�е�
//C���Դ����е���������
//{}������Ǻ�����
//int�Ǻ����ķ�������
//main�Ǻ���
//printf-�⺯��-��Ļ
//printf��ʹ�ã�Ҫ���к�������ͷ�ļ�stdio.h��
int main()
{
	printf("HelloWorld\n");
	/*char ch = 'a';
	int sh = 1222;
	int age = 20;*/
	//printf("%d\n,sh");//��ӡһ������ - %d
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//����+����+���д��� ��ݼ�ctrl+f5