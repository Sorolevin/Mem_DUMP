#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>

typedef struct node{

    int  numb;
    struct node *nextPTR;

}*root;



int main(){


void random_list(root *point , int data   );
void concation( root *first, root   *second    );
void  print(root   data );
void freemem(root  *node  );

root left = NULL;
root right = NULL;


int t = 0;
int d = 0;
int l = 0;
srand( time(NULL) );


for( t = 0 ;  t<= 10  ; t++ ){
 d = (rand() % (90 + 1 - 0 ) + 0 );

random_list( &left,  d  )    ;

l = (rand() % (90 + 1 - 0 ) + 0 );
random_list( &right, l )    ;
}
print(right);
puts(" ");
print(left);

puts(" ");


 concation( &left , &right   );
puts(" ");
print(left);
freemem( &left );
freemem( &right );


print( left);
print(right);
puts(" ");



return 0;
}



void random_list(root *point , int data   ){

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












void concation( root *first, root   *second    ){

    root curPTR ;

    curPTR  = *first;


       while(curPTR->nextPTR != NULL  ){
           curPTR = curPTR->nextPTR;
        }


        curPTR->nextPTR = *second;
    }



void  print(root   data ){

				if(data != NULL ){
					
		

        while(data  != NULL){


            printf("list nick ('_')  %d\n" , data->numb   );
            data = data->nextPTR;
        }
		}
else{
	puts("exit");
    }
}



void freemem(root  *node  ){
    root  curPTR = *node;
    root  temp =  NULL ;

        while(curPTR != NULL){
            temp = curPTR;
            curPTR = curPTR->nextPTR;
            free(temp);
        }

        *node = NULL;

}
