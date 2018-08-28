//prog to disp somthing
#include<stdio.h>
int main()
{
	int bolt,nut,grater;
	printf("Enter the number of bolt\n");
	scanf("%d",&bolt);
	printf("Enter the number of nut\n");
	scanf("%d",&nut);
	if(nut==bolt)
		printf("The number of nuts and bolt are the same\n");
	else
	{	printf("The numbers of nuts nut and bolts are different\n");
		grater=(bolt>=nut)?bolt:nut;
		if(bolt>nut)
		printf("Buy %d more nuts\n",grater-nuts);
		else
			printf("Buy %d more bolts\n",grater-bolts);
	}
	return 0;
}