/*Autor :Robert Tomczak

  Program:7.6      */
#include <stdio.h>
#include <stdlib.h>


int sprawdz_wynik(int a, int b, int c){
	if (a*b==c) { return 1;
	}
	else {
		 return 0;
	}
}


int main(){
	int h=1, j=0;
	int a,b,c;
	printf("Sprawdz umiejetnosc mnozenia\n");
	 while(h<=5){
        printf("Dzialanie numer %d\n",h);         
        srand(time(0));
	    a =rand()%10;
	    b =rand()%10;
	    printf("%d * %d = \n", a, b);
	    scanf("%d",&c);         
		j+=sprawdz_wynik(a,b,c);
		++h;
		printf("-------------------------\n");
	}
		printf("Dobre odpowiedzi: %d\n",j);
		printf("Zle odpowiedzi: %d\n",h-j-1);
		getch();
return 0;
}
