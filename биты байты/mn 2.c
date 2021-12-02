#include<stdio.h>

		struct inventory{
		char lastName[15];
		char firstName[15];
		int customNumber;
		
		
		struct{
			char phoneNumber[11];
			char addres[50];
			char city[15];
			char state[3];
			char zipCode[6];
		}personal;
		
	}customerRecord     =   {"andrey","frolov",21,{"232154","dom12","volgad","12","543" }   }              , *ptr;
	
 

	
	
	
int main(void){
             












	ptr =  &customerRecord   ;
puts("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");
	printf("%s\n", customerRecord .firstName );
	printf("%s\n", customerRecord .lastName );
	printf("%d\n", customerRecord .customNumber );
	printf("%s\n" ,customerRecord .personal.phoneNumber);
	printf("%s\n",customerRecord .personal.addres);
	printf("%s\n" ,customerRecord .personal.city);
	printf("%s\n" ,customerRecord .personal.state);
	printf("%s\n", customerRecord .personal.zipCode);
puts("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&");	
	
	

	
	
	puts(" ");
puts("//////////////////////////////////////////////////////////////");		
	printf("%s\n", ptr->firstName );
	printf("%s\n", ptr->lastName );
	printf("%d\n", ptr->customNumber );
	printf("%s\n" ,ptr->personal.phoneNumber);
	printf("%s\n",ptr->personal.addres);
	printf("%s\n" ,ptr->personal.city);
	printf("%s\n", ptr->personal.state);
	printf("%s\n", ptr->personal.zipCode);
puts("//////////////////////////////////////////////////////////////");	
	
	return 0;
	}
