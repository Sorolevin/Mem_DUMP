#include<stdio.h>


	struct BodyFile{
			int 		Number;
			char 		Name[20];
			char 		Surname[20];
			char 		addres[30];
			char 		TelNumber[15];
			double  	indebtedness;
			double    	credit_limit;   
			double  	cash_payments;
	};



int main(void){
		
		int wrt = 0; 
		
			struct 	BodyFile ClientFile = 	{ 
			0,		" ",		" ",
			" ",	" ",		0.0,			
			0.0,	0.0 			
		};
		
		
		
		
		
		FILE *PTR = fopen ( "blank.txt", "wb");
		
				if( PTR  == NULL ){
				printf("%s\n %s\n %s", "!!!ERORR!!!",  "!!!ERORR!!!",  "!!!ERORR!!!" );
				}	
					else {
						for(wrt = 1 ; wrt <= 100   ; wrt++	){
							fwrite(	&ClientFile ,sizeof(struct BodyFile) , 1,  PTR	 );
						
						}
						
						fclose( PTR	);
					}
		
		
		
		
		
			
		
		
		return 0;
	}
