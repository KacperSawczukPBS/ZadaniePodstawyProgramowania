#include <string.h>
#include <stdio.h>
#include "Main.h"
#define SIZE 20

int main() {
	char string[SIZE];

	fgets(string, SIZE, stdin);
	fputs(string, stdout);

	printf("\nPodaj liczbe:");

	int number;

	scanf_s("%d", &number);

	Shorten(string, number);

}