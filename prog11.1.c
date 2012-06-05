/*Autor :Robert Tomczak

  Program:11.1      */
#include <stdio.h>
#include <stdlib.h>

int potega(int n, int k){
  if(k==0)
    return 1;
  else 
    return n*(potega(n,k-1));

}
int main() {
  int n,k;
  printf("Podaj liczbe: "); scanf("%d",&n);
  printf("Podaj potege: "); scanf("%d",&k);  

  printf("Wynik potegi: %d\n",  potega(n,k));
  return 0;
}
