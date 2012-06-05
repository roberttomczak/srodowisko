/*Autor :Robert Tomczak

  Program:13.2      */
# include <stdlib.h>
# include <stdio.h>
int main (){
	int tab[]={2,6,4,1,5,9,7,3,8,10};
	int *pab[10];
	int i,j;
	pab[0]=&tab[0];
		for(i=0;i<10;i++)
			if (tab[i]<*pab[0]) pab[0]=&tab[i];
		for(j=0;j<10;j++){
			pab[j]=&tab[0];
			for(i=0;i<10;i++)
					if (tab[i]>*pab[0]) pab[j]=&tab[i];
			for(i=0;i<10;i++)
			if((tab[i]<*pab[j])&&(tab[i]>*pab[j-1]))
			pab[j]=&tab[i];
				
			}
	for(i=0;i<10;i++) printf("%4d",tab[i]);printf("\n");
	for(j=0;j<10;j++) printf("%4d",*pab[j]);printf("\n");		
	getch();
	return 0;
}

		
	
	
	
	
	
	
	
	
	
	

