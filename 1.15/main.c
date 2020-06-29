#include <stdio.h>

float fahr_to_celcius(float fahr);

int main(){
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	printf("Fahr | Celsius\n");
	for(float fahr = lower; fahr <= upper; fahr += step){
		printf("%3.0f %6.1f\n", fahr, fahr_to_celcius(fahr));
	}
}

float fahr_to_celcius(float fahr){
	return (5.0/9.0) * (fahr - 32.0);
}