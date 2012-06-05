/*Autor :Robert Tomczak

  Program:8.1      */
#include <stdio.h>
int main() {
  int M;
  int i, n, suma = 0;
  i = 1;
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  n=i-1;
  printf("Szukane n to: %d\n", n);
  getch();
  return 0;
}
