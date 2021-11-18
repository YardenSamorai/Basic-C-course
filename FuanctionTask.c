#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	//Q2
	//int sidra1, sidra2, counter = 0;
	//int n, i=1;
	//printf("Please enter a number for n: \n");
	//scanf("%d", &n);
	//printf("Please enter the first number: \n");
	//scanf("%d", &sidra1);

	//do
	//{
	//	printf("please enter the second number: \n");
	//	scanf("%d", &sidra2);

	//	if (sidra1 < sidra2) //1 < 
	//	{

	//		sidra1 = sidra2;
	//		counter++;
	//	}
	//	else
	//	{
	//		printf("Not very ascending");
	//		break;
	//	}
	//	i++;
	//	
	//} while (i < n);
	//if (i == n)
	//{
	//	printf("Very ascending");
	//}
	
	//Q3
	//int n, i, SumEven = 0, SumOdd = 0, n1;
	//printf("Please enter a number: \n");
	//scanf("%d", &n);
	//// n = 56879 / n1 = 
	//while (n > 0)
	//{
	//	n1 = n % 10;
	//	if (n1 % 2 == 0)
	//	{
	//		SumEven += n1;
	//	}
	//	else
	//	{
	//		SumOdd += n1;
	//	}
	//	n = n / 10;
	//}
	//printf("the sum is : %d \n", SumEven - SumOdd);



	//Q4
	//int Integer = 0, counter = 0, x;
	//double TheNumber = 0;
	//do
	//{
	//	printf("Please enter 0 / 1 please: \n");
	//	scanf("%d", &Integer);
	//	if (Integer == 1 || Integer == 0)
	//	{
	//	TheNumber += Integer * (pow(2, counter));
	//	}
	//	counter++;

	//} while (Integer == 1 || Integer == 0);

	//printf("%lf", TheNumber);
	
	//Q5
	//int n, i;
	//printf("Please enter number : \n");
	//scanf("%d", &n);

	//for (i = 1; i <= n; i++)
	//{
	//	if (i % 15 == 0)
	//	{
	//		printf("FIZZBUZZ \n");
	//	}
	//	else if (i % 3 == 0)
	//	{
	//		printf("FIZZ \n");
	//	}
	//	else if (i % 5 == 0)
	//	{
	//		printf("BUZZ \n");
	//	}
	//	else
	//		printf("%d\n", i);
	//}


	//Q6
	//int i ;
	//double x;

	//printf("Please enter X: \n");
	//scanf("%lf", &x);

	//for (i = 0; i <= 999; i+=25)
	//{
	//	if (x >= i && x < i + 25)
	//	{
	//		printf("%.2f is  - [%d , %d] ", x, i, i + 25);
	//	}
	//} 
	
	//Q3
	int number, NIS20 = 0, NIS10 = 0, NIS5 = 0, NIS2 = 0, NIS1 = 0;
	printf("Please enter a number : \n");
	scanf("%d", &number);
	//113
	while (number > 0)
	{
		NIS20 = number / 20;
		number = number % 20;
		NIS10 = number / 10;
		number = number % 10;
		NIS5 = number / 5;
		number = number % 5;
		NIS2 = number / 2;
		number = number % 2;
		NIS1 = number / 1;
	}
	printf("NIS20 : %d \n NIS10 : %d \n NIS 5 : %d \n NIS2 : %d \n NIS1 : %d", NIS20, NIS10, NIS5, NIS2, NIS1);
}