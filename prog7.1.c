/*Autor :Robert Tomczak

  Program:7.1      */
#include <stdio.h>
#include <math.h>

double pprost(double x , double y){
	
return sqrt(x*x+y*y);
}

int main(){
    double x, y, z;
    int h=1;
    
    printf("Dlugosc pierwszej przyprostokatnej:\n");
    scanf("%lf",&x);
    printf("Dlugosc pierwszej przyprostokatnej:\n");
    scanf("%lf",&y);
	printf("trojkat\tbok 1\tbok 2\tbok 3\n");
	z=pprost(x,y);
	printf("%d\t%.1lf\t%.1lf\t%.2lf\n",h,x,y,z);

	printf("---------------------------------\n");
    
getch();	
return 0;
}
