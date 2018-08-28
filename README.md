# My-Programs//prog to op the type of flow
#include<stdio.h>
int main()
{
	int rayno;
	printf("Enter the raynolds number\n");
	scanf("%d",&rayno);
	if(rayno<2000) 
		printf("The Flow is laminar\n");
	else if(rayno>3000) 
		printf("The Flow is turbulent\n");
	else
		printf("Tranlitation form laminar to turbulant\n");
	return 0;
}
