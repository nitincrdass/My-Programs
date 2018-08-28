//prob to find the weight clas and the reg fee
#include<stdio.h>
int main()
{
	int modelyear,weight;
	int weightclass;
	float regfee;
	printf("Enter the model year\n");
	scanf("%d",&modelyear);
	printf("Enter the weight in gms\n");
	scanf("%d",&weight);
	if(modelyear<=1970)
		if(weight<2700)
		{
			regfee=16.50;
			weightclass=1;
		}
		else if((weight>2700)&&(weight<3800))
		{
			regfee=25.50;
			weightclass=2;
		}
		else
		{
			regfee=46.50;
			weightclass=3;
		}
		else if((modelyear>=1971)(modelyear<=1979))
		if(weight<2700)
		{
			regfee=27.0;
			weightclass=4;
		}
		else if((weight>2700)&&(weight<3800))
		{
			regfee=30.50;
			weightclass=5;
		}
		else
		{
			regfee=52.50;
			weightclass=6;
		}
		else
		if(weight<3500)
		{
			regfee=19.50;
			weightclass=7;
		}
		else
		{
			regfee=52.50;
			weightclass=8;
		}
	return 0;
}