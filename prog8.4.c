/*Autor :Robert Tomczak

  Program:8.4      */
#include <stdio.h>

int main() {

  int nb = 0; 
  int nt = 0;  
  int nl = 0; 
  int z=0;
  char c;
  
  printf("\n\n\tProgram zlicza odstêpy, tabulacje i wiersze\n");
  printf("\n Wpisz tekst:\n");
  printf("\n------------------------\n");
  
  scanf("%c",&c);
  while ((c=getchar()) != EOF) {
    if(c==' ')nb++;
    if(c=='\t')nt++;
    if(c=='\n')nl++;
  }
  printf("\n------------------------\n");
  printf("\n Liczba znakow: \n\n Odstepu = %d\n\
 Tabulacji = %d\n Wierszy = %d",nb,nt,nl++);
  printf("\n------------------------\n\n");
  getch();
  return 0;
}
