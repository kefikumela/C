#include <stdio.h>
#include <time.h>

int main() {

	int i;
	char vi[30], onona[30], posto = '%';

	srand(time(NULL));

	i = rand() % 100 + 1;

	printf("Unesite Vase ime: ");
	gets(vi);

	printf("Unesite njeno/njegovo ime: ");
	gets(onona);

	printf("Ljubav izmedju %s i %s iznosi %d%c", vi, onona, i, posto);
}