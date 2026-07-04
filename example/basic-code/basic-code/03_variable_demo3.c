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
//	// 2.利用sizeof测量每一种数据类型占用多少字节？
//	// sizeof (变量名/数据类型）
//	// short
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(a));
//
//	// int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//
//	// long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//
//	// long long
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(d));
//
//	return 0;
//}