#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
1��extern  �����ⲿ����
2��register��������������������ڼĴ������С�
3��static
      ���ξֲ�����:   ����������������-���������
	  ����ȫ�ֱ��� : ֻ���ڵ�ǰԴ�ļ���ʹ��
	  ���κ����� �ú���ֻ���ڵ�ǰԴ�ļ���ʹ��
4���������⣺extern��static��⣿����
5��typedef�������ض��壺�����
     ��;�������ͱȽϸ��ӵ�ʱ�����ǿ��Խ��������������
6���������⣺typedef��#define������
           1��typedef�������ض��壺�����  
		         #define�ַ����滻��
			2��..........
7��ָ�룺����-�����������ַ��
     ��ͬ�����͡�
8��ָ��Ĵ�С��32λ ����ʲô���͵�ָ�룬����4���ֽ�
     64λƽ̨��8���ֽڡ�

9���ṹ��,����  �ۺ�����: �����ǽ������帳ֵ��
ֻ��һ�λ����Ǿ����ڶ����ͬʱ��
   1.�ṹ��Ķ���
   2.�ṹ��ĳ�ʼ��
   3.�ṹ�������ݳ�Ա�ķ���
   4.�ṹ����ڲ������ܹ���ʼ�����ṹ���Ա��

10��switch(  )  ������switch��������������Щ���ͣ�
		float      double

11��break:����ѭ��������ѭ����
		continue ��������ѭ����

12��
EOF��end of file  �ļ��Ľ�β   ����  ��Ļ �����ļ�
		-1    ctr+z   ������   afjalkjfasl
 */
int main()
{
	char c = -3;
	//111 11010   <<1
	//111 11001
	//100 00110
	printf("%d\n",c << 1);
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			 continue;
		}
		putchar(ch);
	}*/
	return 0;
}

#if 0
int main()
{
	//int ch = getchar();//��ȡһ���ַ�
	//putchar(ch);//��ӡһ���ַ�
	int ch = 0;
	while ((ch = getchar())  !=  EOF)
	{
		putchar(ch);
	}
	return 0;
}

int main()
{
	int i = 1;
	while(i<=10)
	{
		if(i == 5)
			continue;
		printf("%d ", i);
		i = i+1;
	}
	return 0;
}

int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
            m++;
    case 2:
            n++;
    case 3:
             switch (n)
            {//switch����Ƕ��ʹ��
             case 1:
                    n++;
             case 2:
                    m++;
                    n++;
                    break;
            }
    case 4:
            m++;
             break;
    default:
             break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}

int main()
{
	int input = 0;
	scanf("%d",&input);
	//double input = 1.0f;
	switch(input)
	{
	default:
		printf("������������\n");
		break;
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;

	}
	//int i = 0;
	//for(i = 1;i <= 100;i++)
	//{
	//	if(i % 2 != 0)
	//	{
	//		printf("%d ",i);
	//	}
	//}
	return 0;
}


int main()
{
	int a = 0;
	int b = 2;
	if(10 == a)//����          a == 10
	{
		printf("hehe\n");
	}
	//if(a == 1)
	//	if(b == 2)
	//	printf("hehe\n");
	//	else
	//	printf("haha\n");
	/*if(a == 1)
	{
		if(b == 2)
		{
			printf("hehe\n");
		}
		else
		{
			printf("haha\n");
		}
	}*/
	return 0;
}


struct Student
{
	char name[20];
	int age;
	char stunum[10];
}stu3= {"zhangsan",20,"123456"};

int main()
{
	 //stu3 = {"zhangsan",20,"123456"};
	 int arr[10] = {1,2,3,4,5};
	// arr = {9,8,7,6,5,4,3,2}; error
	//struct Student stu1 = {"zhangsan",20,"123456"};
	//struct Student stu2 = {"guanyu",18,"110"};
	//stu2.age = 99;
	////stu2.name = "zhangfei";
	//strcpy(stu2.name,"zhangfei");

	//printf("%d\n",sizeof(char *));//4
	//printf("%d\n",sizeof(short *));//4
	//printf("%d\n",sizeof(int *));//4
	//printf("%d\n",sizeof(float *));//4
	//printf("%d\n",sizeof(long *));//4
	//printf("%d\n",sizeof(long long *));//4
	//printf("%d\n",sizeof(double *));//4
	/*int a = 10;
	int *p = &a;
	*p = 99;
	printf("%d\n",*p);*/

	/*char ch = 'g';
	char *pc = &ch;

	short sh = 19;
	short *psh = &sh;*/

	//int *p2 = (int *)&ch;

	return 0;
}


//PI * 2 * 2;
#define PI 3.14159 //��ʶ��
#define SIZE 10
#define ADD(x,y)  ((x)+(y))
#define MUL(a,b)  ((a)*(b))
int main()
{
	printf("%d\n",MUL(10+2,30));
	printf("%d\n",((10+2)*30));
	/*printf("%d\n",2*ADD(10,20));
	printf("%d\n",2*(10+20));*/
	//printf("%f\n",ADD(10.1,20.1));
	/*int a = SIZE;
	printf("%d\n",a);
	printf("%d\n",SIZE);*/
	return 0;
}


//extern int a;
extern int Add(int ,int);

typedef unsigned int Unint;

typedef int ARR[10];


void Test()
{
	static int i = 0;
	i++;
	printf("%d\n",i);
}

int main()
{
	ARR arr = {1,2,3,4,5,6,7,8,9,10};

	/*Unint i = 99;
	printf("%d\n",i);*/

	//int ret = Add(10,20);
	//printf("%d\n",ret);
	/*static int a;*/
	//printf("%d\n",a);
	/*int i = 0;
	for(i = 0;i < 5;i++)
	{
		Test();
	}*/
	return 0;
}


extern int a;
extern int Add(int ,int);
int main()
{
	/*register int i = 10;
	printf("%d\n",i);*/
	int ret = Add(10,20);
	printf("%d\n",ret);

	return 0;
}
#endif
