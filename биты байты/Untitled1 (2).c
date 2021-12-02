#include <stdio.h>
#define P 8 
#include <limits.h>
void packed (char a, char b , 	unsigned int *pm   ){
	void view ( unsigned alpha  );
					
			*pm = a;
	
			
			*pm =     b  |  (*pm << 8 );
	  

}



void unpacked (int *a, int *b , 	unsigned int pm   ){
				void view ( unsigned alpha  );
				
				
				
				*a =  ((pm  &   65280  ) >> 8   ) ; 
					printf("string unpacked 1\t")	, view ( *a  );
				*b = ((pm  &   255     )    );
					printf("string unpacked 2\t")	, view ( *b  );	 
		
			
					
			

}




void packed_4 (char a, char b   ,  char c  ,  char e  , 	unsigned int *pm   ){

void view ( unsigned alpha  );

	*pm =        a           ;
    

	
	 *pm =        (*pm << P )     |    b     ;		
	
	
	*pm =                 (*pm << P ) |   c       ;	
	

	*pm =       (*pm << P )    |    e        ;		
	 


	












	/*

   *pm  = e | (  (  c | (   (b |    (a << P )  ) << P)    ) << P);


 	*/	

}	
	
	
	

	
	
	#include <limits.h>

int pack(char a, char b, char c, char d)
{
   int   p = a;     /* p will be packed with a, b, c, d */

   p = (p << CHAR_BIT) | b;
   p = (p << CHAR_BIT) | c;
   p = (p << CHAR_BIT) | d;
   return p;
}



/* Unpack a byte from an int */



char unpack(int p, int k)               /* k = 0, 1, 2, or 3 */
{
   int        n = k * CHAR_BIT;         /* n = 0, 8, 16, or 24 */
   unsigned   mask = ((1<<CHAR_BIT)-1); /* low-order byte */

   mask <<= n;
   return ((p & mask) >> n);
}















 
void unpacked_4 (int *a, int *b ,   int *c  ,  int *e ,	unsigned int pm   ){
			void view ( unsigned alpha  );
			
					
				
				
				
				
	*a =  ((pm  &    0xff000000) >>  24  );	
	view ( 	*a   );
	*b =  ((pm  &    0xff0000  ) >>  16  );		 
	view ( 	*b   );
	*c =  ((pm  &    0xff00    ) >> 8  );	
	view ( 	*c   );
	*e =  (pm  &     0xff        );
		view ( 	*e   );
		
			
					
			

}

















void view ( unsigned alpha  ){
	unsigned c ; 
	unsigned dp_mask = 1 << 31;
	
	for(c = 1; c <= 32 ;c++ ){
		putchar(   alpha & dp_mask ? '1' : '0' );
		alpha <<= 1;
		if(c % 4 == 0){
			putchar(' ');
		}
		
	}
	puts(" ");
		puts(" ");
}


 
int main(void)
{
	void packed (char a, char b , 	unsigned int *pm   );
void view ( unsigned alpha  );
	
	void unpacked_4 (int *a, int *b ,   int *c  ,  int *e ,	unsigned int pm   );
	void packed_4 (char a, char b   ,  char c  ,  char e  , 	unsigned int *pm   );
	
	
	
	
	
	
	
	unsigned int alpha = 0;
	int  one_a = 0; 
	int  two_b = 0;
	
	
	int  one_c = 4; 
	int  two_e = 4;
	char l, f, s, w; 
	
	
	
	
	
	
	scanf( "%c %c %c %c" , &l , &f , &s, &w                      );
	
	
	packed_4 ( l, f , s  , w , &alpha     );
	


	 unpacked_4 ( &one_a,  &two_b ,  &two_e  , &one_c ,   alpha   );
	

	
			printf("%c %c %c %c" , one_a , two_b   ,  two_e  , one_c     );
	
	puts(" ");
	
 

    return 0;
}









/*

long long  int pop(unsigned x) {
unsigned long long y;
y = x * 0x0002000400080010ULL;
y = y & 0x1111111111111111ULL;
y = y * 0x1111111111111111ULL;
y = y >> 60;
return y;
}*/
