//prog to calc the amount at aparking lot
#include<stdio.h>
int main()
{
	char type;
	float hours,amount;
	printf("Enter the type of vehical(C/B/T)\n");
	scanf("%c",&type);
	printf("Enter the number of hours\n");
	scanf("%f",&hours);
	switch(type)
	{
		case 'C':if(hours<=3)
					amount=hours*2;
				else
					amount=hours*3.50;
			break;
		case 'B':if(hours<=2)
					amount=hours*4;
				else
					amount=hours*5;
			break;
		case 'T':if(hours<=1)
					amount=hours*10;
				else
					amount=hours*12.50;
			break;
	}
	printf("\n\nVEHICAL TYPE=%c\nHOURS=%.2f\nAMOUNT(Rs)=%.2f\n",type,hours,amount);
	return 0;
}