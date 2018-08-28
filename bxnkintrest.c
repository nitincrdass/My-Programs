//prog to calculate the bank intrest
#include<stdio.h>
int main()
{
	float fund,time,intrest;
	printf("Enter the Fund in the bank account\n");
	scanf("%f",&fund);
	printf("Enter the time period(in years)\n");
	scanf("%f",&time);
	if (time>=5)
	{
		intrest=fund*time*0.045;
	}
	else if((time<5)&&(time>=4))
		intrest=fund*time*0.04;
	else if((time<4)&&(time>=3))
		intrest=fund*time*0.035;
	else if((time<3)&&(time>=2))
		intrest=fund*time*0.03;
	else if((time<2)&&(time>=1))
		intrest=fund*time*0.025;
	else
		intrest=fund*time*0.02;
	printf("FUND:%f\nTIME:%f\nINTREST:%f\n",fund,time,intrest);
	return 0;
}