#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
数组：一块连续的，存放相同数据类型的数据集合。
局部数组：
数组什么时候确定大小？编译的时候
数组什么时候分配内存？运行
数组最大分配多大内存？栈：1M或者2M

字符串：
放在只读区 --》readonly段

数组名：代表数组首元素的地址

二维数组是一个特殊的一维数组


*/

void BubbleSort(int *arr,int len)
{
	int  i = 0;//趟数
	int flg = 0;
	for(i = 0;i < len-1;i++)
	{
		int j = 0;
		flg = 0;
		for(j = 0;j < len-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flg = 1;
			}
		}
		if(flg == 0)
		{
			break;
		}
	}
}
void Show(int *arr,int len)
{
	int i = 0;
	for(i = 0; i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {12,4,5,2,0,99,76,45,32};
	int len = sizeof(arr)/sizeof(arr[0]);
	Show(arr,len);
	BubbleSort(arr,len);
	Show(arr,len);
	return 0;
}

#if 0
//void Show(int arr[][4],int row,int col)
void Show(int (*arr)[4],int row,int col)
{
	int i = 0;
	for(i = 0;i < row;i++)
	{
		int j = 0;
		for(j = 0;j < col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	Show(arr,3,4);

	//int arr[3] = {1,2,3};
	////数组指针  
	//int (*p)[3] = &arr;

	/*int a = 10;
	int *pp = &a;*/

	/*int i = 0;
	for(i = 0;i < 3;i++)
	{
		int j = 0;
		for(j = 0;j < 4;j++)
		{
			printf("%d ",&arr[i][j]);
		}
		printf("\n");
	}*/
	//printf("%d\n",arr[1][0]);
	//printf("%d\n",arr[0][4]);

	//int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr3[3][4] = {1,2,3};
	//int arr4[][4] = {1,2,3,4,5};
	////行可以省略，列不可以省略
	//int arr5[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};


	return 0;
}

#define SIZE 10
void Show(int *arr,int len)
{
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%d\n",&arr[i]);
		//printf("%d ",arr[i]);
		//printf("%d ",*(arr+i));
		//指针+数字  -》 指针的类型int   char 
		//arr[i] <==> *(arr+i)   [] :自带解引用
	}
	printf("\n");
}

int main()
{
	//int a = 10;
	//int b = 20;
	//printf("%d\n",&a);
	//printf("%d\n",&b);
	int i = 0;
	int arr[5] = {1,2,3,4,5};
	for(i = 0;i <= 5;i++)
	{
		arr[i] = 0;
		printf("hhhh\n");
	}

	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int len1 = sizeof(arr)/sizeof(arr[0]);
	Show(arr,len1);*/

	/*int arr2[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int len2 = sizeof(arr2)/sizeof(arr2[0]);
	
	Show(arr,10);
	Show(arr2,15);*/
	/*int a = 10;
	int *p = &a;*/

	/*int i = 0;
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i = 0;i < 15;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");*/
	return 0;
}


int main()
{


	//char *p1 = "abc";
	//char *p2 = "abc";
	//printf("%p\n",p1);
	//printf("%p\n",p2);

	//*(p+1) = 'g';
	//char arr[] = "abc";
	//arr[0] = 'g';
	///printf("%s\n",p);
	//const int size = 10;
	//int arr[SIZE];
	/*char arr[5] = {'a','b','c'};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",len);*/
	//int arr[10] = {1,2,3};
	//int arr2[] = {1,2,3,4,5};
	//int len = sizeof(arr)/sizeof(arr[0]);
	////
	//char crr[5] = {'a','b','c','d','e'};
	//char crr2[5] = "abcd"; 
	//char crr3[] = "abcdef";
	//int len2 = strlen(crr2);
	//int len3 = strlen(crr3);
	//int len4 = strlen(crr);
	//printf("%d\n",len4);
	return 0;
}
#endif