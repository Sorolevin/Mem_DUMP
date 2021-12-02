#include<stdio.h>
#include<stdlib.h>
 
int flip(void);	
int	main	(void){
	int v, b = 0, g = 0;
			srand(time(NULL));
			for(v = 0; v <= 99; v++ ){
			
				if(flip() == 1){
					++b;
					printf("Heads\n");
				}
				 else{
				 	g++; 
					 printf("Tails\n"  );
				 }
					
	}
		printf("\ntails %d  Heads %d", g ,b);
		return 0;
	}
	
	int flip(void){
			
			int oper = 0;
	 	return    1 + (rand() % 2);
		
	
		
					
	}
