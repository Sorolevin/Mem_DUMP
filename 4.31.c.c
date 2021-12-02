#include <stdio.h>


  int main(void){
    int one = 10 ,t;
    int space;
    int v,s,p,ded = 10;


                for(t = 1; t <= 9; t += 2){
                for(space =  ( 9 - t ) / 2; space > 0; space--)
                        printf(" ");
                for(one = 1; one <= t; one++)
                        printf("*");
                        printf("\n");
                }

				for(t = 7; t >=  0; t-= 2){
				for(space = ( 9 - t   ) / 2; space >  0; space--)
						printf(" ");
				for(one = 1; one <= t; one++)
						printf("*");
						printf("\n");
}



    return 0;
}
