#include <string.h>
#include <stdio.h>
#include "Main.h"
#define SIZE 20

void Shorten(char* string, int number) {
	if (strlen(string) < number) {
		printf("\nNie mozesz tego zrobic");
		return;
	}

	string[number] = "\0";

	fputs(string, stdout);
}

int main() {
	char string[SIZE];

	fgets(string, SIZE, stdin);
	fputs(string, stdout);

	printf("\nPodaj liczbe:");

	int number;

	scanf_s("%d", &number);

	Shorten(string, number);

}