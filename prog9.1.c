/*Autor :Robert Tomczak

  Program:9.1      */
#include <stdio.h>
#define godzina 60

int main() {
  int n,reszta,godz;
  godz=0;  

  printf("\n\n\tProgram zamienia minuty na godziny i minuty\n\n");
  printf("Podaj liczbe minut:");
  scanf("%d",&n);
  
  while(n>0){
    if(n>=60){ godz++;  n=n-godzina;}
    else {reszta=n; n=0;}
  }
  printf("\nTo %d godzin i %d minut\n",godz,reszta);
  getch();
  return 0;
}
