//prog to find the bill amount
#include<stdio.h>
int main()
{
	char name[100],ch;
	float price;
	int hours;
	printf("Enter your name\n");
	scanf("%s",name);
	printf("Enter the number of hours used \n");
	scanf("%d",&hours);
	printf("Enter your plan\n1.Package A\n1.Package B\n1.Package C\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '1':price=9.95;
					if(hours>10)
						price+=(hours-10)*2.00;
					break;
		case '2':price=14.95;
					if(hours>20)
						price+=(hours-10)*1.00;
					break;
		case '3':price=19.95;
					break;
	}
	printf("NAME:%s\nPACKAGE:%c\nPRICE:%f\nHOURS:%d\n",name,ch,price,hours);
	return 0;
}