//prog for an inpatient and an out patient
#include<stdio.h>
int main()
{
	char pty;
	j:printf("Enter wether in patient(I) or out patient(O)\n");
	scanf("%c",&pty);
	switch(pty)
	{
		case 'I':int day;float rate,charges,ser;
					printf("Enter the no of days");
					scanf("%d",&day);
					printf("Enter the rate");
					scanf("%f",&rate);
					printf("Enter the hospital charges");
					scanf("%f",&charges);
					printf("Enter the service charges");
					scanf("%f",&ser);
					printf("\nDAYS:%d\nRATE:%f\nHOSPITAL CHARGES:%f\nSERVICE CHARGES:%f\nTOTAL CHARGES:%f\n",days,rate,charges,ser,(rate*days)+charges+ser);
					break;
		case 'O':float ser,medchr;
					printf("Enter the hospital charges");
					scanf("%f",&charges);
					printf("Enter the medicine charges");
					scanf("%f",&ser);
					printf("\nHOSPITAL CHARGES:%f\nMED CHARGES: %f\nTOTAL: %f\n",charges,ser,ser+charges);
					break;
		default:printf("Choose a correct option\n");
				goto j;
	}
	return 0;
}