#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 10
#define ADD(x,y) ((x)+(y))
int mm = 10;
enum COLOR
{
	red,
	blue,
	yellow
};
int add(int x, int y)
{
	int z = x + y;
	return z;
}
struct book
{
	char name[20];
	int price;
};
int main()
{
	struct book n1 = { "C���Գ������", 55 };
	struct book* pb = &n1;
	printf("%s\n", n1.name); 
	printf("%d\n", n1.price);     //�ṹ�����.��Ա��
	printf("%s\n", (*pb).name);    
	printf("%d\n", (*pb).price);  // *pbָ��b1��
	printf("%s\n", pb->name);     
	printf("%d\n", pb->price);    //�ṹ��ָ��->��Ա��

	n1.price = 10;            //�ı�b1�ļ۸�
	strcpy(n1.name, "C++");   //�ַ��������������ı����֡���Ҫ����ͷ�ļ�#include<string.h>.
	printf("%s\n", n1.name);
	printf("%d\n", n1.price);


	//int a = 10;
	//printf("%p\n", &a);  // %p--ȡ��ַ��ӡ��
	//printf("%d\n", a);   
	//int* dp = &a;        // int* ָ�����
	//*dp = 20;            // *�����ò�����
	//printf("%p\n", dp);
	//printf("%d\n", a);


	//int num =ADD(8, 2);     //   #define����꺯��ADD().
	//printf("%d\n", num);


	//typedef unsigned int u_int; //  typedef �����ض���
	//u_int a = 10;


	//int num = add(1, 2);  //���ú���add();
	//printf("%d\n", num);


	//int a = 0;
	//int b = ~a;            //00000000000000000000000000000000    0�Ķ�������
	//printf("%d\n", b);     //11111111111111111111111111111111    ~ȡ��
	                        //11111111111111111111111111111110    ����-1
	                       //10000000000000000000000000000001    ������λ��ȡ����ֵΪ-1��                      
	//int a = 10;
	//int b = 20;
	//int num = a > b ? a : b;  //  a>bΪ��ʱ��num=a��a>bΪ��ʱ��num=b��
	//printf("%d\n", num);


	//enum COLOR a = blue;
	//a = red;
	//printf("%d\n", a);


	//char arr[] = "haha";       //��haha��������һ�����صġ�\0�������ַ���
	//char arr1[] = { 'h', 'a', 'h', 'a','\0' };// \0 ��ASCII��Ϊ0��Ϊ����Ľ����ַ���
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr1));


	//float weight = 95.6f;     //f��float���͵���
	//printf("%f\n", weight);


	//int arr[MAX] = { 0 };
	//printf("%d\n", MAX);

	return 0;

}