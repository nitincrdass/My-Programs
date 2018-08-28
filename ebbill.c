//pro for eb bill
#include<stdio.h>
int main()
{
	int unit;
	float price;
	printf("Enter the units consumed\n");
	scanf("%d",&unit);
	if (unit<=100)
	{
		price=0.60*unit;
	}
	else if (units>=300)
	{
		/* code */
		price=0.80*unit;
	}
	else{
		price=0.90*units;
	}
	price+=50;
	if(price>300)
		price+=(15/100)*price;
	return 0;
}