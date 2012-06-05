/*Autor :Robert Tomczak

  Program:4.5      */
  /* zlicz znaki odstepu, tabulacji
 * i nowego wiersza */
#include <stdio.h>
int main (){
int c, nb, nt, nl;
nb=nl=nt=0;
while ((c=getchar()) != EOF){
      if (c == '\n')
      ++nl;
else if (c == ' ')
     ++nb;
else if (c == '\t')
     ++nt;
}
printf("%d %d %d\n", nb, nt, nl);
getch();
return 0;
}
