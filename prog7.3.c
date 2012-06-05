/*Autor :Robert Tomczak

  Program:7.3      */
#include <stdio.h>

int doskonala(int n);
int main () {
  int a=1,c,n,s;
  
  printf("\tSprawdzamy czy dana liczba jest doskonala\n\n");
  printf("Podaj liczbe: ");       
  scanf("%d",&n);
  
  while(n!=1000) { 
    s=doskonala(n);
    
    if(a==1){ 
      if(s==n) printf("Liczba %d jest doskonala.\n\n",s); 
      else printf("Liczba %d nie jest doskonala.\n\n",n); 
        n=2; ++a;}
  ++n;
  }
  
  
  getch();
  return 0;       
}

int doskonala(int n) {
  int a=1,c,s=0;
  for(a;a<n;++a) { c=n%a;  if(c==0) s+=a; }
  
  return s;
}
