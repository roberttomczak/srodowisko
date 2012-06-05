/*Autor:Robert Tomczak
  
  program: 5.7*/

#include <stdio.h>

int main() {
  int tablica[6],a,n,min=0,dod=0;
  printf("Podaj 6 liczb:\n");
  for(a=0;a<6;a++){scanf("%d",&n); tablica[a]=n;
    if(tablica[a]>0) {dod++;}
    if(tablica[a]<0) {min++;}
  }
  printf("\nDodatnich jest: %d | Ujemnych jest: %d\n\n",dod,min);
  getch();  
  return 0;
}


