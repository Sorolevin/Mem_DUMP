#include<stdio.h>
	int	side(void);
	main(){
				
	side();

		return 0;
		}
	
	
	int side(void)	{
		char l = ' ';
	int y,s,j;
	     scanf("%d %d %c"	,&y	,&j	,	&l );
			for(s = 1; s <= y;  ++s){
				printf("%c", l);
			if(s % j == 0)
				printf("\n");
			}
				
	
		}
