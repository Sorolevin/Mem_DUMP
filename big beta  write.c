#include<stdio.h>
#include<stdlib.h>	
#include<string.h>		
	
	struct masterRecord{
			int 		Number;
			char 		Name[20];
			char 		Surname[20];
			char 		addres[30];
			char 		TelNumber[15];
			double  	indebtedness;
			double    	credit_limit;   
			double  	cash_payments;
	};
	
	typedef  struct  masterRecord Data;

	int main(void){
		int choice = 0;	
		void masterWrite(FILE *ofPTR, Data   Client       ) ;
		void transactionWrite(FILE *ofPTR, Data transfer     );
    
    void update_record(FILE  *Master , FILE *Slave , Data	client_data   );
	void blackRecord(FILE *ofPTR, FILE  *ofPTR_2 , FILE *blackrecord , Data	 client_data  ,   Data transfer );

		FILE  *Ptr;
	    FILE  *Ptr_2 ;
		FILE  *blackrecord ;
	
		Data  client_data;
		Data  transfer  ;
   		
		   
		printf("%s", "please enter action\n1 enter data client:\n2 enter data transaction:\n3 update base\n" );

		
		while (		scanf("%d", &choice )  !=  -1   )  {
			
		
		switch(  choice  )  {
			
			
			
			case	1:
				Ptr = fopen("record.dat", "r+" );
					if(Ptr == NULL ){
					puts("Not acess");	
					}
				else{
						masterWrite(  Ptr , client_data);	
						fclose(Ptr);
					
				}
				
				
				break;
			
			
			case    2:
		    
			
			
			
			
			
				Ptr = fopen("transaction.dat", "r+" );
					if(Ptr == NULL ){
					puts("Not acess");	
					}
				else{
					transactionWrite( Ptr, transfer     );
					fclose(Ptr);
					
						}
				
				
			Ptr = fopen( "record.dat", "r"  );
			Ptr_2 = fopen("transaction.dat", "r" );
			blackrecord = fopen("blackrecord.dat", "w" );	
			
			if(	Ptr == NULL ||  	Ptr_2 == NULL ||  		blackRecord == NULL      ){
					puts("exit");
				}
				else{
					
				blackRecord( Ptr, Ptr_2 , blackrecord  , client_data  ,    transfer );
				fclose(Ptr);
				fclose(Ptr_2);	
				fclose(blackrecord);
					
				}
				
				
		
				
				
				
				break;	
				
			case 3:
			
			
			Ptr = fopen( "blackrecord.dat", "r"  );
		
			blackrecord = fopen("record.dat", "w" );	
			
			if(	Ptr == NULL ||  		blackRecord == NULL      ){
					puts("exit");
				}
				else{
					
				
	 update_record(blackrecord  , 		Ptr ,	client_data   );
			
			
				
				
				fclose(Ptr);
			
				fclose(blackrecord);
					
				}
					
					
					
					
			
					break;
				default:
				puts("error");
				break ;
			}
 	printf("%s", "please enter action\n1 enter data client:\n2 enter data transaction:\n3 update base\n" );
		}


		return 0;	
	}

	
	void masterWrite(FILE *ofPTR , Data   Client       )  {
	
		printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n",  
				"1 Number account: ",
				"2 Client name: ",
				"3 Surname: ",
				"4 Addres client: ",
				"5 Client Telnum: ",
				"6 Client indebtedness: ",
				"7 Client credit limit: ",
				"8 Client cash payments: "
										);
		while(  scanf("%d%s%s%s%s%lf%lf%lf", &Client.Number, Client.Name, Client.Surname, Client.addres, Client.TelNumber, &Client.indebtedness,	&Client.credit_limit ,		 	&Client.cash_payments    ) != -1     ){
		
		fprintf( ofPTR, "%-12d%-11s%-11s%-16s%20s%12.2f%12.2f%12.2f\n", Client.Number, Client.Name, Client.Surname, Client.addres, Client.TelNumber, Client.indebtedness,	Client.credit_limit ,		 	Client.cash_payments    ) ;
		
		printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n",  
				"1 Number account: ",
				"2 Client name: ",
				"3 Surname: ",
				"4 Addres client: ",
				"5 Client Telnum: ",
				"6 Client indebtedness: ",
				"7 Client credit limit: ",
				"9 Client cash payments:"
										);
				}
}
 	
	void transactionWrite(FILE *ofPtr, Data transfer     ){
	int cheking_transaction( FILE *bsPtr , int numb     );	 
	FILE	 *INptr = fopen("record.dat", "r"  );

		
		
		
			
		
		
		
	
			printf("%s\n%s\n",  
			"1 Number account: ",
			"2 Client cash payments: "
									);
			
			while(scanf("%d %lf" , &transfer.Number  , &transfer.cash_payments )   != -1      ){
					
					
					
			if( cheking_transaction( INptr,   transfer.Number   ) == 1                    ){
				
				fprintf( ofPtr, "%-4d%-6.2f\n", transfer.Number, 		transfer.cash_payments    ) ;
			
				
				
			
			}		
			else{
				puts("Unmathched transaction record for account number ...");
			
			}	
				
			
				
					printf("%s\n%s\n",  
						"1 Number account:",
						"2 Client cash payments: "
												);
				
				
				
			
			}

		fclose(INptr);	
	}

