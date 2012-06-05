/*Autor :Robert Tomczak

  Program:9.4      */
#include <stdio.h>

int main() {
  int a,m,w,x,y;
  a=0;

  printf("\n\n\tProgram liczy sume kwadratow miedzy x i y\n");
  printf("Podaj 2 liczby calkowite\n");
  scanf("%d %d",&x,&y);
  
  if(x>=y){w=x;m=y;}
  else {w=y; m=x; }

  for(m;m<=w;m++)a=a+m*m;

  printf("\nWynik %d\n",a);
  getch();
  return 0;
}
