#include<stdio.h>


typedef enum{
	COUNT,POUNDS,PINTS
}	unit_of_measure; 



typedef union{
	short count;
	float weight;
	float volume;
} 	quantity;







typedef struct{
	const char *name;
	const char *country;
	quantity amount;
	unit_of_measure units;
	
} fruit_order;


void display(fruit_order order)
{
	printf("this order price ");	
	
	
	if(order.units == PINTS  ){
			printf("%2.2f pint %s\n", order.amount.volume, order.name );
		}  else if(order.units == POUNDS ){
	 		printf("%2.2f pounds %s\n", order.amount.weight, order.name );
	 }  else{
	 	printf("%i %s\n", order.amount.count, order.name );	
		  }
	 		
	}

















	int main(void){
		void dislplay(fruit_order order);
		
		
		
		
		fruit_order apples = {"apples","england", .amount.count = 144, COUNT} ;
		
		fruit_order strawberries = {"strawberries","ispania", .amount.weight = 17.6, POUNDS  };
		
		
		fruit_order   oj = {"orange juice","usa", .amount.volume = 10.5, PINTS  };
		
		display(apples);
			display( strawberries );
			display(oj);
		
		
		
		
		return 0;
	}