void blackRecord(FILE *ofPTR, FILE  *ofPTR_2 , FILE *blackrecord , Data	 client_data  ,   Data transfer ){
	double suma = 0;
	       

		
		while(	
		fscanf( 	ofPTR  , "%d%s%s%s%s%lf%lf%lf",  &client_data.Number ,  client_data.Name  ,      client_data.Surname   , client_data.addres, client_data.TelNumber, &client_data.indebtedness, &client_data.credit_limit, &client_data.cash_payments)   != -1 )  {
		
		while (	fscanf(	ofPTR_2 , "%d %lf",  &transfer.Number , &transfer.cash_payments       ) 	  !=  -1 ){
				
				if(     client_data.Number     ==   transfer.Number   &&  transfer.cash_payments != 0         ){
				
				
			suma	 = transfer.cash_payments;
			
			
				if(suma > 0 ){
					
					if (  ( suma  + client_data.cash_payments  ) > (unsigned) client_data.indebtedness  )   {
						
						client_data.cash_payments   +=   (  suma  + client_data.cash_payments  )      -   (unsigned) client_data.indebtedness            ;
					
						client_data.indebtedness = 0;
					
					
						
						}
			
					else{
					 
					 
					 
					 
					 	client_data.indebtedness  -=        (suma  )   ;
					 
					 	client_data.cash_payments = 0;
							
							}
					}
					
				else if (suma < 0 ){
					   
					   	if(   (    (client_data.cash_payments  -  (unsigned) suma  )  >    (unsigned)   client_data.indebtedness  )    ){
					   	    client_data.cash_payments 	 +=    ( suma      )           ;
					   		client_data.indebtedness  	 = 0;
				}	
					   		
					   	else{
						  	
							
								client_data.indebtedness  -=    (   client_data.cash_payments   + suma	   );
					   			client_data.cash_payments  = 0;
					       
						   
						   }
					}
			
	
				
				
				
				
				
				
				
				
				} 
				
			}
			fprintf(blackrecord   ,"%-12d%-11s%-11s%-16s%7s%12.2f%12.2f%12.2f\n", client_data.Number, client_data.Name, client_data.Surname, client_data.addres, client_data.TelNumber, client_data.indebtedness,	client_data.credit_limit ,  client_data.cash_payments    ) ;
			rewind(	ofPTR_2 );
		}
	}	
	
	
	
	
	
	
	
	
int cheking_transaction( FILE *bsPtr , int numb     ){
	Data origin;
	
		while( 	fscanf( 	bsPtr  , "%d%s%s%s%s%lf%lf%lf",  &origin.Number ,   origin.Name  ,      origin.Surname   ,  origin.addres,  origin.TelNumber, &origin.indebtedness, &origin.credit_limit, &origin.cash_payments)   != -1 )         {
			if( origin.Number == numb  ){
				return 1;
			}

		

}
rewind(	bsPtr);
return 0;
}









void update_record(FILE  *Master , FILE *Slave , Data	client_data   ){

	while(  fscanf(   Slave, "%d%s%s%s%s%lf%lf%lf",  &client_data.Number ,  client_data.Name  ,      client_data.Surname   , client_data.addres, client_data.TelNumber, &client_data.indebtedness, &client_data.credit_limit, &client_data.cash_payments)   != -1) {
	                                                          
			fprintf(Master  ,"%-12d%-11s%-11s%-16s%7s%12.2f%12.2f%12.2f\n", client_data.Number, client_data.Name, client_data.Surname, client_data.addres, client_data.TelNumber, client_data.indebtedness,	client_data.credit_limit ,  client_data.cash_payments    ) ;
		
		}
}
