#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	while (~scanf("%lf %lf %lf", &a, &b, &c))
	{
		if (a != 0)
		{
			double num = b*b - 4 * a*c;
			if (num == 0)
			{
				double x1 = -b / (2 * a);
				printf("x1=x2=%.2f\n", x1);
			}
			else if (num > 0)
			{
				double x1 = -b - sqrt(num) / 2 * a;
				double x2 = -b + sqrt(num) / 2 * a;
				printf("x1=%.2f;x2=%.2f\n", x1,x2);
			}
			else
			{
				double x1 = -b / (2 * a);
				double x2 = sqrt(b*b - a * 4 * c) / (2 * a);
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi",x1,x2,x1,x2 );
			}
		}
		
		else
		{
             printf("Not quadratic equation\n");
		}
	}
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
//			printf("Vowel\n");
//		else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//		getchar();
//
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int x;
//	while (~scanf("%d", &x))   //ctrl+z������
//	{
//		if (x > 0)
//			printf("1\n");
//		else if (x == 0)
//			printf("0.5\n");
//		else if (x < 0)
//			printf("0\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 0 };
//	for (int t = 0; t<3; t++)
//	{
//		scanf("%d", &arr[t]);
//	}
//	for (int t = 0; t<3;t++)
//	{
//		if (arr[t]>0)
//			printf("1\n");
//		else if (arr[t] == 0)
//			printf("0.5\n");
//		else
//			printf("0\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	int ch = 0;
//	int flag = 0;
//	//���getchar��ȡ��
//	while (((ch = getchar()) != '0') && ch != EOF)
//	{
//		if (ch == 'A')
//		{
//			flag++;
//		}
//		else if (ch == 'B')
//		{
//			flag--;
//		}
//	}
//	if (flag>0)
//		printf("A");
//	else if (flag<0)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char ch[100] = { 0 };
//	int i = 0;
//	int count_A = 0;
//	int count_B = 0;
//	gets(ch);
//	while (ch[i] != '0')
//	{
//		if (ch[i] == 'A')
//			count_A++;
//		else if (ch[i] == 'B')
//			count_B++;
//		i++;
//	}
//	if (count_A>count_B)
//		printf("A");
//	else if (count_A<count_B)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}

//���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ������
//�Ӽ�������n��ѧ���ɼ���������40���������ÿ������ǰ��ߵĳɼ���

//�������������У���һ������һ����������ʾn��ѧ����>=5����
//�ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���

//���������һ�У�����ɼ���ߵ�ǰ������ÿո�ָ���
//#include<stdio.h>
//int main()
//{
//	int number = 0;
//	int arr[40] = { 0 };
//	int i = 0;
//	scanf("%d", &number);
//	for (i = 0; i<number; i++)
//		scanf("%d", &arr[i]);	
//	int j = 0;
//	for (i = 0; i < number; i++)
//	{
//		for (j = 0; j<number - 1-i; j++)
//		{
//			if ((arr[j] - arr[j + 1]) < 0)
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i<5; i++)
//         printf("%d ", arr[i]);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* e1, const void*e2)
//{
//	return *(int*)e2 - *(int *)e1;
//}
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	scanf("%d\n", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//		scanf("%d", &arr[i]);
//	qsort(arr, n, 4, cmp);
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ�
//��˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã���
//��KiKi����������Ǯ����

//����������һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ�
//���ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ����

//���������һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
//#include<stdio.h>
//int main()
//{
//	double price = 0;
//	int yue = 0;
//	int ri = 0;
//	int you = 0;
//	double num = 0;
//	scanf("%lf%d%d%d", &price, &yue, &ri, &you);
//	if ((yue == 11) && (ri == 11))
//		num = 0.7;
//	if ((yue == 12) && (ri == 12))
//     	num = 0.8;
//	price = price*num - you*50.0;
//	if (price < 0)
//		price = 0.00;
//	printf("%.2f\n", price);
//	return 0;
//}
