//#include<stdio.h>
//int main()
//{
//	/*
//		解题关键：
//			从左边的第一个问号开始往后找冒号
//			如果过程当中，遇到了其他问号，那么找冒号的数量加1
//
//	*/
//
//	//练习1：
//	int w = 4, x = 3, y = 2, z = 1;
//	int number = w < x ? w : z < y ? z : x;
//	printf("%d\n", number);
//
//	//练习2：
//	int a = 3, b = 2, c = 1;
//	int max = a > b ? a > c ? a : c : b > c ? b : c;
//	printf("max = %d\n", max);
//
//	//练习3：
//	int x1 = 10;
//	int y1 = 20;
//	int z1 = 30;
//	int h1 = 40;
//	int w1 = 50;
//	int number1 = x1 > h1 ? z1 > w1 ? x1 > z1 ? x1 > y1 ? x1 : y1 : z1 : w1 : w1 > h1 ? w1 : h1;
//	printf("%d\n", number1);
//
//	return 0;
//}