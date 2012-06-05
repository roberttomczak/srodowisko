/*Autor :Robert Tomczak

  Program:8.3      */
#include <stdio.h>

int main(){
  double a,suma=4;
  int b=0,c,n=1;
  
  printf("\n----------------------------------\n");
  printf(" N(ilosc petli)  Przyblizone PI \n");
  printf("----------------------------------\n");
  for(b=0;b<4;b++){
    if(b<3)n*=10;
    else n=1000000;

  for(a=3;a<n;a+=2){
    c++;
    if(c%2==0)suma+=4/a;
    else suma-=4/a; }
  
  printf("%9.d   -    %.6f\n",n,suma); 
  suma=4; 
  c=0;
  }
  printf("----------------------------------\n\n");
  getch();
  return 0;
}
