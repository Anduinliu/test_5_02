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
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];//ָ������
//	char* ch[5];
//	//����ָ�� - ָ������
//	//int* p3;//����ָ�� - ָ�����ε�ָ��
//	//char* p4;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
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
//	test(arr);//��ά���鴫��
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
//	test(arr);//ָ������Ҳ����
//	return 0;
//}
//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
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
//signal��һ����������
//signal�����Ĳ���2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ���������һ������ָ�룺�ú���ָ��ĺ����Ĳ�����int,����������void
//��
//typeof void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//����ָ������
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
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
//	int (*pa)(int,int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));// 5 -1 6 0
//	}
//	return 0;
//}
char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ�����飬�ܹ����4��mt_strcpy�����ĵ�ַ

//1.char* (*pf(char*,const char*))
//2.char* (*pfArr[4])(char*,const char*))