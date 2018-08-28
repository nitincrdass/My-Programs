//prog for the library
#include<stdio.h>
int main()
{
	int days; 
	float fine;
	printf("Enter the number of days youhave took the book for\n");
	scanf("%d",&days);
	if(days<=5)
		fine=0.50;
	else if((days>=6)&&(days<=10))
		fine=1.0;
	else if(days>10)
		fine=5;
	printf("FINE=%.2f\n",fine);
	if(days>30)
		printf("Your membirship is cancelled\n");
	return 0;
}