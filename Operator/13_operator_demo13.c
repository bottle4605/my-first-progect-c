//#include<stdio.h>
//
//int main()
//{
//	/*
//		解题关键：
//			从左边的第一个问号开始往后找冒号
//			如果过程当中，遇到了其他问号，那么找冒号的数量加1
//
//		a > b ? (a) : (b);
//	*/
//
//	//练习1
//	int w = 4, x = 3, y = 2, z = 1;
//	int number = w < x ? w : z < y ? z : x;
//	printf("%d\n", number);
//
//	//练习2
//	int a = 3, b = 2, c = 1;
//	int max = a > b ? a > c ? a : c : b > c ? b : c;
//	printf("max = %d\n", max);
//
//	//练习3
//	int x2 = 10;
//	int y2 = 20;
//	int z2 = 30;
//	int h2 = 40;
//	int w2 = 50;
//	int number = x2 > h2 ? (z2 > w2 ? (x2 > z2 ? (x2 > y2 ? x2 : y2) : z2) : w2) : (w2 > h2 ? w2 : h2);
//
//	return 0;
//}