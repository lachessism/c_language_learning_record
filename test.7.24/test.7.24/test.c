#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//define 定义标识符常量
//#define NUM 100
//

//#define 定义宏
//宏是有参数
//#define ADD(x,y) ((x)+(y))
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
	/*printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };*/
	
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}





//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	&a;//取地址操作符
//	printf("%p\n", &a);
//	int* p = &a;
	//p就是指针变量
	//*p = 20;//解引用操作符，通过p中存放的地址，找到p所指的对象，*p就是p所指的对象

	//printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;

//	return 0;
//}





//int main()
//{
	//不管是什么类型的指针，都是在创建指针变量
	// 指针变量是用来存放地址的
	// 指针变量的大小取决于一个地址存放的时候需要多大空间
	// 32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
	// 64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
	//printf("zu\n", sizeof(char*));
	//printf("zu\n", sizeof(short*));
	//printf("zu\n", sizeof(int* ));
	//printf("zu\n", sizeof(float*));
	//printf("zu\n", sizeof(double*));

//	return 0;
//}