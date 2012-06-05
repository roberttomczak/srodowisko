/*Autor:Robert Tomczak
  
  program: 5.5*/

#include <stdio.h>

int tabela[6];

int main () {
  int a=0;

  printf("Program odwracajacy\nPodaj liczby np.1 2 3 4 5 6\n");
  for(a;a<6;a++)scanf("%d",&tabela[a]);

  a--;
  printf("Odwrocona kolejnosc: ");
  for(a;a>=0;a--) printf("%d ",tabela[a]);
  
  printf("\n\n");
  getch();
  return 0;
}

