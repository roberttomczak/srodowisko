/*Autor :Robert Tomczak

  Program:7.7      */
#include <stdio.h>

int mnozenie(int a, int b);
int main()  {
  int i,a,b=0,c,d=0,x,e;
  
  srand(time(0));
  printf("\n\t\tSprawdzenie umiejetnosci mnozenia\n\n");
  printf(" Wpisz wynik\n\n");
  
  for(i=0;i<5;++i){
    c=rand()%10;
    e=rand()%10;
    a=mnozenie(c,e);
    x=rand()%3;

    if(a==1){  d++;
      switch(x) {
      case 0: printf("Bardzo dobrze!\n"); break;
      case 1: printf("Swietnie!\n");break;
      default: printf("Dobra robota!\n");}
      } 
    else {  b++;  
      switch(x) {
      case 0: printf("Zla odpowiedz\n");break;
      case 1: printf("Oj,niedobrze\n");break;
      default: printf("Nastepnym razem mo¿e pojdzie Ci lepiej\n");}
    }
    
  }

  printf("---------------------------------------------\n");
  printf("Bledne odp. : %d Dobre odp. : %d\n\n",b,d);
  getch();
  return 0;
}

int mnozenie(int a, int b) {
  int wynik;
  
  printf("%d x %d = ",a,b); 
  scanf("%d",&wynik);
  
  if(a*b==wynik) return 1;
  else return 0;
}
