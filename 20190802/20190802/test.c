#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*

ջ��ջ�ϵ����ֵ����������  0xcccccccc

�ѣ����ϵ����ֵ���ڶڶڶڶڶڶ�  0xcdcdcdcd

\t :�Ʊ��  Tab

strlen:  ����\0ֹͣ����
%s:      ����\0ֹͣ��ӡ

C: 0 ���   ��0��ʾ��    -1
������ʵ��һ�����ܵġ�

 ����ֵ����  ������(��ʽ�����б�)
 {
       �����壻
	   return ����ֵ��
 }

 ��ֵ����     ��ַ����

 ���飺�����ͬ�������͵����ݼ��ϡ�����
  �ֲ����鶨���֮��û�г�ʼ����Ĭ��ֵΪ���ֵ��

  ���ԣ�
  1����ϵ� F9
  2��F5 �������ԡ�

*/

int main()
{
	int a = 10;
gaobo:
	printf("hehe\n");
	if(a < 20)
	{
		goto gaobo;
	}
	return 0;
}

#if 0
int Max(int a,int b)
{
	return a > b ? a : b;
}
//->  ָ���
//auto a = 10;
int main()
{
	//auto a1 = 10;
	int a = 10;
	//int a = (10,20,30,40);//�����һ�����ʽ
	//printf("%d\n",a);

	//int a = 10;
	//int b = 20;
	//int ret = Max(a,b);
	//printf("%d\n",ret);
	/*int *p = &a;
	*p = 99;
	printf("%d\n",a);*/
	//printf("%d\n",-a);//������棬!  ��    0
	//printf("%d\n",a--);//9  ��ʹ��  ��--
	//printf("%d\n",a);
	//printf("%d\n",!a);//������棬!  ��    0
	//printf("%d\n",!!a);//1

	//printf("%d\n",-10%3);//-1  
	//printf("%d\n",-10%-3);//1
	//printf("%d\n",10%-3);//-1
	//printf("%d\n",10%3);//1
	return 0;
}


int Add(int a,int b)
{
	int sum = 0;
	sum = a+b;
	return sum;
}
//void :������
void Show(int arr[],int len)
//void Show(int arr[])
{
	//int len = sizeof(arr)/sizeof(arr[0]);error
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[20] = {1};
	int len = sizeof(arr)/sizeof(arr[0]);
	// sizeof(arr):����������ֽڴ�С  40
	//sizeof(arr[0]):4

	/*int i = 0;
	for(i = 0;i < len;i++)
	{
		scanf("%d",&arr[i]);
	}*/

	Show(arr,len);

	//for(i = 0;i < len;i++)
	//{
	//	printf("%d ",arr[i]);//
	//}

	//arr[10] = 99; error
	//printf("%d\n",arr[10]);
	//int a;


	//int num1 = 0;
	//int num2 = 0;
	//int ret = 0;
	//scanf("%d%d",&num1,&num2);
	//ret = Add(num1,num2);//ʵ��
	//printf("%d\n",ret);
	/*int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d",&num1,&num2);
	sum = num1+num2;
	printf("%d\n",sum);*/
	return 0;
}


int main()
{
	while(1)//�����ʽ��
	{
		printf("���˧\n");//ѭ����
	}
	/*int line = 0;
	while(line <= 20000)
	{
		printf("����д����\n");
		line++;
	}
	printf("��ɹ���\n");*/
	return 0;
}


int main()
{
	int input = 0;
	printf("����ѡ�����Ǻú�ѧϰ���밴1������0\n");
	scanf("%d",&input);
	int  i = 0;
	if(input == 1)
		printf("���ӭȢ�׸��� or ����\n");
	else if(input == 0)
		printf("���ؼ�������\n");
	else
		printf("����̬�ȣ�������ȷ������\n");
	return 0;
}

int main()
{
	int input = 0;
	printf("����ѡ�����Ǻú�ѧϰ���밴1������0\n");
	scanf("%d",&input);
	if(input == 1)
	{
		printf("���ӭȢ�׸��� or ����\n");
	}
	else if(input == 0)
	{
		printf("���ؼ�������\n");
	}
	else
	{
		printf("����̬�ȣ�������ȷ������\n");
	}
	return 0;
}


int main()
{

	char s[]="\\123456\123456\t";
	printf("%d\n",strlen(s));

	//printf("%d\n", strlen("abcdef"));//  6
	//// \32��������һ��ת���ַ�
	//printf("%d\n", strlen("c:\test\32\test.c"));//  13


	/*printf("%d\n",'\015');
	printf("%d\n",'\x0d');*/
	////E:\Ccode\bittest\test.c
	//printf("%s\n","E:\\Ccode\\bittest\\test.c");
	////"gaobo is cool"
	//printf("\'gaobo is cool\'");
	return 0;
}


int main()
{
	char * str1 = "hello bit";//Ĭ����\0��β

	char str2[] = "abcdef";//Ĭ����\0��β
    char str3[5] = "abcd";//Ĭ����\0��β

	char str4[5] = {'a','b','c','d','e'};


	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("%s\n",str4);
	printf("hello word\n");
	return 0;
}



#define RED1 0
#define GREEN2 1


enum Color 
{
	RED,//0
	GREEN = 3,//1
	BLACK,//2
	BLUE//3
}col;
int main()
{
	printf("%d\n",GREEN2);
	col = GREEN;
	printf("%d\n",RED);
	printf("%d\n",GREEN);
	printf("%d\n",BLACK);
	printf("%d\n",BLUE);
	return 0;
}
#endif
