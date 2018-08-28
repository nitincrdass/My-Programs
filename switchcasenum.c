//prog to print the number in words
#include<stdio.h>
int main()
{
	int num,digit;
	j:printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		num/=10;
		switch(digit)
		{
			case 0:printf("Zero\t");
					break;
			case 1:printf("One\t");
					break;
			case 2:printf("Two\t");
					break;
			case 3:printf("Three\t");
					break;
			case 4:printf("Four\t");
					break;
			case 5:printf("Five\t");
					break;
			case 6:printf("Six\t");
					break;
			case 7:printf("Seven\t");
					break;
			case 8:printf("Eight\t");
					break;
			case 9:printf("Nine\t");
					break;
			default:printf("Enter a proper number\n");goto j;
		}
	}
	return 0;
}