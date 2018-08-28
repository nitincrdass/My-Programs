//program to determine the the students grade
#include<stdio.h>
int main()
{
	int mark[4],avg_mark=0;
	char grade;
	for(int i=0;i<3;i++)
	{
		printf("Enter the mark\n");
		scanf("%d",&mark[i]);
		avg_mark+=mark[i];
	}
	avg_mark/=3;
	if(avg_mark>90)
		grade='A';
	else if((avg_mark>70)&&(avg_mark<90))
		{
			if(mark[2]>90)
				grade='A';
			else
				grade='B';
		}
	else if((avg_mark>=50)&&(avg_mark<70))
	{
		if((mark[1]+mark[2])/2>70)
			grade='c';
		else
			grade='D';
	}
	else
		grade='F';
	printf("The grade is %c\n",grade);
	return 0;
}