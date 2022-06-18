#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main() {

	srand(time(NULL));

	int r, g, p, j, r2;
	int arraysize = 5;
	int arraysize2 = 1;
	int arraysize3 = 4;

	char* rec[] = { "Decak", "Muskarac", "Deda", "Covek", "Pas"};
	char* je[] = { "je" };
	char* rec2[] = { "mosta", "reke", "ulice", "planine", "sela"};
	char* glagol[] = { "bio", "setao", "trcao", "otisao"};
	char* predlog[] = { "do", "preko", "na", "pored"};

	r = rand() % arraysize;
	g = rand() % arraysize3;
	p = rand() % arraysize3;
	j = rand() % arraysize2;
	r2 = rand() % arraysize;

	printf("%s %s %s %s %s\n", rec[r], je[j], glagol[g], predlog[p], rec2[r2]);

	return 0;
}