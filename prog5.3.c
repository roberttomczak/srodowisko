/*Autor :Robert Tomczak

  Program:5.3      */
#include <stdio.h>
main(){
int a,b,i;
printf("Podaj pierwsza liczbe: ");
scanf("%d",&a);
printf("Podaj druga liczbe: ");
scanf("%d",&b);
for(i=a+1;i<b;i++)
	printf("%4d",i);
printf("\n\n");	
getch();	
return 0;
}
