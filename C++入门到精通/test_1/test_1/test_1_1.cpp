#define _CRT_SECURE_NO_WARNINGS 1
//P1-P7
#include<stdio.h>
#include<string.h>
#define MAX 10
#define ADD(x,y) ((x)+(y))   //����x��+��y�����滻��ADD��x��y��
int mm = 10;
enum COLOR                   //����ö�����͵ĳ��� COLOR �����ݰ��� red��blue��yellow��
{
	red,
	blue,
	yellow
};
int add(int x, int y)  //�����ĵ��á�
{
	int z = x + y;
	return z;
}
struct book           // �����ṹ������ͣ�Ϊbook������Ϊ name ��price��
{
	char name[20];    // nameΪһ�����Ȳ�����20���ַ�����
	int price;        // priceΪһ��������
};
int main()
{
	struct book n1 = { "C���Գ������", 55 };  // ����һ�� struct book ���͵ı��� n1 ��������ʼֵ��
	struct book* pb = &n1;        //����һ���洢 n1 ��ַ��ָ����� pb��
	printf("%s\n", n1.name);      //���ַ�����ʽ��ӡ n1 �� name��
	printf("%d\n", n1.price);     //��ʮ����������ʽ��ӡ n1 �� price�� ��ӡ��ʽ���ṹ�����.��Ա��
	printf("%s\n", (*pb).name);   //���ַ�����ʽ��ӡ n1 �� name��
	printf("%d\n", (*pb).price);  //��ʮ����������ʽ��ӡ n1 �� price�� ��ӡ��ʽ��*pbָ��n1��
	printf("%s\n", pb->name);     //���ַ�����ʽ��ӡ n1 �� name��
	printf("%d\n", pb->price);    //��ʮ����������ʽ��ӡ n1 �� price�� ��ӡ��ʽ���ṹ��ָ��->��Ա��
	n1.price = 10;            //�ı� n1 �� price ��ֵ��
	strcpy(n1.name, "C++");   //�ı� n1 �� name ��ֵ��������Ҫ�õ��ַ����������� strcpy��������Ҫ����ͷ�ļ�#include<string.h>.
	printf("%s\n", n1.name);  //���´�ӡ n1 ���ֵ��
	printf("%d\n", n1.price); 


	//int a = 10;
	//printf("%p\n", &a);  // ��ӡ a ����������Ŀռ��ַ�� %p--��ַ��ӡ����
	//printf("%d\n", a);   // ��ӡ a �Ĵ洢����
	//int* dp = &a;        // �� a �ĵ�ַ�浽ָ����� dp � int* ָ�����
	//*dp = 20;            // ��20��ֵ�� dp ���ַ�Ŀռ䡣    *�����ò�����
	//printf("%p\n", dp);  // �� dp ��洢�ĵ�ַ�õ�ַ����ʽ��ӡ��
	//printf("%d\n", a);   // �ٴδ�ӡ���� a ������ݡ�

	 
	//int num =ADD(8, 2);         //   #define����꺯��ADD().
	//printf("%d\n", num);        
	                              
	                              
	//typedef unsigned int u_int; //  typedef �����ض���:�� unsigned int ����Ϊ u_int��
	//u_int a = 10;


	//int num = add(1, 2);        //���ú���add();�ú���������main����ǰ�档
	//printf("%d\n", num);  


	//int a = 0;
	//int b = ~a;            //00000000000000000000000000000000    0�Ķ�������
	//printf("%d\n", b);     //11111111111111111111111111111111    ~ȡ��
	                         //11111111111111111111111111111110    ����-1
	                         //10000000000000000000000000000001    ������λ��ȡ����ֵΪ-1��                      
	//int a = 10;
	//int b = 20;
	//int num = a > b ? a : b;  // ��Ŀ�������� a>bΪ��ʱ��num=a��a>bΪ��ʱ��num=b��
	//printf("%d\n", num);


	//enum COLOR a = blue;     // enumΪ����ö�ٳ������ó�����������main�������档
	//a = red;
	//printf("%d\n", a);


	//char arr[] = "haha";                      //��haha��������һ�����صġ�\0�������ַ���
	//char arr1[] = { 'h', 'a', 'h', 'a','\0' };// \0 ��ASCII��Ϊ0��Ϊ����Ľ����ַ���
	//printf("%d\n", strlen(arr));              //strlen()�����ַ����ĳ��ȡ�
	//printf("%d\n", strlen(arr1));


	//float weight = 95.6f;      //f:��double���͵���ת����float���͵���
	//double height = 95.6;
	//printf("%f\n", weight);
	//printf("%lf\n", height);


	//int arr[MAX] = { 0 };     // MAXΪ��ʶ������
	//printf("%d\n", MAX);

	return 0;

}