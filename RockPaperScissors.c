#include <stdio.h>
#include <time.h>

int main() {

	char* PKM[] = { "P", "K", "M" };

	srand(time(NULL));

	int i;
	char vi;

	i = rand() % 3;

	printf("P, K ili M? (Vi): ");
	scanf_s("%c", &vi);
	printf("P, K ili M? (Protivnik): %s", PKM[i]);


	if (vi == 'P' && PKM[i] == "K") {
		printf("\nPobedili ste!");
	}
	else if (vi == 'P' && PKM[i] == "M") {
		printf("\nIzgubili ste!");
	}
	else if (vi == 'P' && PKM[i] == "P") {
		printf("\nNereseno je!");
	}

	if (vi == 'K' && PKM[i] == "M") {
		printf("\nPobedili ste!");
	}
	else if (vi == 'K' && PKM[i] == "P") {
		printf("\nIzgubili ste!");
	}
	else if (vi == 'K' && PKM[i] == "K") {
		printf("\nNereseno je!");
	}

	if (vi == 'M' && PKM[i] == "P") {
		printf("\nPobedili ste!");
	}
	else if (vi == 'M' && PKM[i] == "K") {
		printf("\nIzgubili ste!");
	}
	else if (vi == 'M' && PKM[i] == "M") {
		printf("\nNereseno je!");
	}
}