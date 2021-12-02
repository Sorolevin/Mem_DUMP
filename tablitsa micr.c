#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int    ld = 1, gm = 1, op = 0,c = 0,a = 0 , b = 0,pi = 0 , f = 0, r = 0;


	int hard(int sl){
		int j = 0 ,p = 0;
				switch(sl){

					case 1:
						return		1+(rand() % 9 );
						break;

					case 2:
						return	1+(rand() % 50 );
						break;

					case 3:
					return  1+(rand() % 150 );

				}
			}
int 	games(  int  e , int one , int two ){

	if (  e == 5 ){
		srand(time(NULL));
		e = 1 + (rand() % 4 );
}
				switch(e){

				case 1:
					printf("+");
			return	one	+ two;
					break;
				case 2:
					printf("/");
			return	one / two;
					break;
				case 3:
					printf("*");
				return	one	*  two;
					break;
				case 4:
					printf("-");
				return one - two;
					break;
			}
	}

main( void){

printf("selection  Game ( 1 = + | 2 = / | 3 = *| 4 =  - ) 5 = mix \nand hardnes levels 1 (1 - 9) 2 ( 1 - 50(1-150)) ");
						scanf("%d %d", &gm, &pi );
			while(ld  !=  10){
				ld++;
		 f	=	hard(pi);
		r	=	hard(pi);
	op =	games(gm,  f , r  );

			printf(" how  to  %d  result %d  inter digit: " , f , r) ;

			scanf("%d", &c);
				if( op    != c){

						switch(rand() % 4 ){
							 case 0:
							printf("No. Please try again. %d\n",op);
							 	break;
							 case 1:
							 printf("Wrong. Try once more. %d\n", op );
							 	break;
							 case 2:
							 printf("Dont give up! %d\n",op);
							 	break;
							 case 3:
							printf("No.Keep trying. %d\n", op);
								break;
							}
							 	}
				else{

								 	switch( rand() % 4 ){
							 case 0:
							printf("very good %d\n",c);
							 	break;
							 case 1:
							 printf("Excelent %d\n", c );
							 	break;
							 case 2:
							 printf("Nice Work %d\n",c);
							 	break;
							 case 3:
							printf("Keep up the good work %d\n", c);
								break;
								}
							}
						}
			 return 0;
		}
