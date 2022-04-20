#include <stdio.h>
#include <time.h>

int main() {
	char* Imena[] = { "Zarko", "Dejan", "Luka", "Hranislav", "Ozren", "Milanka", "Zorica", "Mirsada", "Ljubinka", "Stamena" };
	char* Prezimena[] = { "Tanaskovic", "Kovac", "Mrkela", "Gnjatovic", "Dvornicki", "Milanov", "Covic", "Radosavljevic", "Smit" };
	char* Gradovi[] = { "Beograd", "Nis", "Pirot", "Obrenovac", "Shabac", "Panchevo", "Kragujevac", "Leskovac", "Pirot", "Uzice" };
	char* Pol[] = { "M", "Z" };

	srand(time(NULL));

	int i, p, g, drodj, mrodj, grodj, regbr;

	i = rand() % 9;
	p = rand() % 9;
	g = rand() % 10;

	printf("\nIme: %s", Imena[i]);
	printf("\nPrezime: %s", Prezimena[p]);
	printf("\nGrad: %s", Gradovi[g]);

	{
		if (i >= 5)
			printf("\nPol: Z");
		else if (i < 5) {
			printf("\nPol: M");
		}

		{
			drodj = rand() % 31 + 1;
			printf("\nDatum rodjenja: %d", drodj);
		}
		{
			mrodj = rand() % 12 + 1;
			printf(".%d", mrodj);
		}

		{
			grodj = rand() % (2005 + 1 - 1920) + 1920;
			printf(".%d", grodj);
		}
		regbr = rand() % (999999999 + 1 - 100000000) + 100000000;
		printf("\nRegistracioni broj je: %d", regbr);
	}
}
