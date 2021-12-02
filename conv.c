#include<stdio.h>
#include<stdlib.h>	
#include<string.h>	
	int main(void){
	void run_func(char *map[], char *fnt  , char *km , float *x ,  float *y , int line , int row , int lift    );
				
				
				
				char *long_met[3][8] = {   
	 						/* в  км. сис*/
							{"mile","0.621371"  ,  "yard","1093.61" , "fut","3280.84" , "duim","39370.1" } ,
									
							/* в фунт. сис       */
							{ "mile" ,"1.60934" , "yard","0.0009144" ,  "fut","0.0003048" ,  "duim","0.0000254"},
 			   						
							/*   метр  сис       */
							{"kilometer","1"  , "meter","1000"  ,   "stmeter","100000" ,   "mmeter","1000000" } 	
						}; 
				
				char *amount[3][4] = { 
							/* обьем в литрах  n = 1lt      */
							{ "gallon" , "0.264172" ,       "quarta" , "1.05669"     } , 
							
							/*обьем  в амер   n = 1?      */
							
							{"gallon" , " 3.78541"  ,     "quarta" , "0.946353"   },
							
							{"litr" , "1"  , "mililitr" , "1000"   }
								};
				
				char *mass[3][8] = {   
							/* масса в 1 = т   . сис*/
					    	{"eng.tonna","0.984207"  ,  "amer.tonna","1.10231" , "stone","157.473" , "funt","2204.62" } ,
   
						    /*  масс в в т = ?   сис       */
					       { "eng.tonna" , "1.101605" , "amer.tonna", "0.907185" ,  "stone","0.00635029" ,  "funt","0.000453592"},
				
				           {"tonna","1" ,         "kilogram" , "1000"  , "miligram","100000"   , "microgram","1000000"  }	
								}; 
	char **cp =  '0';
		
	char 	*buf_data;
	char	*fnt_sys;
	char    *mtr_sys;
	


	char *word[100];
	
		
	while(1){
		
		
	int bg  = 0;
    int  convert_ch = 3 ;
	int y = 0;	
	int d = 0;
	float mn =0  , xm = 0 ;
	int numb = 0;
		
	/********************************************/
		printf("%s", "enter data for converter: ");
		
		fgets(  word, 98 ,stdin);
		
		buf_data = strtok(word, " ");
		
		if( ! strcmp(buf_data, "funt.sys"   )     ){
		
		convert_ch = 0;	
		
		}
		
		else	if( ! strcmp(buf_data, "metric.sys"    )     ){
			convert_ch = 1;	
		}
	/********************************************/
		
	
		for( bg = 0 ;  buf_data != NULL;  buf_data = strtok(NULL, " ")  , bg++ ) {
			
			switch(bg){
				
			case 1:
				if( !strcmp("long_met" , buf_data  )  ){
		  			 y	= sizeof(*long_met) /  sizeof(long_met[0][0]); 
          	      	 d	= sizeof(long_met) /  sizeof(long_met[0][0]); 
		  		     cp  = &long_met[convert_ch][0]  ;
				}
		   
		    	else if(!strcmp("amount" , buf_data  ) ){
		  			 y	= sizeof(*amount) /  sizeof(amount [0][0]); 
	            	 d	= sizeof(amount) /  sizeof(amount[0][0]); 
			    	 cp = &amount[convert_ch][0] ;
				}
			 	else if(!strcmp("mass" , buf_data  ) ){
			  		 y	= sizeof(*mass ) /  sizeof(mass[0][0]); 
	         		 d	= sizeof(mass ) /  sizeof(mass[0][0]); 
			 		 cp = &mass[convert_ch][0] ; 
				}
			break;
			
		case 2:
			fnt_sys = buf_data;
			break;
			
		case 3:
			mtr_sys = buf_data;
			break;
		
		case 4:
			numb =   atoi(buf_data);
			break;
			}
		}
		
		if( !y || !d || !cp || convert_ch == 3 || !numb ){
	
			puts("error");
	
		}
	
		else{
			run_func( cp,   fnt_sys ,  mtr_sys , &mn ,  &xm , y  , d , convert_ch );
	
		if( !mn || !xm  ){
	
			puts("error");
	
		} else{
	
			printf("%.4f\n" , !convert_ch  ?    (mn  /  xm ) * numb :  (  mn  *  xm   ) * numb         );	
	
		}
			
			
		}
	
		}
	return 0;
	}
	
	void run_func(char *map[], char *fnt  , char *km , float *x ,  float *y , int line , int row  , int lift    ){
		int m ;
	
		if(  ( lift )   ){
			row    -= line;	
		}
	
	for(  m = 0 ; m <= line   ; m++){
		if(!strcmp(fnt,map[m])){
			*x = atof(map[m  + 1] )  ;
			break;
			}
		}
	
	for( m =   (row  - line) ; m <=  row - 1  ; m++){
		if( !strcmp( km   ,  map[m] ) ){
			*y = atof(map[m  + 1 ] );
			break;
				}
			}
		} 
