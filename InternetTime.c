#include <stdio.h>
#include <time.h>

int main() {

	time_t t;
	time(&t);

	printf("Danasnji datum i vreme su: %s", ctime(&t));

	return 0;

}