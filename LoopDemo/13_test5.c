//#include <stdio.h>
///*
//    判断一个整数是否为回文数
//    回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//    例如：121是回文，而123不是。
//*/
//
//// 函数声明
//int reverseInteger(int num);
//
//// 主函数
//int main() {
//    int number;
//
//    printf("请输入一个整数：");
//    scanf("%d", &number);
//
//    if (reverseInteger(number) == number)
//        printf("%d 是回文数。\n", number);
//    else
//        printf("%d 不是回文数。\n", number);
//
//    return 0;
//}
//
//// 判断并返回反转后的整数值
//int reverseInteger(int num) {
//    int reversed = 0, originalNum = num;
//
//    while (num != 0) {
//        int digit = num % 10; // 取出最后一位数字
//        reversed = reversed * 10 + digit;
//        num /= 10; // 移除最后一位数字
//    }
//
//    return reversed;
//}