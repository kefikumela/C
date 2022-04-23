#include <stdio.h>

int main() {

	int a, sekunde;
	printf("Unesite broj godina: ");
	scanf_s("%d", &a);
	sekunde = a * 31536000;

	printf("\nProslo je %d sekundi vaseg zivota", sekunde);
}