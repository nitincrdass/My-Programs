//prog to calc the salary of a person
#include<stdio.h>
struct employee
{
	int empid;
	char name[50];
	char dept[100];
	float basicpay;
	float pf;
	float hra;
	float ta;
	float da;
};
int main()
{
	struct employee e1;
	printf("Enter the empid\n");
	scanf("%d",&e1.empid);
	printf("Enter your name\n");
	scanf("%s",e1.name);
	printf("Enter the department you belong to\n");
	scanf("%s",e1.dept);
	printf("Enter the basicpay\n");
	scanf("%f",&e1.basicpay);
	if (e1.basicpay<8000)
	{
		e1.hra=(0.3)*e1.basicpay;
		e1.ta=0.2*e1.basicpay;
		e1.da=0.2*e1.basicpay;
		e1.pf=0.12*e1.basicpay;
	}
	else if ((e1.basicpay>8000)&&(e1.basicpay<20000))
	{
		e1.hra=(0.35)*e1.basicpay;
		e1.ta=0.2*e1.basicpay;
		e1.da=0.25*e1.basicpay;
		e1.pf=0.13*e1.basicpay;
	}
	else
	{
		e1.hra=(0.4)*e1.basicpay;
		e1.ta=0.25*e1.basicpay;
		e1.da=0.25*e1.basicpay;
		e1.pf=0.15*e1.basicpay;
	}
	e1.basicpay+=e1.hra+e1.ta+e1.da+e1.pf;
	printf("SALARY: %.2f\n",e1.basicpay);
	return 0;
}