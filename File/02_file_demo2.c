//#include<stdio.h>
//
//int main()
//{
//	/*
//		打开文件：fopen
//		写出数据：fgetc 一次读一个字符，读不到返回-1
//				 fgets 一次读一行，读不到返回null
//				 fread 一次读多个
//		关闭文件：fclose
//	*/
//
//	//1.打开文件：fopen
//	FILE* file = fopen("F:\\123\\aaa\\a.txt", "r");
//
//	//2.读取数据		一次读一个字符
//	//fgetc细节：一次读一个字符
//	//			如果读到了，就返回读取读取到的字符
//	//			读不到返回-1
//
//	/*int c = fgetc(file);
//	printf("%c", c);
//
//	c = fgetc(file);
//	printf("%c", c);
//
//	c = fgetc(file);
//	printf("%c", c);
//
//	c = fgetc(file);
//	printf("%d", c);*/
//
//	int c;
//	while ((c = fgetc(file)) != -1)
//	{
//		printf("%c", c);
//	}
//
//	//3.关闭文件
//	fclose(file);
//
//	return 0;
//}