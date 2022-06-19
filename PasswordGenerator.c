#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main() {

	int i = 0;
	int randomizer = 0;

	srand(time(NULL));

	char brojevi[] = "0123456789";
	char slova[] = "abcdefghijklmnopqrstuvwxyz";
	char SLOVA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char simboli[] = "!@#$%^&";
	char password[N];

	randomizer = rand() % 4;

	printf("Vasa sifra je: ", password[i]);

	for (i = 0; i < N; i++) {
		if (randomizer == 1) {
			password[i] = brojevi[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = simboli[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = SLOVA[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = slova[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return 0;
}