/*Autor :Robert Tomczak

  Program:7.4      */
#include <stdio.h>

int odwrotna(int n);

int tablica[30];
int z=0;

int main() {
  
  int b=0,n;
    
  printf("Podaj liczbe  ");
  scanf("%d",&n);
  odwrotna(n);

  for(b=0;z>b;++b)printf("%d",tablica[b]);

  printf("\n");
  getch();
  return 0;       
}

int odwrotna(int n) {
  int i,a=0;

  while(n!=0) { 
    i=n%10; n=n/10;
    z++;
    tablica[a]=i; 
    if(n==0)tablica[a]=i;
    ++a; }

 return 0;
}
