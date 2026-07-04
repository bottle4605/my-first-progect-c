//#include<stdio.h>
//#include<math.h>
//#include<time.h>
//
//int main()
//{
//	/*
//		math.h:
//			pow()	幂
//			sqrt()	平方根
//			ceil()	向上取整
//			floor()	向下取整
//			abs()	绝对值
//
//		time.h:
//			time()	获取当前时间
//		形参：表示获取到当前时间是否需要在其他地方进行存储
//			一般来讲，不需要在其他地方进行存储的，NULL（大写）
//		返回值：long long
//	*/
//
//	//1.pow	幂
//	double res1 = pow(2, 3);
//	printf("%lf\n", res1);
//
//	//2.sqrt()	平方根
//	double res2 = sqrt(9);
//	printf("%lf\n", res2);
//
//	//3.cell()	向上取整（进一法）
//	double res3 = ceil(12.9);
//	printf("%lf\n", res3);
//
//	//4.floor()	向下取整（去尾法）
//	double res4 = floor(12.7);
//	printf("%lf\n", res4);
//
//	//5.abs()	绝对值
//	int res5 = abs(-13);
//	printf("%d\n", res5);
//
//	long long res = time(NULL);
//	printf("%lld\n", res);
//
//	return 0;
//}