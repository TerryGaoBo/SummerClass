#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//Linux   
//C++ 
/*
do while()  ���ٻ�ִ��һ�Ρ�
֧����ʽ���ʽ
*/
int main()
{
	char src[10] = "abcdefghi";
	memset(src,0,10);
	//char str[10] = {0};
	//char src[] = "abcdefghi";
	//char *p = strcpy(str,src);
	//int len = strlen(strcpy(str,src));
	//printf("%s\n",str);
	//printf("%s\n",p);
	//printf("%d\n",len);
	//memcpy();
	//memset();
	//memcmp();
}

#if 0
void Menu()
{
	printf("*************************\n");
	printf("*******1.play************\n");
	printf("*******0.exit************\n");
	printf("*************************\n");
}
void game()
{
	
	int randnum = rand()%100+1;//[1,101)
	printf("��ʼ��Ϸ\n");
	//RAND_MAX;
	while(1)//
	{
		int num = 0;
		printf("��������������Ҫ�µ�����:->");
		scanf("%d",&num);
		if(num == randnum)
		{
			printf("���¶���\n");
			break;
		}
		else if(num > randnum)
		{
			printf("�´���\n");
		}
		else if(num < randnum)
		{
			printf("��С��\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�����������
	do
	{
		Menu();
		printf("������������Ĳ�����");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("���������۾���������ȷ������\n");
			break;
		}

	}while(input);
	return 0;
}


int main()
{
	int count = 3;
	while(count !=0)
	{
		char password[7]={0};//0 '0' '\0' NULL
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		count--;
		printf("������%d�λ���\n",count);
	}
	return 0;
}

int main()
{
	char str1[] = "welcome bit";
	char str2[] = "***********";
	int left = 0;
	int right = strlen(str1)-1;
	while(left <= right)
	{
		Sleep(1000);
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n",str2);
	}
	return 0;
}


//�ҵ�key�����±�  �Ҳ�������-1
int binarySearch(int arr[],int len,int key)
{
	int left = 0;
	int right = len-1;
	while(left <= right)
	{
		int mid = (left + right)/2;
		if(arr[mid] > key)//14      7
		{
			right = mid-1;
		}
		else if(arr[mid] < key)//14    28
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = {2,5,7,8,9,10,24,27,29,41};
	int len = sizeof(arr)/sizeof(arr[0]);
	int ret = binarySearch(arr,len,240);
	if(ret == -1)
	{
		printf("not fount !\n");
	}
	else
	{
		printf("%d\n",ret);
	}
	return 0;
}


//5!    1!+2!+3!+4!+5!
int main()
{
	int n = 3;
	int i = 0;
	int ret = 1;
	int sum = 0;//
	int j = 0;
	for(j = 1;j <= n;j++)//1!+....5!
	{
		ret = 1;
		for(i = 1;i <= j;i++)
		{
			ret *= i;
		}
		sum = sum+ret;
	}
	printf("%d\n",sum);
	return 0;
}


int main()
{
	int i = 0;
	do
	{
		printf("%d ",i);
		i++;
	}while(i < 10);


	/*while(i <  0)
	{
		printf("%d ",i);
	}*/

	//int i = 0;
	//for(i = 0;i < 5;i++)
	//{
	//	int j = 0;
	//	for(j = 0;j < 5;j++)
	//	{
	//		printf("hhh ");
	//	}
	//	printf("\n");
	//}

	////����1
	//for(;;)
	//{
	//	printf("hehe\n");
	//}
	//����2
	//int x, y;
	//for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}

	//int i = 0;
	//for(  ; i < 10 ;i++)
	//{
	//	/*if(i == 5)
	//	{
	//		continue;
	//	}*/
	//	printf("%d ",i);
	//}
	//for(;;)  ��ѭ��
	//{

	//}
	return 0;
}
#endif