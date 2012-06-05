/*Autor :Robert Tomczak

  Program:8.2      */
#include <stdio.h>

int sprawdz(int n);
int main() {
  int a,n,jest_pierwsza;
  printf("Podaj liczbe calkowita: ");
  scanf("%d",&n);
  
  jest_pierwsza = sprawdz(n);

  printf("\nPodana liczba '%d' jest %s\n",
         n, jest_pierwsza ? "pierwsza" : "zlozona");
         getch();
  return 0;
}

int sprawdz(int n) {
  int d=0,a=1;
  
  while(d<2 && a<6){
    a++;
    if(n%a==0)d++;
  }
  if(d<2) return 1;
  else return 0;
}
