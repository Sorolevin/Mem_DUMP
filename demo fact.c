#include<stdio.h>
	main(void){

            int i,j,factorial;

            printf("X\tFactorial of X\n");
                for(i = 1; i <= 5;  i++){
                    factorial = 1;

                        for(j = 1; j <= i; j++)
                            factorial *= j;


                    printf("%d\t%d\n", i , factorial);
                }
return 0;
	}
