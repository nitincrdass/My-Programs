//prog for ABC company
#include<stdio.h>
int main()
{
	int years,sal;
	float new_sal;
	char stat;
	printf("Enter if part time(p) and full time(f)\n");
	scanf("%c",&stat);
	printf("Enter the years of Exp\n");
	scanf("%d",&years);
	printf("Enter the salary\n");
	scanf("%d",&sal);
	new_sal=sal;
	if((stat=='f')&&(years<5))
		new_sal+=(4.0/100)*sal;
	else if((stat=='f')&&(years>=5))
		new_sal+=(5.0/100)*sal;
	else if((stat=='p')&&(years<5))
		new_sal+=(2.5/100)*sal;
	else if((stat=='p')&&(years>=5))
		new_sal+=(3.0/100)*sal;
	printf("NEW SAL=%.2f\n",new_sal);
	return 0;
}