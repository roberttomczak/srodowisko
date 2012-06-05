/*Autor :Robert Tomczak

  Program:9.3      */
#include <stdio.h>

int main() {
  int a,m,w,x,y;
  a=0;
  printf("\n\n\tProgram sumuje liczby miedzy x i y\n\n");
  printf("Podaj liczby calkowite\n");
  scanf("%d %d",&x,&y);
  
  if(x>=y){w=x;m=y;}
  else {w=y; m=x; }
  
  for(m;m<=w;m++)  a+=m;

  printf("\nWynik %d\n",a);
  getch();
  return 0;
}
