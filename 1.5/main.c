#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = upper;
	printf("Lower bound is %d\nUpper bound is %d\nStep size is %d\n", lower, upper, step);
	printf("Celsius | Fahr\n");
	while(celsius >= lower){
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius - step;
	}
}