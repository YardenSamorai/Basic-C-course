#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	////Q1
	////234 = 9
	//int number;
	//int n1, n2, n3, sum = 0;

	//printf("Please enter a number: \n");
	//scanf("%d", &number);
	//if (number > 99)
	//{
	//	n1 = number % 10; // 4
	//	n2 = number / 10 % 10; // 3
	//	n3 = number / 100; //2
	//	
	//	//calcultaion//
	//	sum = n1 + n2 + n3; // 9
	//	printf("the sum of the number is : %d \n", sum);
	//}
	//Q4
	//double matala1, matala2, matala3, exam, finalmatala, final1, final2;
	//
	//printf("Please enter your grade: ");
	//scanf("%lf", &matala1);
	//printf("Please enter your second matla2 grade: \n");
	//scanf("%lf", &matala2);
	//printf("Please enter your thierd matala3 grade: \n");
	//scanf("%lf", &matala3);
	//printf("please enter your exam grade \n");
	//scanf("%lf", &exam);

	//finalmatala = (matala1 + matala2 + matala3) * 0.20;
	//final1 = exam * 0.80;
	//final2 = final1 + finalmatala;

	//printf("your final grade is : %lf" ,final2);


	//Q5

	double number, x2, x4, x6, x8;

	printf("Enter number please : \n");
	scanf("%lf", &number);
	x2 = pow(number, 2);
	x4 = pow(number, 4);
	x6 = pow(number, 6);
	x8 = pow(number, 8);
	printf("The pow of number is: %.2f , %.2f , %.2f , %.2f", x2, x4, x6, x8);


}