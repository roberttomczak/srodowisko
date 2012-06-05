/*Autor:Robert Tomczak
  
  program: 5.8*/

#include <stdio.h>

int main() {
  int i=0,b;
  for(i;i<4;++i) {

    for(b=0;b<=i;++b) printf("*"); 
    for(b=7-i;b>0;--b) printf(" ");
    for(b=4-i;b>0;--b) printf("*");
    for(b=4+2*i;b>0;--b) printf(" ");
    for(b=4;b>i;--b) printf("*");
    for(b=7-i;b>0;--b) printf(" ");
    for(b=0;b<=i;++b)printf("*");

    printf("\n");
  }
  getch();  
  return 0;
}

