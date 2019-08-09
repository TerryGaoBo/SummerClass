#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*

栈：栈上的随机值，烫烫烫烫  0xcccccccc

堆：堆上的随机值，囤囤囤囤囤囤囤  0xcdcdcdcd

\t :制表符  Tab

strlen:  遇到\0停止计算
%s:      遇到\0停止打印

C: 0 表假   非0表示真    -1
函数：实现一个功能的。

 返回值类型  函数名(形式参数列表)
 {
       函数体；
	   return 返回值；
 }

 按值传递     按址传递

 数组：存放相同数据类型的数据集合。连续
  局部数组定义好之后，没有初始化，默认值为随机值。

  调试：
  1、打断点 F9
  2、F5 启动调试。

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
//->  指向符
//auto a = 10;
int main()
{
	//auto a1 = 10;
	int a = 10;
	//int a = (10,20,30,40);//是最后一个表达式
	//printf("%d\n",a);

	//int a = 10;
	//int b = 20;
	//int ret = Max(a,b);
	//printf("%d\n",ret);
	/*int *p = &a;
	*p = 99;
	printf("%d\n",a);*/
	//printf("%d\n",-a);//如果是真，!  假    0
	//printf("%d\n",a--);//9  先使用  后--
	//printf("%d\n",a);
	//printf("%d\n",!a);//如果是真，!  假    0
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
//void :无类型
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
	// sizeof(arr):整个数组的字节大小  40
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
	//ret = Add(num1,num2);//实参
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
	while(1)//（表达式）
	{
		printf("你很帅\n");//循环体
	}
	/*int line = 0;
	while(line <= 20000)
	{
		printf("继续写代码\n");
		line++;
	}
	printf("你成功了\n");*/
	return 0;
}


int main()
{
	int input = 0;
	printf("请你选择，你是好好学习，请按1，否则按0\n");
	scanf("%d",&input);
	int  i = 0;
	if(input == 1)
		printf("你会迎娶白富美 or 李现\n");
	else if(input == 0)
		printf("你会回家卖红薯\n");
	else
		printf("摆正态度，输入正确的数字\n");
	return 0;
}

int main()
{
	int input = 0;
	printf("请你选择，你是好好学习，请按1，否则按0\n");
	scanf("%d",&input);
	if(input == 1)
	{
		printf("你会迎娶白富美 or 李现\n");
	}
	else if(input == 0)
	{
		printf("你会回家卖红薯\n");
	}
	else
	{
		printf("摆正态度，输入正确的数字\n");
	}
	return 0;
}


int main()
{

	char s[]="\\123456\123456\t";
	printf("%d\n",strlen(s));

	//printf("%d\n", strlen("abcdef"));//  6
	//// \32被解析成一个转义字符
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
	char * str1 = "hello bit";//默认以\0结尾

	char str2[] = "abcdef";//默认以\0结尾
    char str3[5] = "abcd";//默认以\0结尾

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
