//prog to find the points in the black jack game
#include<stdio.h>
#include<string.h>
int main()
{
	char card1[3],card2[3],card3[3];
	int score=0;
	printf("Enter the card if face card then enter F if an ace then enter A\n");
	scanf("%d",card1);
	printf("Second card\n");
	scanf("%d",card2);
	printf("Third card\n");
	scanf("%d",card3);
	if(card1=='F')
		score+=10;strcpy(card1,'0');
	else if(card2=='F')
		score+=10;strcpy(card2,'0');
	else if(card3=='F')
		score+=10;strcpy(card3,'0');
	if(score<21)
	{
		if(card1=='A')
			score+=11;strcpy(card1,'0');
		else if(card2=='A')
			score+=11;strcpy(card2,'0');
		else if(card3=='A')
			score+=11;strcpy(card3,'0');
	}
	else
	{
		if(card1=='A')
			score+=1;strcpy(card1,'0');
		else if(card2=='A')
			score+=1;strcpy(card2,'0');
		else if(card3=='A')
			score+=1;strcpy(card3,'0');
	}
	printf("Your score is %d\n",score);
	return 0;
}