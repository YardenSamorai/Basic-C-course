#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	//Q1
	printf("Hello Adi");

	//Q2
	double PI = 3.141592;
	printf("%.2f",PI);

	
	printf("   *\n  ***\n *****\n");

	//Q4
	int a, b;
	printf("please enter num1:\n");
	scanf("%d", &a);
	printf("please enter num2:\n");
	scanf("%d", &b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d % %d = %d", a, b, a % b);

	//Q5
	int a, b, c;
	printf("please enter num1:\n");
	scanf("%d", &a);
	printf("Please enter num2: \n");
	scanf("%d", &b);
	printf("a=%d, b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("after swapping values : a=%d, b=%d", a,b);

	//Q1 homelab

	int currentyear = 2021, sum;
	int age = 22;
	sum = currentyear - age;
	printf("The year of birth:%d\n", sum);

	//Q2
	printf("*               *\n");
	printf(" *             *\n");
	printf("  *           *\n");
	printf("   *         *\n");
	printf("    *       *\n");
	printf("     *     *\n");
	printf("      *   *\n");
	printf("       * *\n");
	printf("      *   *\n");
	printf("     *     *\n");
	printf("    *       *\n");
	printf("   *         *\n");

	

	long ID;
	double hoursalary;
	int sumhours;
	int daysperweek;
	int currentyear;
	int beginningofwork;

	printf("please enter your ID:");
	scanf("%ld", &ID);
	printf("please enter your hoursalary");
	scanf("%ld", &hoursalary);
	printf("please enter your sumhours");
	scanf("%ld", &daysperweek);
	print("please enter your currentlyyear");
	scanf("%ld", &currentyear);
	printf("please enter your beginningofwork");
	scanf("%ld", &beginningofwork);
























}
