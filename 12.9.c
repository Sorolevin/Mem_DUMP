#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>




typedef struct node{
	int  digit; 
	struct node  *lvl;
	
}*runner;







int main(void){
void concation( runner *first );
void pusher(runner *one , int data , int i  );
void  print(runner  data );
runner back = NULL;
runner tank = NULL;
runner bs ;
int m = 0  , k = 0 ,  s  = 0;
	srand( time(NULL) );

	for(m  =  0 ;  m <= 10  ; m++){
		
		s = (rand() % (90 + 1 - 0 ) + 0 );
		 pusher(&tank , s, 0 );
		 }
	
	print( tank);
			
		
		for(    ; tank != NULL    ; tank = tank->lvl      ){
					pusher(&back , (int) tank->digit , 1 );
			}
 		
	








puts(" ");
print(back);








	return 0;
}


void pusher(runner *one , int data , int i  ){
	
runner    cur_step =   *one;
runner    prev_step = NULL;
runner    new_step   = NULL ;
	
	
		
	new_step  = malloc(  sizeof(  runner ) );
	
			if(new_step != NULL){
				
			  new_step->digit = data;
			  new_step->lvl = NULL;	
				
			if(i == 0  ){
				
		   while(             cur_step != NULL && data > cur_step->digit     ){
				prev_step = cur_step;
				cur_step = cur_step->lvl;
				}
				
			}
			
		
				
			else {
			
			while( cur_step != NULL && data < cur_step->digit  ){
				prev_step = cur_step;
				cur_step = cur_step->lvl;
				}
				
				
			}	
				
				
				
				if( prev_step == NULL   ){
					new_step->lvl  = *one;
					*one = new_step ;
					
				}
				else{
					prev_step->lvl = new_step;
					new_step->lvl = cur_step;
					
					
				}
				
				
				
			}
	           else{
	           	puts("error");
			   }
	
	
	
	
	
	
	
	
}







void  print(runner  data ){

				if(data != NULL ){
					
		

        while(data  != NULL     ){


            printf(" number -> %d   " , data->digit  );
            data = data->lvl;
        
		}



		}


   else{

	puts("exit");

    }
}


/*

void concation( runner *first    ){
	
	
	runner   goPTR  = *first;
      
	  int   l = 1;
	
	  
	  
	  
	  runner   backPTR;

       while(goPTR->lvl != NULL  ){
           backPTR = goPTR;
		   goPTR = goPTR->lvl;
        
		}


        
        
        
    }

*/


















