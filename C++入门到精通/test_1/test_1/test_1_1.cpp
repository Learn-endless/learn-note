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
	struct book n1 = { "C语言程序设计", 55 };
	struct book* pb = &n1;
	printf("%s\n", n1.name); 
	printf("%d\n", n1.price);     //结构体变量.成员。
	printf("%s\n", (*pb).name);    
	printf("%d\n", (*pb).price);  // *pb指向b1。
	printf("%s\n", pb->name);     
	printf("%d\n", pb->price);    //结构体指针->成员。

	n1.price = 10;            //改变b1的价格。
	strcpy(n1.name, "C++");   //字符串拷贝函数。改变名字。需要包含头文件#include<string.h>.
	printf("%s\n", n1.name);
	printf("%d\n", n1.price);


	//int a = 10;
	//printf("%p\n", &a);  // %p--取地址打印符
	//printf("%d\n", a);   
	//int* dp = &a;        // int* 指针变量
	//*dp = 20;            // *解引用操作符
	//printf("%p\n", dp);
	//printf("%d\n", a);


	//int num =ADD(8, 2);     //   #define定义宏函数ADD().
	//printf("%d\n", num);


	//typedef unsigned int u_int; //  typedef 类型重定义
	//u_int a = 10;


	//int num = add(1, 2);  //调用函数add();
	//printf("%d\n", num);


	//int a = 0;
	//int b = ~a;            //00000000000000000000000000000000    0的二进制码
	//printf("%d\n", b);     //11111111111111111111111111111111    ~取反
	                        //11111111111111111111111111111110    补码-1
	                       //10000000000000000000000000000001    除符号位外取反。值为-1。                      
	//int a = 10;
	//int b = 20;
	//int num = a > b ? a : b;  //  a>b为真时，num=a；a>b为假时，num=b。
	//printf("%d\n", num);


	//enum COLOR a = blue;
	//a = red;
	//printf("%d\n", a);


	//char arr[] = "haha";       //“haha”里面有一个隐藏的‘\0’结束字符。
	//char arr1[] = { 'h', 'a', 'h', 'a','\0' };// \0 的ASCII码为0，为数组的结束字符。
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr1));


	//float weight = 95.6f;     //f：float类型的数
	//printf("%f\n", weight);


	//int arr[MAX] = { 0 };
	//printf("%d\n", MAX);

	return 0;

}