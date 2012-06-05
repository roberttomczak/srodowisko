/*Autor :Robert Tomczak

  Program:7.8      */
#include <stdio.h>

int losowanie(void);
int skan_odp(int w);

int main() {
  int losowa,n,strzal=0;
 
  printf("\n\t\tZgadnij liczbe\n");
  printf(" Podaj liczbe 1-1000\n\n");
  losowa = los();
  
  while(n!=losowa) {
    n=skan_odp(losowa);
    strzal++;
  }
  
  printf("\n Brawo! Zgadles!\n\n");
  getch();
  return 0;
}

int skan_odp(int w) {
  int n;
  
  scanf("%d",&n); 
  if(n>w)printf("Za duza!\n\n");
  if(n<w)printf("Za mala\n\n");
  return n;
}

int los(void)
{ 
  srand(time(0));
  return (rand()%1000); 
}
