#include<stdio.h>
#include<stdlib.h>
#include<time.h>	

	
	
	struct exercise{
		const char *description;
		double duration;
	};
	
	struct meal{
		const char *ingredients;
		float weight;
	};
	
	struct preference{
		struct meal food;
		struct  exercise tm;
	};
	
typedef	struct  {
		const char *name;
		const char *species;
		int teeth;
		int age;
		struct  preference care ;
	} fish ;




















void label( fish *a){

	printf("Name:%s\nType:%s\n%i year, %i teeth\n",
	  a->name, a->species, a->teeth, a->age);
	
	
	printf("meat %2.2f  kg %s and razreshat %s na long time %2.2f hours\n",
	
	a->care.food.weight ,   a->care.food.ingredients  ,
	a->care.tm.description,  a->care.tm.duration
	
	  );
	
	
		
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 struct card{
	 	
	 	int man[20];
	 	
	 	
	 }         ;

 fish snapp[5];
struct card kk[5];




typedef struct card Card;


void filldeck(Card * const wDeck, const char * wFace[] ,  const char * wSuit[] ) ;

void shuffle(Card * const wDeck );
void deal(const Card * const wDeck);

int main(void){

	fish snapp[0] = {"Zubastik","pyranya",69,4,{{"meat",0.2 }  ,{"kupatsya v djakuzy" , 7.5 }  }  }	;
	
	
	*kk[0].man =  12;
	printf("%d\n", *kk[0].man );

	*kk[1].man =  22;
	printf("%d\n", *kk[1].man );




		
	label(&snapp[0] );	
		
		
		
		
		
		
	
			 
			  
			  
			  
			  return 0;
	}
	
	
