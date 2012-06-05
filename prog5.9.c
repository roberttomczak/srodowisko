/*Autor :Robert Tomczak

  Program:5.9     */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *in_handle;
	char bufor[BUFSIZ];
	unsigned int ui;
	double x, y;
	in_handle = fopen(argv[1], "r");
	while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
		if(bufor[0] != '-') {
			sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
			printf("--> %d %.2f %.2f\n", ui, x, y);
		}
	}
	fclose(in_handle);
	return EXIT_SUCCESS;
}
