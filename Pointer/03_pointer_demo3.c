//#include<stdio.h>
//
//int* method();
//int main()
//{
//	//调用method函数，并使用该函数中的变量a
//	int* p = method();
//
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//int* method()
//{
//	static int a = 10;//此时变量一直保存到程序结束
//	return &a;
//}