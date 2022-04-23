#include <stdio.h>

int main() {

	int a, sekunde, prestupnaSek;
	printf("Unesite broj godina: ");
	scanf_s("%d", &a);
	sekunde = a * 31536000;
	prestupnaSek = a * 31622400;

	printf("\nProslo je %d sekundi vaseg zivota", sekunde);
	printf("\nProslo je %d sekundi vaseg zivota (prestupna godina)", prestupnaSek);
}