/*Autor :Robert Tomczak

  Program:11.2      */
#include <stdio.h>
#include <stdlib.h>

int newton(int n, int k){
 return (silnia(n)/(silnia(k)*silnia(n-k)));
}

int silnia(int s){
  if(s==1)return 1;
  else return s*(silnia(s-1));
}

int main() {
  int n,k;
  printf("Podaj n: "); scanf("%d",&n);
  printf("Podaj k: "); scanf("%d",&k);  

  printf("Newton wynosi : %d\n",  newton(n,k));
  
  getch();
}
