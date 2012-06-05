/*Autor :Robert Tomczak

  Program:4.4      */
#include <stdio.h>
int main()
{
   int n,x,y;
   printf("podaj n: ");
   scanf("%d", &n);
   y=1;   
   for (x=1;x<=n;x++)
   y*=x;
   printf("Silnia wynosi %d\n" , y);
    
   getch();
   return 0;
}


