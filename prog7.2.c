/*Autor :Robert Tomczak

  Program:7.2      */
#include <stdio.h>
#include <math.h>

int silnia(int y){
	
   int x, iloczyn=1;  
   for (x=1;x<=y;x++) iloczyn *=x;
   return iloczyn;
}


int main(){
    int i=1;
    for(i;i<=10;++i){
       printf("Silnia z %2d wynosi: %d\n",i,silnia(i));}
	   getch();
return 0;
}
