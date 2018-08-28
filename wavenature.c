//prog to find the nature of wave using wavelength
#include <stdio.h>
int main()
{
	float wavelength;
	printf("Enter the wavelength(in meters)\n");
	scanf("%f",&wavelength);
	if(wavelength<=1E-11)
		printf("Gamma rays\n");
	else if((wavelength<=1E-8)&&(wavelength>1E-11))
		printf("X-rays\n");
	else if((wavelength<=4E-7)&&(wavelength>1E-8))
		printf("UV-rays\n");
	else if((wavelength<=7E-7)&&(wavelength>4E-7))
		printf("Visible rays\n");
	else if((wavelength<=1E-3)&&(wavelength>7E-7))
		printf("Infrared rays\n");
	else if((wavelength<=1E-2)&&(wavelength>1E-3))
		printf("Microwave rays\n");
	else
		printf("Radio Waves\n");
	return 0;
}