/*Autor :Robert Tomczak

  Program:9.2     */
#include <stdio.h>
#define tydzien 7

int main() {
  int n,dzien=1,t,z;
  t=0; n=1; 
  
  printf("\n\n\tProgram zamienia dni na tygodnie i dni\n");
  
  while(n>0) {
    printf("\nPodaj liczbe dni :");
    scanf("%d",&n);z=n;  
    while(n>1){
      if(n>=tydzien){ t++;  n-=tydzien;}
      if(n<tydzien){dzien=n; n=1;}
    }
    if(n>0){printf("%d dni to %d tygodnie i %d dni\n",
z,t,dzien++);}
    else printf("Koniec\n");
    t=0; dzien=1;
  }
  getch();
  return 0;
}
