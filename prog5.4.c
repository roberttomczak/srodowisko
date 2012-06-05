/*Autor :Robert Tomczak

  Program:5.4      */

#include <stdio.h>
int main () {
  int x,y=0;

  printf("Podaj dowolna liczbe: ");
  scanf("%d",&x);

  if(x<1) printf("Blad! Podana liczba jest mniejsza od 1\n");
  else for(x;x>0;x--)  y+=x;

  printf("Wynik: %d\n",y);
  getch();
  return 0;
}

