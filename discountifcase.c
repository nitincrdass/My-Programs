//prog for the discount for the company
#include<stdio.h>
int main()
{
	float cost_eng,cost_pump,cost_fan;
	printf("Enter the amount for Engine\n");
	scanf("%f",&cost_eng);
	printf("Enter the amount for Pumps\n");
	scanf("%f",&cost_pump);
	printf("Enter the amount for Fans\n");
	scanf("%f",&cost_fan);
	if(cost_eng>5000)
		cost_eng+=(0.1)*cost_eng;
	if(cost_pump>2000)
		cost_pump+=(0.1)*cost_eng;
	if(cost_fan>1000)
		cost_fan+=(0.1)*cost_eng;
	printf("COST OF\n1.ENGINE:%f\n1.PUMP:%f\n1.FAN:%f\nTOTAL COST:%f\n",cost_eng,cost_pump,cost_fan,cost_eng+cost_pump+cost_fan);
	return 0;
}