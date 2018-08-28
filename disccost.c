//prog to calc the discount cost
#include<stdio.h>
int main()
{
	float discount,cost;
	int percentage;
	printf("Enter the amount spent($)\n");
	scanf("%f",&cost);
	if(cost<10)
		percentage=0;
	else if((cost>10)&&(cost<60))
		percentage=8;
	else if((cost>60)&&(cost<150))
		percentage=10;
	else if((cost>150)&&(cost<210))
		percentage=12;
	else if((cost<210))
		percentage=14;
	printf("You win a discount coupon of $%.2f.(%d of your purchase)\n",(percentage/100)*cost,percentage);
	return 0;
}