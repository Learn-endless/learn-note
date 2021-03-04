#define _CRT_SECURE_NO_WARNINGS 1
//求100到200之间的素数。
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i%j == 0)
			{
				printf("不是素数: %d\n", i);
				break;
			}
		}
		if (j >sqrt(i))
		{
			printf("是素数：%d\n", i);
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}


//1000到2000的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//		{
//			printf("%d", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//求两个数的最大公约数(辗转相除法)
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数是%d\n", n);
//
//	return 0;
//}


//100以内3的倍数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; num <= 100; i++)
//	{
//		num = i * 3;
//		if (num <= 100)
//			printf("%d ", num);
//	}
//	return 0;
//}


//从大到小排列三个数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		a = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//模拟用户登录情景，并且只能登录三次（只允许输入三次密码）
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char passworld[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &passworld);
//		if (strcmp(passworld, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序！\n");
//
//	return 0;
//}


//演示多个字节从两端移动，向中间汇聚
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "hellow world!!!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = 0;
//	right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);     //延迟0.5秒，需要头文件 #include<window.h>
//		system("cls");  //清屏指令 cls ,system()需要头文件 #include<stdlib.h>
//		left++;
//		right--;
//		if (left > right)
//			printf("%s\n", arr2);
//	}
//
//	return 0;
//}


//在一个有序数组中查找一个数字（二分查找法）
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int k = 0;
//	right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("请输入需要查找的数:");
//	scanf("%d", &k);
//
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid]>k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到！\n");
//	return 0;
//}


//计算: 1!+2!+3!+...+10!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	int ret = 0;
//	for (i = 1; i <= 10; i++)   
//	{
//		num *= i;
//		ret += num;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//计算n的阶乘。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	printf("请输入n：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}