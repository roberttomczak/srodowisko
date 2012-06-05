/*Autor:Robert Tomczak
  
  program: 5.6*/

#include <stdio.h>

float najw_li_rzecz(float tab[]);
float najm_li_rzecz(float tab[]);

int main() {
	int i;
	float tab[6];
    printf("Wpisz liczby:\n");
	for(i = 0; i < 6; i++) scanf("%f", &tab[i]);
	printf("\n");
	printf("Najwieksza liczba: %f\n", najw_li_rzecz(tab));
	printf("Najmniejsza liczba: %f\n\n", najm_li_rzecz(tab));
	getch();
	return 0;
}

float najw_li_rzecz(float tab[]) {
	float max;
	int i;

	max=tab[0];	
	for(i = 0; i < 6; i++) {
		if(tab[i] > max) max=tab[i];
	}
	return max;
}

float najm_li_rzecz(float tab[]) {
	float min;
	int i;
	min=tab[0];

	for(i = 0; i < 6; i++) {
		if(tab[i] < min) min=tab[i];
	}
	return min;
}
