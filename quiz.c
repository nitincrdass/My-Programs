//prog for quiz
#include<stdio.h>
int main()
{
	int ans,mark=0;
	printf("\t\t\t\t\tQuiz\n1. In which year did India become a republic?\n");
	scanf("%d",&ans);
	if(ans==1950)
		mark++;
	else
		printf("The answer is wrong\nThe correct answer is 1950\n");
	printf("2. What is the total number of player in a cricket team?\n");
	scanf("%d",&ans);
	if(ans==11)
		mark++;
	else
		printf("The answer is wrong\nThe correct answer is 11\n");
	printf("3. How many binary digits will a byte have\n");
	scanf("%d",&ans);
	if(ans==8)
		mark++;
	else
		printf("The answer is wrong\nThe correct answer is 8\n");
	switch(mark)
	{
		case 0:printf("Very bad, should work hard to improve.\n");
				break;
		case 1:printf("Not bad, should improve much.\n");
				break;
		case 2:printf("Good,but improve.\n");
				break;
		case 3:printf("Very Good.\n");
				break;
	}
	return 0;
}