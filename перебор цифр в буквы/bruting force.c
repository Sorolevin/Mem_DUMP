#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define LEN 8



int main(void){
		
		
		FILE *FL ;
		
		
		
		
		int pl = 1;
		
		
		
		
		char  nmb[LEN] = " " ;
		
		int  intnumb[LEN] ;
		
		int txt_to_digit(   int numb[]   , char txt[]   );	
		
		void prindtext(  int nmn[] ,FILE *OP );
	
	
			while(pl != 0 )	{
				printf("Please enter number:");	
			
			
			fgets(nmb , LEN, stdin );
			
				
			
			
				
			if(   txt_to_digit( intnumb , nmb  )  == 1  ){
					
					
					FL  = fopen( "t.txt", "w");
					prindtext(  intnumb, FL  );
					fclose(FL);
				}
			
			else{
			
				puts(" !!! error !!! ");
			
			}
					printf("SSS:");
					scanf("%d", &pl );
				
				
				
				printf("Please enter number:");	
			
			
			fgets(nmb , LEN, stdin );
	}
		
		 
				
					
			
			
			
			
			
	
		
				
			
		
	
	return 0;
} 


int txt_to_digit(   int numb[]   , char txt[]   ){
	int pls = 0 ;
		for( pls ; pls <=  LEN  ; pls++  ){
				if(    (txt[pls] - 48 )  == 0   ||   (  txt[pls] - 48  ) == 1             )  {
					return 0;		
				
				}
				else{
						numb[pls]   =      txt[pls] - 48   ;
					}
			}
	return 1;	
}










void prindtext(  int nmn[] ,FILE *OP ){
	
	
	char *numbers [10] = {  
							"  "  , "  " ,
							 "ABC" ,  "DEF"   , "GHI"  ,
							 "JKL" ,   "MNO"  , "PRS"  , 
							 "TUV"  ,  "XYZ"
					   } ;
	
	
	
	
	
	
	
	
	
	int one =  nmn[0] ;
	int two =  nmn[1];
	int three =  nmn[2];
	int four =  nmn[3];
	int five =  nmn[4];
	int six =  nmn[5];
	int seven =  nmn[6];


	int a = 0;
	int b = 0;
	int c = 0; 
	int d = 0;
	int p = 0;
	int w = 0;
    int	x = 0; 
	int s = 0;	
		
		

				for(  a = 0 ;a <= 2   ; a++      ){
					for ( b = 0 ;b <= 2   ; b++ 	){
						for(   c = 0 ;c <= 2   ; c++  ){
							for( d = 0 ;d <= 2   ; d++ ){
								for( p = 0 ;p <= 2   ; p++ ){
									for( w = 0 ;w <= 2   ; w++ ){
										for( x = 0 ;x <= 2   ; x++ ){
									fprintf( OP ,  "%c %c %c %c %c %c %c\n"   ,  numbers[ one][a]  ,  numbers[ two][b] ,  numbers[ three][c] ,  numbers[ four][d] ,  numbers[ five][p] ,  numbers[ six][w] ,  numbers[ seven][x]       );
								}
							}
						}
					}
				}
			}
		}
	}
