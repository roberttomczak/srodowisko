/*Autor :Robert Tomczak

  Program:13.1      */
# include <stdlib.h>
# include <stdio.h>

void kwadrat (int *n) {
  (*n)*=(*n);
}
void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbe naturalna: ");
  scanf("%d", n);
} 
int main()
{
  int liczba;
  int l;
  wczytaj_liczbe(&liczba);
  l = liczba;
  kwadrat(&l);
  printf("Kwadratem Liczby %d jest %d\n",liczba,l); 
  getch(); 
  return 0;
}
