#include<stdio.h>
#include<stdlib.h>
#include<time.h>


typedef struct node{

    int  numb;
    struct node *nextPTR;

}*root;




int main(void){


void  print(root   data );
void random_list(root *point ,  double  data   );
root summary = NULL;


int  t= 0;
double d  =  0;





srand( time(NULL) );


for( t = 0 ;  t <= 25  ; t++ ){
 d = (rand() % (100 + 1 - 0 ) + 0 );

random_list( &summary,  d  )    ;
}

print(summary );








return 0;
}








void random_list(root *point ,  double data   ){

root  prevuisPTR = NULL;

root  curPTR = NULL;

root  newPTR = NULL;

newPTR = malloc(sizeof( root ));


                if(newPTR  != NULL){

                curPTR  = *point;
                newPTR->nextPTR =  NULL;
                newPTR->numb = data;

                    while(curPTR != NULL && data > curPTR->numb){

                        prevuisPTR  = curPTR;
                        curPTR = curPTR->nextPTR;

                    }

                    if(  prevuisPTR == NULL ){
                    newPTR->nextPTR = *point;
                    *point  = newPTR;

                    }else{
                     prevuisPTR->nextPTR = newPTR;
                     newPTR->nextPTR = curPTR;



                    }
        }

                else{

                    puts("error");
                }


}



void  print(root   data ){
	double  sum = 0;
	double ch = 0;
	
	if(data != NULL ){
					
		

        while(data  != NULL){

          ch = data->numb;
		sum  +=     data->numb ;
            	printf("-%f-\n",ch );
		
			data = data->nextPTR;
        
		
		}
		printf("summary  %f\n", sum  );
	
	
	
	
	
	}
else{
	puts("exit");
    }
}

























