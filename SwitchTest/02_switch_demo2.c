//#include<stdio.h>
//int main()
//{
//	/*
//		格式细节说明：
//			表达式：计算结果只能为（字符/整数）
//			case：值只能是（字符/整数）的字面量，不能是变量
//			case：值不允许重复
//			break：表示中断，结束的意思，结束switch语句
//			default：所有情况都不匹配，执行该处的内容
//					default可以写在任意位置，甚至可以省略不写
//		使用细节：
//			switch和if第三种格式各自的使用场景
//
//		switch:有限个case进行匹配的情况，10个左右
//		if：一般是对一个范围进行判断
//
//		小明的考试成绩：
//		0~100   if第三种方式
//		switch: 100个case
//
//   
//	*/
//	//1.定义变量
//	int number = 1;
//	//2.利用switch语句进行匹配
//	switch (number)
//	{
//	case 1:
//		printf("当前的数字是1\n");
//		break;
//	case 2:
//		printf("当前的数字是2\n");
//		break;
//	default:
//		printf("当前的数字是其他\n");
//		break;
//	}
//	printf("看看我执行了吗?\n");
//
//	//1.定义变量
//	int number1 = 2;
//	//2.利用switch语句进行匹配
//	if (number1 == 1)
//	{
//		printf("当前的数字是1");
//	}
//	else if (number1 == 2)
//	{
//		printf("当前的数字是2");
//	}
//	else
//	{
//		printf("当前的数字是其他");
//	}
//	return 0;
//}