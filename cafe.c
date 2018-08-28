//prog for the cafe
#include<stdio.h>
int main()
{
	char item[100];
	int price;
	int ch,ship;
	printf("Enter the item\n");
	scanf("%s",&item);
	printf("Enter the price\n");
	scanf("%d",&price);
	printf("Overnight delivery (0==no, 1==yes):\n");
	scanf("%d",&ch);
	if(ch==1)
		ship=5;
	else
	{
		if(price<=10)
			ship=2;
		else
			ship=3;
	}
	printf("Invoice\n\n%s %d\nShipping %d\nTotal %d\n",item,price,ship,price+ship);
	return 0;
}