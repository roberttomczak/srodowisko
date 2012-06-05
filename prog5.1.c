/*Autor :Robert Tomczak

  Program:5.1      */
#include <stdio.h>
int main(){

int potega=1;

printf("Potegi liczby 2 nie przekraczajace 2010\n");
while(potega<2010){
	printf("%7d",potega);
	potega*=2;
}
printf("\n\n");
getch();
return 0;
}
