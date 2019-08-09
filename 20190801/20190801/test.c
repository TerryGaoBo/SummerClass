#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//引入头文件
#include<string.h>
#include<limits.h>

#if 0
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//scanf("%d%d\n",&a,&b);
	//printf("%d,%d\n",a,b);
	sum = a+b;
	printf("%d\n",sum);
	return 0;
}


int a = 99;//全局变量--》整个工程  没有初始化，默认值为0
//作用域
int main()
{
	int i = 88;//局部变量在使用之前，一定要进行初始化，没有初始化,为随机值。
	printf("i = %d\n",i);
	{
		int a = 10;//局部变量
		//printf("{} = %d\n",a);
	}
	printf("%d\n",a);
	return 0;
}


int main()
{
	//数字 字母 下划线的组合形式
	const int i = 10;  //不能被改变    常变量  
	//i = 100;
	int i2 = 20;
	//不能以数字开头
	int i3 = 99;
	//"hello bit";
	/*int _________ = 999;
	int __________________ = 999;
	printf("%d\n",_________);*/

	//char ch = 10;
	////sizeof          求字节大小  面试问题：sizeof() 是不是库函数    是关键字/运算符
	//printf("%d\n",sizeof ch );
	//printf("%d\n",sizeof (short) );
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(long));
	//printf("%d\n",sizeof(long long));
	//printf("%d\n",sizeof(float));
	//printf("%d\n",sizeof(double));
	//-128-127
	//char i = 0;
	//for(i = 0;i < 130;i++)//127+1
	//{
	//	printf("%d ",i);
	//}

	//char ch1 = -1;
	//char ch2 = 3;
	//unsigned char ch3 = 9;
	/*char ch = 'A';
	printf("%c\n",ch);
	printf("%d\n",ch);*/
	//char ch = 'A';
	//short sh = 10;
	//int i = 20;
	//long l = 30;
	//long long ll = 40;
	//float ff = 12.5f;//精确表示小数点后6位
	//double d = 12.25;
	//printf("%c\n",ch);
	//printf("%d\n",sh);//十进制形式输出
	//printf("%d\n",i);
	//printf("%d\n",l);
	//printf("%ld\n",ll);
	//printf("%f\n",ff);
	//printf("%lf\n",d);
	return 0;
}

 
int main()
{
	printf("hello word\n");
	//"字符串"    \n   转义字符  换行
	return 0;//0   代表main函数 正常结束
}


条件编译
//预处理    行注释
//烦死了咖啡加拉克
/*
块注释
块注释
块注释
块注释
块注释
块注释
*/
int main()//程序的入口
{
	printf("hello word\n");
	/*int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);*/
	//printf库函数
	return 0;
}
//ctr+k+c   ctr+k+u
//int main()//程序的入口
//{
//	printf("hello\n");
//	return 0;
//}
#endif