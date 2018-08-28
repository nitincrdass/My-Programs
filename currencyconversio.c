//conversion program
#include<stdio.h>
int main()
{
	float rs,us,rand,yen,pound;
	for(int i=0;i<80;i++)
		printf("_");
	printf("\n");
	rs=1;
	us=1/68.38;
	rand=rs/5.18;
	yen=rs/0.61;
	pound=rs/89.72;
	printf("Rs\tUS$\t\tRand\t\tYen\t\tPound\n%.f\t%f\t%f\t%f\t%f\t\n",rs,us,rand,yen,pound);
	for(int i=0;i<80;i++)
		printf("_");
	printf("\n");
	return 0;
}