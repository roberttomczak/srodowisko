/*Autor :Robert Tomczak

  Program:10.4     */
#include <stdio.h>

int main() {
  
  int a=0,i,tab[127];
  char x,c;
  printf("\n\tHistogram,zostanie wypisana\
 liczba kazdego znaku\n\n");
  printf("Wprowadz tekst:\n");

  for(a=0;a<127;a++)tab[a]=0;
  
  while((c=getchar())!=EOF){
    for(i=32;i<127;i++) {x=i;
      if(c==x)tab[i]++; }  }

  printf("\n znak    liczba znakow\n\
-----------------------------------\n");
  
  printf("\\n\t%d\t",tab[32]);
  for(i=32;i<127;i++) {
  if(i>32)printf(" %c\t%d\t",i,tab[i]);
  for(a=0;a<tab[i];a++)printf("*"); printf("\n");  
  }
  getch();
  return 0;
}
