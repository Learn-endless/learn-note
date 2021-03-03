#define _CRT_SECURE_NO_WARNINGS 1
//P1-P7
#include<stdio.h>
#include<string.h>
#define MAX 10
#define ADD(x,y) ((x)+(y))   //（（x）+（y））替换成ADD（x，y）
int mm = 10;
enum COLOR                   //创建枚举类型的常量 COLOR 。内容包含 red，blue，yellow。
{
	red,
	blue,
	yellow
};
int add(int x, int y)  //函数的调用。
{
	int z = x + y;
	return z;
}
struct book           // 创建结构体的类型，为book；内容为 name ，price。
{
	char name[20];    // name为一个长度不超过20的字符串。
	int price;        // price为一个整数。
};
int main()
{
	struct book n1 = { "C语言程序设计", 55 };  // 创建一个 struct book 类型的变量 n1 ，并赋初始值。
	struct book* pb = &n1;        //创建一个存储 n1 地址的指针变量 pb。
	printf("%s\n", n1.name);      //以字符串形式打印 n1 的 name。
	printf("%d\n", n1.price);     //以十进制数的形式打印 n1 的 price。 打印方式：结构体变量.成员。
	printf("%s\n", (*pb).name);   //以字符串形式打印 n1 的 name。
	printf("%d\n", (*pb).price);  //以十进制数的形式打印 n1 的 price。 打印方式：*pb指向n1。
	printf("%s\n", pb->name);     //以字符串形式打印 n1 的 name。
	printf("%d\n", pb->price);    //以十进制数的形式打印 n1 的 price。 打印方式：结构体指针->成员。
	n1.price = 10;            //改变 n1 里 price 的值。
	strcpy(n1.name, "C++");   //改变 n1 里 name 的值，这里需要用到字符串拷贝函数 strcpy（）并需要包含头文件#include<string.h>.
	printf("%s\n", n1.name);  //重新打印 n1 里的值。
	printf("%d\n", n1.price); 


	//int a = 10;
	//printf("%p\n", &a);  // 打印 a 想计算机申请的空间地址。 %p--地址打印符。
	//printf("%d\n", a);   // 打印 a 的存储内容
	//int* dp = &a;        // 把 a 的地址存到指针变量 dp 里。 int* 指针变量
	//*dp = 20;            // 把20赋值给 dp 里地址的空间。    *解引用操作符
	//printf("%p\n", dp);  // 把 dp 里存储的地址用地址的形式打印。
	//printf("%d\n", a);   // 再次打印变量 a 里的内容。

	 
	//int num =ADD(8, 2);         //   #define定义宏函数ADD().
	//printf("%d\n", num);        
	                              
	                              
	//typedef unsigned int u_int; //  typedef 类型重定义:把 unsigned int 定义为 u_int。
	//u_int a = 10;


	//int num = add(1, 2);        //调用函数add();该函数定义在main（）前面。
	//printf("%d\n", num);  


	//int a = 0;
	//int b = ~a;            //00000000000000000000000000000000    0的二进制码
	//printf("%d\n", b);     //11111111111111111111111111111111    ~取反
	                         //11111111111111111111111111111110    补码-1
	                         //10000000000000000000000000000001    除符号位外取反。值为-1。                      
	//int a = 10;
	//int b = 20;
	//int num = a > b ? a : b;  // 三目操作符： a>b为真时，num=a；a>b为假时，num=b。
	//printf("%d\n", num);


	//enum COLOR a = blue;     // enum为定义枚举常量，该常量的内容在main（）上面。
	//a = red;
	//printf("%d\n", a);


	//char arr[] = "haha";                      //“haha”里面有一个隐藏的‘\0’结束字符。
	//char arr1[] = { 'h', 'a', 'h', 'a','\0' };// \0 的ASCII码为0，为数组的结束字符。
	//printf("%d\n", strlen(arr));              //strlen()计算字符串的长度。
	//printf("%d\n", strlen(arr1));


	//float weight = 95.6f;      //f:把double类型的数转换成float类型的数
	//double height = 95.6;
	//printf("%f\n", weight);
	//printf("%lf\n", height);


	//int arr[MAX] = { 0 };     // MAX为标识符常量
	//printf("%d\n", MAX);

	return 0;

}