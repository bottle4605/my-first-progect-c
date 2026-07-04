//#include<stdio.h>
//int main()
//{
//	// 1.定义short、int、long、long long四种数据类型的变量
//	// 格式：数据类型 变量名 = 数据值；
//
//	// short 短整型 windows 2个字节 （-32768 ~ 32767）
//	short a = 10;
//	printf("%d\n", a);
//
//	// int 整数 windows 4个字节（-2147483648 ~ 2147483647）
//	int b = 100;
//	printf("%d\n", b);
//
//	// long 长整型 windows 4个字节（-2147483648 ~ 2147483647）
//	//            Linux 32位 4个字节  64位字节 8位
//	long c = 1000L;
//	printf("%ld\n", c);
//
//	// long long(C99) 超长整型 windows 8个字节 （19位数）
//	long long d = 1000LL;
//	printf("%lld\n", d);
//
//	// 2.有符号整数、无符号整数的定义情况
//	//signed有符号整数  正数  负数
//	//unsigned无符号整数  正数
//	signed int e = -100;
//	printf("%d\n", e);
//
//	//定义一个变量表示序号
//	//short:-32768~32767
//	//unsigned short:0~65535
//	unsigned short num1 = 65535;
//	printf("%u\n", num1);
//
//	unsigned int f = 20;
//	printf("%u\n", f);
//
//	return 0;
//}