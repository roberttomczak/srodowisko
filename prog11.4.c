/*Autor : Robert Tomczak

  program: 11.4*/
#include <stdio.h>


int nwd(int m, int n)
{
  if (m != n)
  {
    if (m > n){
      return nwd(m-n, n);}
    else{
      return nwd(n-m, m);}
  }
  else
    return m;
}

main()
{
  int m, n;
  printf("Podaj a: "); scanf("%d", &m);
  printf("Podaj b: "); scanf("%d", &n);
  printf("NWD(%d,%d) = %d",m,n,nwd(m,n));
  getch();
  return 0; 
}
