#include <stdio.h>
#include <time.h>

int main() {

	int i, j;
	char unos;

	srand(time(NULL));

	i = rand() % 50 + 1;
	j = rand() % 50 + 1;

	printf("Prvi broj: %d", i);

	printf("\nDa li je drugi broj veci, manji ili jednak u odnosu na prvi? (unesite >, < ili =): ");
	scanf_s("%c", &unos);
	printf("\nDrugi broj je: %d", j);

	if (j > i && unos == '>') {
		printf("\nPogodili ste!", j);
	}
	else if (j < i && unos == '<') {
		printf("\nPogodili ste!", j);
	}
	else {
		printf("\nPogresili ste!");
	}
	if (j == i && unos == '=')
		printf("\nJednaki su!");
}