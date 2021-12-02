#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 
int	main(void){
	char *p, l[100]  = " ";
		long func_strtol(char *p , char  **cpyar  , int  type ) , x = 0 ,m = 0 , r = 0 ;
		/*
		printf("please enter data and base numeral system:");
		
		scanf("%s %d", &l , &r  );	
			*/

	
		printf("%s %ld" , p  ,  	strtoul(  "123456face" , &p, 16 )  ) ;		
	
		return 0;
	}
long func_strtol(char *p , char  **cpyar  , int type    ){
    long int  result = 0, stp =	0, t = 0,step  = 0,	 integer = 0, sign = 1;
   	if (*p == 45 ){ 
	   	sign = -1;
		step++;
	} 
	else if(*p ==  43){
			step++;
	}
    if (!type ){
       	type = 10;
	   }
	if( type >= 0 &&  type <= 10 ) {
		while ( isdigit(  p[step]))  {
			step++;
			}
		}
	else if( type >= 11 &&  type <= 36 ) {
		while( ((p[step ] -  55  <= ( type - 1 )  ||  (p[step ] -  87  <= ( type - 1) ) )  &&  isalpha(  p[step] )   ||    isdigit(  p[step]) ) )  {
				step++; 
			}
		}
		stp =  step - 1;
	while( isalpha(  p[stp]    )   ||    isdigit(  p[stp] )){
		if( isalpha(  p[stp]    )  ){
				integer +=  p[stp] >= 97 ? (p[stp] - 87) *  pow(type,t) : (p[stp] - 55) *  pow(type,t);
	
		}
		else if((p[stp] - 48 ) < type ){
				 	integer +=  (p[stp] - 48) *  pow( type, t );
				}
				 stp--;
				 t++;
		    } 
	    *cpyar =   step == 1  && *p == '-'  ? &p[step - 1]: &p[step];
		result =  (integer )  * sign;
  return    result ;
}
