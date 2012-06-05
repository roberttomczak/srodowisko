/*Autor :Robert Tomczak

  Program:10.1      */
#include <stdio.h>

int main() {
int c;
while ((c=getchar())!=EOF)

if (c=='\t')
   printf("\\t");
else if (c=='\\')
     printf("\\\\");
else
putchar(c);
getch();
return 0;
}
