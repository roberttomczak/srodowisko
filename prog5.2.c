/*Autor:Robert Tomczak
  
  program: 5.2*/
#include <stdio.h>

int main () {
  int i,x;
  
  for(i=0;i<8;i++) {
    if(i%2) for(x=0;x<8;x++)  printf(" *");
    else for(x=0;x<8;x++) printf("* "); 

    printf("\n");
  }
  getch();
  return 0;
}
