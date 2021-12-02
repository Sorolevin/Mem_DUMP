#include<stdio.h>
#include<ctype.h>
int main(void){
	int my_isdigit(int p);	
	int my_alpha(int p);
	int my_isalnum(int p);
	int my_isxdigit(int p);
	int my_isupper(int p);
	int my_islower(int p);
	int my_tolower(int p);
	int my_toupper(int p);
	int my_isspace(int p);
	int my_iscntrl(int p);
	int my_ispunct(int p);
 int my_isgraph(int p);
	printf("%d" ,  my_alpha('\t')     );
	return 0;
}
		int my_isdigit(int p){
			return  (unsigned int)(p - 48) <= 9;
		}	
					
		int my_alpha(int p){
			return (p >= 65 && p <= 90 ) || (p >=  97 && p <= 122);
		}			
		
		int my_isalnum(int p){
			return 	 ( p >= 48 && p <= 57) || (p >= 65 && p <= 90) || (p >= 97 && p <= 122);
		}
		
		int my_isxdigit(int p){
			return	(p >= 48 && p <= 57) || (p >= 65 && p <= 70) || (p >=  97 && p <= 102);
		}
		
		int my_isupper(int p){
			return (p >= 65 && p <= 90 ) ;
		}
		
		int my_islower(int p){
			return   (p >=  97 && p <= 122);
		}
		
		int my_toupper(int p){
		   return    p >= 65 && p <= 90  ?  p + 32 : p   ;
		}
		
		int my_tolower(int p){
			return p >=  97 && p <= 122 ?    p - 32 :  p ;
		}
		
		int my_isspace(int p){
			return 	(unsigned int)	(p - 9 ) <= 4 || (p == 32 )    ; 
		}		
		
		int my_iscntrl(int p){
			return 	(unsigned int)	(p - 7 ) <= 6   ; 
		}	
		
		int my_ispunct(int p){
	    	return !( ( p >= 48 && p <= 57) || (p >= 65 && p <= 90) || (p >= 97 && p <= 122)) &&  (p > 1  &&  p < 127) ;	 
		}	
		
		int my_isprint(int p){
			return !((unsigned int)	(p - 7 ) <= 6) &&  (p > 1  &&  p < 127) ;
			}
		
		int my_isgraph(int p){
			return   p != 32 && !((unsigned int)	(p - 7 ) <= 6) &&  (p > 1  &&  p < 127)   ;
			}				
