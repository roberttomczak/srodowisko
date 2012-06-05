/*Autor :Robert Tomczak

  Program:10.2     */ 
#include <stdio.h>
#include <math.h>

int main() {
  int  a;
  printf("\nPierwiastek z pierwszych 20 liczb\n");
  for(a=1;a<21;a++)printf("%d = %.3lf\n",a,sqrt(a));
  getch();
  return 0;
}
