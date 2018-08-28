// prog to find the richter scale
#include<stdio.h>
int main()
{
	float scale;
	printf("Enter the reading in richter scal\n");
	scanf("%f",&scale);
	if(scale>5.0)
		printf("Little of no damage\n");
	else if(scale>=5.0)&&(scale<5.5)
		printf("Some damage\n");
	else if(scale>=5.5)&&(scale<6.5)
		printf("Serious damage\n");
	else if(scale>=6.5)&&(scale<7.5)
		printf("Disaster: Houses and Buildings may collapse\n");
	else
		printf("Catastrophe: most buildings destroyed\n");
	return 0;
}