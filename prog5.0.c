/*Autor :Robert Tomczak

  Program:5.0      */
#include <stdio.h>
int main() {
    int y, x=1, wynik = 0;
    while (x<=10) {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    printf("wynik = %d\n", wynik);
    getch();
    return 0;
}
