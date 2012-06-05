/*Autor :Robert Tomczak

  Program:4.2      */
/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejnosci: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
	int i=0;
   int tabela[] = {1, 2, 4, 6, 12};
   for (i=4;i>=0;i--)
   printf("tab[%d]=%d\n" ,i, tabela[i]);
   getch();  
   return 0;
}
