#include <stdio.h>
int	side(void);

  int main(void){
   
  

 
		side();




    return 0;
}
	
side(void){
int one = 10 ,t, u;
                for(t = 1; t <= 10; t++){
             	for(u = 10; u >= t; u-- )	
					  printf(" ");
					 for(one = 1; one <= t; one++)
                       
						printf("*");
                        printf("\n");
					}
int d = 10 , y,	r = 10;
               
               
			    for(y = 10; y >= 0; y--){
             		for(r = 10; r >= y; r--)
                       printf(" ");
					for(d = 1; d <= y; d++)	
						printf("*");
						
                  
						printf("\n");
					   	
	}
		
		int space;
    int v,s,p,ded = 10;


                for(v = 1; v <= 9; v += 2){
                for(space =  ( 9 - v ) / 2; space > 0; space--)
                        printf(" ");
                for(p = 1; p <= v; p++)
                        printf("*");
                        printf("\n");
                }

				for(v = 7; v >=  0; v-= 2){
				for(space = ( 9 - v   ) / 2; space >  0; space--)
						printf(" ");
				for(p = 1; p <= v; p++)
						printf("*");
						printf("\n");
					}
				}
		

	
	
	
