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
		void view_record(FILE  *Master , Data	client_data   );
		void  TransactionRecord(FILE *ofPTR,  Data	 client_data  ,   Data transfer );
		Data  client_data;
		Data  transfer  ;
   		FILE  *Ptr;
		   
		printf("%s", "please enter action\n1 enter data client:\n2 enter data transaction:\n3 view base\n" );
			while (		scanf("%d", &choice )  !=  -1   )  {
			   
					puts(" ");
				switch(  choice  )  {
		
						case	1:
						Ptr = fopen("blank.txt", "rb+" );
							if(Ptr == NULL ){
							puts("Not acess");	
							}
						else{
								masterWrite(  Ptr , client_data);	
								fclose(Ptr);
						}
							break;
		
							case  2:
			
			
			Ptr = fopen("blank.txt", "rb+" );
					if(Ptr == NULL ){
					puts("Not acess");	
					}
				else{
				
				
			TransactionRecord( Ptr , client_data  ,    transfer );
				fclose(Ptr);
				
					
				}
			break;	
				
			case 3:
				Ptr = fopen( "blank.txt", "rb"  );
				if(	Ptr == NULL    ){
					puts("exit");
				}
				else{
		
				view_record(Ptr ,	client_data   );
					fclose(Ptr);
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


 void TransactionRecord(FILE *ofPTR ,  Data	 client_data  ,   Data transfer ){
	double suma = 0;

	printf("%s", "please enter number and value: " );


		while (	scanf(	 "%d %lf",  &transfer.Number , &transfer.cash_payments       ) 	  !=  -1 ){
			suma	 = transfer.cash_payments;
			fseek(ofPTR,(transfer.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
		
			fread(&client_data,  sizeof(struct masterRecord ) , 1, ofPTR );
		
			
			
		
			if(suma > 0 ){
					
					if (  ( suma  + client_data.cash_payments  ) > (unsigned) client_data.indebtedness  )   {
						
						client_data.cash_payments   +=   (  suma   )      -   (unsigned) client_data.indebtedness            ;
						
						client_data.indebtedness = 0;
					
					fseek(ofPTR,(transfer.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
					fwrite(&client_data,  sizeof(struct masterRecord ) , 1, ofPTR );
					
					
					
					}
			
					else{
						client_data.indebtedness  -=        (suma  )   ;
						client_data.cash_payments = 0;
						
						fseek(ofPTR,(transfer.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
						fwrite(&client_data,  sizeof(struct masterRecord ) , 1, ofPTR );
				
					}
			}
				
				else if (suma < 0 ){
					
					   	if(   (    (client_data.cash_payments  -  (unsigned) suma  )  >    (unsigned)   client_data.indebtedness  )    ){
					   	    client_data.cash_payments 	 +=    ( suma      )           ;
					   		client_data.indebtedness  	 = 0;
					
					fseek(ofPTR,(transfer.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
					fwrite(&client_data,  sizeof(struct masterRecord ) , 1, ofPTR );
							   
							   
							   
							   }	
					   		
					   	else{
						  	
							
					client_data.indebtedness  -=    (   client_data.cash_payments   + suma	   );
					client_data.cash_payments  = 0;
					
					fseek(ofPTR,(transfer.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
					fwrite(&client_data,  sizeof(struct masterRecord ) , 1, ofPTR );
					
							       
						   
					}
				}
			printf("%s", "please enter number and value: " );
		}
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
		while(  scanf("%d%s%s%s%s%lf%lf%lf`", &Client.Number, Client.Name, Client.Surname, Client.addres, Client.TelNumber, &Client.indebtedness,	&Client.credit_limit ,		 	&Client.cash_payments    ) != -1     ){
		
			fseek(ofPTR,(Client.Number - 1 ) * sizeof(struct masterRecord ) , SEEK_SET   );	
		           	fwrite(&Client,sizeof(struct masterRecord ) , 1, ofPTR  );
		
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
 
void view_record(FILE  *Master , Data	client_data   ){
  int numb = 0;
  
  	printf("%-11s %-10s %-10s %-15s %-13s %-12s %-12s %s\n\n", "number", "name", "Surname", "addres" , "TelNumber", "credit",	"limit" , "cash"    ) ;
  
  
  while(  numb++   <= 100  ) {
	fread(&client_data,  sizeof(struct masterRecord ) , 1, Master );
		
		if(client_data.Number  != 0){
			printf("%-12d%-11s%-11s%-16s%7s%12.2f%12.2f%12.2f\n", client_data.Number, client_data.Name, client_data.Surname, client_data.addres, client_data.TelNumber, client_data.indebtedness,	client_data.credit_limit ,  client_data.cash_payments    ) ;
				}                                                     
		
		}	 
puts(" ");
}
