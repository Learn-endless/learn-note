#define _CRT_SECURE_NO_WARNINGS 1
//��100��200֮���������
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
				printf("��������: %d\n", i);
				break;
			}
		}
		if (j >sqrt(i))
		{
			printf("��������%d\n", i);
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}


//1000��2000������
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


//�������������Լ��(շת�����)
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
//	printf("���Լ����%d\n", n);
//
//	return 0;
//}


//100����3�ı���
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


//�Ӵ�С����������
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


//ģ���û���¼�龰������ֻ�ܵ�¼���Σ�ֻ���������������룩
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char passworld[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &passworld);
//		if (strcmp(passworld, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}


//��ʾ����ֽڴ������ƶ������м���
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
//		Sleep(500);     //�ӳ�0.5�룬��Ҫͷ�ļ� #include<window.h>
//		system("cls");  //����ָ�� cls ,system()��Ҫͷ�ļ� #include<stdlib.h>
//		left++;
//		right--;
//		if (left > right)
//			printf("%s\n", arr2);
//	}
//
//	return 0;
//}


//��һ�����������в���һ�����֣����ֲ��ҷ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int k = 0;
//	right = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("��������Ҫ���ҵ���:");
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}


//����: 1!+2!+3!+...+10!
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


//����n�Ľ׳ˡ�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int num = 1;
//	printf("������n��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}