 #define _CRT_SECURE_NO_WARNINGS  1
//#include<stdio.h>
//#include<math.h>
//int shu(int x, int a)
//{
//	int i, t;
//	double s;
//	s = 0, t = 1;
//	for (i = 1; i <= x; i++)
//	{
//		s += a * t;
//		t = t * 10;
//	}
//	return s;
//}
//int main()
//{
//	int a, n, i;
//	double dif = 0;
//	scanf("%d %d", &a, &n);
//	for (i = n; i > 0; i--)
//	{
//		if (i == n)
//			dif = shu(i, a);
//		else
//		{
//			dif = -shu(i, a);
//		}
//		printf("%lf", dif);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 5, b = 3, t;
//	int& ra = a;
//	int& rb = b;
//	t = ra;
//	ra = rb;
//	rb = t;
//	return 0;
//}
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];//指针数组
//	char* ch[5];
//	//数组指针 - 指向数组
//	//int* p3;//整形指针 - 指向整形的指针
//	//char* p4;//字符指针 - 指向字符的指针
//	int arr2[5];
//	int (*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	int(*parr3[10])[5];
//	return 0;
//}
//void test(int arr[3][5])
//{
//
//}
//void test1(int arr[][5])
//{}
//void test3(int arr[][])//err
//{}
//int main()
//{
//	int arr[3][5];
//	test(arr);//二维数组传参
//	test1(arr);
//	test2(arr);
//	return 0;
//}
//void test3(int *arr)//err
//{}
//void test4(int **arr)//err
//{}
//void test5(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}
//void test1(int* p)
//{
//
//}
//void test2(char* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//void test(int** p)
//{
//
//}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];//
//	test(arr);//指针数组也可以
//	return 0;
//}
//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//printf("%d\n", Add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//int main()
//{
//	int arr[101];
//	
//	for (int i = 1; i <= 100; i++)
//	{
//		arr[i] = i;
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}
//#include<stdio.h>
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hellobit");
//	return 0;
//}
//void(*signal(int, void(*)(int)))(int);
//signal是一个函数声明
//signal函数的参数2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型是一个函数指针：该函数指向的函数的参数是int,返回类型是void
//简化
//typeof void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//函数指针数组
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放四个函数的地址 - 函数指针的数组
//	int (*pa)(int,int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));// 5 -1 6 0
//	}
//	return 0;
//}
char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组，能够存放4个mt_strcpy函数的地址

//1.char* (*pf(char*,const char*))
//2.char* (*pfArr[4])(char*,const char*))