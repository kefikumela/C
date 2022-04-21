#include <stdio.h>


int main() {

	double celsius, fahrenheit;

	printf("Unesite temperaturu u Celzijusima: ");
	scanf_s("%lf", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;

	printf("Temperatura u Farenhajtima je: %.2f", fahrenheit);
}