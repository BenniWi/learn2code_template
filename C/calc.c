// CalcPercentage.c 

// Calculate Percentages (04.02.2023)

#include <stdio.h>	// include correct library!

void main()
{
	int value = 0, percent = 0;
	float result = 0;

	printf("Value: ");
	scanf("%d", &value);	// turn off scanf_s: project/property/C++/sdl checks off 
	printf("Percentage: ");
	scanf("%d", &percent);	// pass in an adress!!! 

	result = (value * percent) / (float)100;
	printf("%d%% of %d equals %.2f!\n", value, percent, result);	// use %% to print a percent sign! 
}
