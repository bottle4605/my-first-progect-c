//#include<stdio.h>
//
//int main()
//{
//	/*
//		练习：
//			利用代码拷贝文件
//		要求：
//			把ChatGPT.pptx拷贝到aaa文件夹中
//		纯文本文件：r w a
//			windows里面的记事本能打开并且能读懂，就是纯文本文件
//			txt md lrc
//		二进制文件：rb wb ab
//			b:binary
//	*/
//
//	//1.打开ChatGPT.pptx文件（数据源）
//	FILE* file1 = fopen("F:\\Downloads\\ChatGPT.pptx", "rb");
//	//2.打开copy.pptx（目的地）
//	FILE* file2 = fopen("F:\\123\\aaa\\ChatGPT.pptx", "wb");
//
//	//3.利用循环读取数据源吗，读完之后，再写到目的地
//	char arr[1024];
//	int n;
//	while ((n = fread(arr, 1, 1024, file1)) != 0)
//	{
//		//就要把读取到的数据，再写到目的地文件中
//		fwrite(arr, 1, n, file2);
//	}
//
//	//4.关闭文件
//	fclose(file1);
//	fclose(file2);
//
//	return 0;
//}