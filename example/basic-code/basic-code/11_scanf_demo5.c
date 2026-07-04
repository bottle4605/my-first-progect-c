#include<stdio.h>
int main()
{
	//键盘录入三个小数，分别表示长方形的长，宽，高
	//分别求：A面，B面，C面的面积以及长方体的体积，结果保留两位小数

	//1.定义变量表示长，宽，高
	double length;
	double width;
	double heigth;
	//2.键盘录入三个小数，分别给长，宽，高赋值
	printf("请输入三个小数，分别表示长，宽，高");
	scanf("%lf %lf %lf", &length, &width, &heigth);
	//3.求A面，B面，C面的面积
	double areaA = length * width;
	double areaB = heigth * width;
	double areaC = length * heigth;
	//4.输出打印
	printf("A面的面积为：%.2lf", areaA);
	printf("B面的面积为：%.2lf", areaB);
	printf("C面的面积为：%.2lf", areaC);
	//5.求长方体的体积
	double bulk = length * width * heigth;
	printf("长方体的体积为：%.2lf\n", bulk);

}