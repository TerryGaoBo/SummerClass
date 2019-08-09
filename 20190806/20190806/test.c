#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "swap.h"
#include <string.h>
//迭代  5！= 5*4!    4!=4*3!;
int Fac(int n)
{
	int i = 1;
	int ret = 1;
	for(i = 1;i <= n;i++)
	{
		ret *= i;
	}
	return ret;
}
/*
1、调用自己本身
2、有一个趋近于终止的条件
3、递归发生在栈上，栈有大小。
每一次递归，都会在栈上开辟内存。
注意：不要尝试在脑海里，展开你的递归代码。
       横向思考       代码纵向执行
*/
int Fac2(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*Fac2(n-1);//n * (n-1)!
}
//1234    1  2  3  4
//123      1  2  3
//12        1  2
//1          1        6789
//1234
void Func1(unsigned int n)
{
	//1  2  3   4
	if(n > 9)
	{
		Func1(n/10);
	}
	printf("%d ",n%10);
}
//strlen();    遇到\0停止
int MyStrlen2(char *p)
{
	int count = 0;
	while(*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int MyStrlen(char *p)
{
	if(*p == '\0')
	{
		return 0;
	}
	return 1+MyStrlen(p+1);
}
//1   1   2   3   5   8   13   21 
//int count = 0;
int Fabonaci1(int n)
{
	if(n==1 || n==2)
	{
		//count++;
		return 1;
	}
	return Fabonaci1(n-1)+Fabonaci1(n-2);
}
int Fabonaci(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int i = 0;
	for(i = 3;i <= n;i++)
	{
		f3 = f1+f2;
		f1 = f2;//赋值新的f1
		f2 = f3;//赋值新的f2
	}
	return f3;
}
int main()
{
	printf("%d\n",Fabonaci(40));
	//printf("%d\n",count);
	//printf("%d\n",Fabonaci(1));
	//printf("%d\n",Fabonaci(2));
	//printf("%d\n",Fabonaci(3));


	//char *p = "hello";//'\0'
	//printf("%d\n",MyStrlen(p));
	//Func1(1234);
	//printf("%d\n",Fac2(1000000));
	return 0;
}

#if 0
int IsPrime(int num)
{
	int i = 0;
	for(i = 2; i < num;i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int LeapYear(int year)
{
	if((year%4==0 && year != 100) || (year % 400==0))
	{
		return 1;//是闰年
	}
	return 0;
}

void Inc(int *p)
{
	(*p)++;
}

int  main()
{
	char arr[20] = "hello";
	//strcat(arr,"bit")  -> char *
	int ret = strlen(strcat(arr,"bit"));
	//printf("-->%s\n",strcat(arr,"bit"));
	printf("%d\n", ret);
	//int num = 0;
	//int i = 0;
	//for( i = 0;i < 10;i++)
	//{
	//	Inc(&num);
	//}
	//printf("%d\n",num);
	//int i = 0;
	//for(i = 2000;i <= 3000;i++)
	//{
	//	if(LeapYear(i) == 1)
	//	{
	//		printf("%d\n",i);
	//	}
	//}

	//printf("%d\n",IsPrime(7));
	//printf("%d\n",IsPrime(17));
	//printf("%d\n",IsPrime(27));
	//printf("%d\n",IsPrime(79));
	//printf("%d\n",IsPrime(14));
	//printf("%d\n",IsPrime(88));

	//int ret = IsPrime(7);
	//if(ret == 1)
	//{
	//	printf("is prime\n");
	//}
	//else
	//{
	//	printf("is not prime\n");
	//}
	return 0;
}



/*
函数：
返回值类型  函数名  (形式参数列表) 
{
         函数体;
}
一：按值传递：
	1、形式参数的改变，不会影响实参的值。
	2、形参是实参的一份拷贝。
二：按址传递
	1、如果你要改变实参的值，需要传地址。
*/
//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//void Swap(int *px,int *py)
//{
//	int tmp = *px;
//	*px = *py;	
//	*py = tmp;
//}

int main()
{
	int a = 10;
	int tmp = 0;
	int b = 20;
	printf("%d,%d\n",a,b);
	Swap(&a,&b);
	
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("%d,%d\n",a,b);
	return 0;
}





int Max(int a,int b)//形式参数
{
	return a>b?a:b;
}
//求3个数的最大值
int Max3(int a,int b,int c)
{
	/*int tmp = Max(a,b);
	int tmp2 = Max(tmp,c);
	return tmp2;*/
	return Max(Max(a,b),c);//链式表达式
}
int main()
{
	int a = 30;
	int b = 40;
	int ret = Max(a,b);//实际参数  实参
	printf("%d\n",ret);
	return 0;
}
#endif