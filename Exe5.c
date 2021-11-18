#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Square(double num);
double Cube(double num);
double Power(double num, int base);
int isEven(int num);
int isOdd(int num);
void Ofek(int digit);
char myToLower(char latter);
int Calculitor(int num1, int num2, char op);


void main()
{
	char op;
	int num1, num2;

	printf("please enter a num1: \n");
	scanf("%d", &num1);
	printf("please enter a num2: \n");
	scanf("%d", &num2);
	printf("please enter a op: ");
	scanf(" %c", &op);

	printf("%d", Calculitor(num1, num2, op));
}
// // Q1
//double Square(double num)
//{
//
//	double sum = 0;
//	sum = num * num;
//	return sum;
//}
//
//double Cube(double num)
//{
//	int sum = 1 , i;
//	for (i = 0; i < 3; i++)
//	{
//		sum *= num;
//	}
//	return sum;
//}
//double Power(double num, int base)
//{
//	double sum = 1;
//	int i;
//	for (i = 0; i < base; i++)
//	{
//		
//		sum *= num;
//	}
//	return sum;
//}
 // Q2
//int isEven(int num)
//{
//	if (num % 2 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int isOdd(int num)
//{
//	if (isEven(num) == 1)
//	{
//		return 0;
//	}
//	else
//		return 1;
//
//}
// Q3
//void Ofek(int digit) 
//{
//	long sum = 0, i = 0, n1 = sum % 10, counter = 0;
//	
//	sum = 1 * Power(10, digit - 1); 
//	for (i = 0; i < digit; i++)
//	{
//		if (sum % 10 == 0)
//		{
//			counter++;
//		}
//		sum /= 10;
//	}
//	for (i = 0; i < counter+1; i++)
//	{
//		printf("1");
//	}
// 
//Q4	
//char myToLower(char latter)
//{
//	if (latter >= 65 && latter <= 90)
//	{
//		latter = latter + 'a' - 'A';
//		return latter;
//	}
//	else
//		return -1;
//}
	
int Calculitor(int num1, int num2, char op)
{
	int sum = 0;
	if (op == '+')
	{
		sum = num1 + num2;
		return sum;
	}
	else if (op == '-')
	{
		sum = num1 - num2;
		return sum;
	}
	else if (op == '*')
	{
		sum = num1 * num2;
		return sum;
	}
	else if (op == '/')
	{
		if (num2 == 0)
		{
			return printf("Eror , cant divide by 0");
		}
		else
		{
			sum = num1 / num2;
			return sum;
		}	
	}
	else if (op == '%')
	{
		if (num2 == 0)
		{
			return printf("Eror , cant divide by 0");
		}
		else
		{
			sum = num1 % num2;
			return sum;
		}		
	}
	else
		return 0;
}