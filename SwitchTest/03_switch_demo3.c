//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	/*
//		case穿透到规则：
//			1.根据小括号中表达式的结果去匹配对应的case
//			2.执行对应case里面的代码
//			3.如果在执行的过程中，遇到了break,那么直接结束整个switch
//			  但是如果没有遇到break，就会继续执行下面case中的代码，
//			  直到遇到break，或者把整个switch中所有的代码全部执行完了，才会结束
//			4.细节：case穿透只会往下穿，不会回到上面
//	*/
//	//1.定义变量
//	int number = 1;
//	//2.利用switch语句进行匹配
//	switch (number) 
//	{
//		case 1:
//			printf("当前的数字是1\n");
//			break;
//		case 2:
//			printf("当前的数字是2\n");
//			break;
//		default:
//			printf("当前的数字是其他\n");
//			break;
//
//
//	}
//
//	/*
//		需求：键盘录入月份数，输入输出对应的季节。
//		春季：3、4、5月份
//		夏季：6、7、8月份
//		秋季：9、10、11月份
//		冬季：12月份到次年的2月份
//	
//	*/
//	//1.键盘录入月份数
//	int month;
//	printf("请输入对应的月份:\n");
//	scanf("%d", &month);
//	printf("%d\n", month);
//	//2.根据月份输出对应的季节
//	switch (month)
//	{
//	case 1:
//		printf("冬季\n");
//		break;
//	case 2:
//		printf("冬季\n");
//		break;
//	case 3:
//		printf("春季\n");
//		break;
//	case 4:
//		printf("春季\n");
//		break;
//	case 5:
//		printf("春季\n");
//		break;
//	case 6:
//		printf("夏季\n");
//		break;
//	case 7:
//		printf("夏季\n");
//		break;
//	case 8:
//		printf("夏季\n");
//		break;
//	case 9:
//		printf("秋季\n");
//		break;
//	case 10:
//		printf("秋季\n");
//		break;
//	case 11:
//		printf("秋季\n");
//		break;
//	case 12:
//		printf("冬季\n");
//		break;
//	}
//
//
//
//}