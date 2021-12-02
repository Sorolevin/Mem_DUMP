#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX   700
struct treeNode { 
    struct treeNode *leftPtr; 
    int shift;
	int data; 
    int lv;
	struct treeNode *parent;
	struct treeNode *rightPtr; 
};

void  viwi (int arch[][MAX] );
typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;


void R_insertNode( TreeNodePtr *treePtr, int value   );

void preOrder_2( TreeNodePtr treePtr  ) ;


void doOutputTree( TreeNodePtr currentPtr, int totalSpaces );





void insertNode( TreeNodePtr *treePtr, int value , TreeNodePtr temp ,int level, int base    );

void outputTree( TreeNodePtr treePtr );
void output(TreeNodePtr derevo, int step  );



int steping ( int sign , int x , int y , int arch[][MAX]  );


void preOrder( TreeNodePtr treePtr ,int square[][MAX] , int first , int shift) ;

int main(void){
	 
	 
	 
	 	int x = 0, y = 0;
		

	 
	 
	 
	 
	 
	 
	 

	 int square[MAX][MAX] ;
	 
	 
	 		for(x = 0; x <=  MAX - 1 ; x++ ){
			for(y = 0; y <= MAX - 1 ; y++ ){
		 square[x][y] = 0;
			}
	
		}
	 
	 
	 
	 int r = 1;
	 int i; 
    int item;
    TreeNodePtr rootPtr = NULL; /* tree initially empty */

    srand( time( NULL ) ); 
  

    /* insert random values between 0 and 14 in the tree */
    for ( i = 0; i <=  500; i++ ) { 
        item = 100 + rand() % 1000;
   
        insertNode( &rootPtr, item, 0 ,0 , 250 );
    } /* end for */

	
		/*
	output ( rootPtr, 1  );
	
*/	
	
	

	 
	 	preOrder( rootPtr, square, rootPtr->data, 1 ) ;
	 
	 viwi (square );
		puts(" ");	puts(" ");	puts(" ");
preOrder_2( rootPtr  );	
	puts(" ");
	puts(" ");	puts(" ");	puts(" ");	
 outputTree( rootPtr );	 		
	

}


void R_insertNode(TreeNodePtr *treePtr, int value)
{ 
   // if tree is empty
   if (*treePtr == NULL) {   
      *treePtr = malloc(sizeof(TreeNode));

      // if memory was allocated, then assign data
      if (*treePtr != NULL) { 
         (*treePtr)->data = value;
         (*treePtr)->leftPtr = NULL;
         (*treePtr)->rightPtr = NULL;
      } 
      else {
         printf("%d not inserted. No memory available.\n", value);
      } 
   } 
   else { // tree is not empty
      // data to insert is less than data in current node
      if (value < (*treePtr)->data) {                   
         R_insertNode(&((*treePtr)->leftPtr), value);   
      }                                         

      // data to insert is greater than data in current node
      else if (value > (*treePtr)->data) {                 
         R_insertNode(&((*treePtr)->rightPtr), value);     
      }                                        
      else { // duplicate data value ignored
         printf("%s", "dup");
      } 
   } 
} 

void output(TreeNodePtr derevo, int step  ){
	int m = 0;
	
	if(  derevo != NULL  ){
	
	output( derevo->rightPtr, step + 5  );
	
	for( m = 0 ; m <= step ; m++ ){
			printf(" ");
		}
	
	printf("%d\n", derevo->data );
	
	output( derevo->leftPtr, step + 5  );
	
	step+= 5;
	}
}



























void preOrder_2( TreeNodePtr treePtr  )  { 

  
    if ( treePtr != NULL ) { 
        printf( "%3d ", treePtr->data  );
        preOrder_2( treePtr->leftPtr );
        preOrder_2( treePtr->rightPtr );
    } 

}










void preOrder( TreeNodePtr treePtr ,int square[][MAX], int first ,int shift  )   { 
	int x = 0, y = 0 ; 
  
    if ( treePtr  != 0  ) { 
   
    
		 
   
   	    x =  treePtr->lv    ;				
		y  = treePtr->shift   ;
		
		
		
			if( treePtr->data == first   ){
			 square[treePtr->lv ][treePtr->shift] = treePtr->data;
			
				} 
	
		
	
		
		
	else		 if(treePtr->data > treePtr->parent->data )   {
				 x =  treePtr->lv  ;				
	           	y  = treePtr->shift  ;
		
				
			
		
				
								if( 	square[x ][y  ] == 0     ){
									square[x ][y  ] = treePtr->data;
								}		
								
								
								else {
										 steping ( treePtr->data , x, y ,  square );
								}
						
							
	
									
					
				
				
				
				
				
				
				
				
				
		
					}

	else if(treePtr->data < treePtr->parent->data )
		{
			 x =  treePtr->lv   ;				
		y  = treePtr->shift ;
		
			
			
		if( 	square[x ][y  ] == 0     ){
									square[x ][y  ] = treePtr->data;
								}		
							
								
							else   {
										 steping ( treePtr->data , x, y ,  square );
								}
				
		
			
		    
		
		}
	
	  

		
		
	
		
		
		
		
		
		
		
		
		
		     preOrder( treePtr->rightPtr,square, first  , shift + 3 );
			
	  
   
   	  	preOrder( treePtr->leftPtr ,square, first, shift + 3  );

	} 
 
}




void  viwi (int arch[][MAX] ){
	int x = 0, y = 0;
		
		for(x = 0; x <=  MAX  - 1  ; x++ ){
			for(y = 0 ; y <= MAX - 1  ; y++ ){
			

		
			printf(" %4d ", arch[x][y]   );
			
			
			
		
			
			
			}
		puts(" ");
		}

	
}

int steping ( int sign , int x , int y , int arch[][MAX]  ){
			
			
			
			
			if( arch[x][y] == 0 ){
			   arch[x][y] = sign;
			}
				
				
				
			
		if( arch[x + 8 ][y + 6 ] != 0  || arch[x + 4 ][y + 6 ]  != 0   ){
					return  steping(  sign ,  x + 8 , y + 6 , arch ) ;
				}		
				
				
				
			if( sign > arch[x][y] ){
				return  steping(  sign ,  x + 4 , y + 3 , arch ) ;
			}
				
			
	if( arch[x + 8 ][y - 6 ] != 0  || arch[x + 4 ][y - 6 ]  != 0 ){
					return  steping(  sign ,  x + 8 , y - 6 , arch ) ;
				}		
			
			
			if( sign < arch[x][y] ){
				return steping(  sign ,  x + 4 , y - 3 , arch ) ;
			}
				
				
			
				
return 0;
}




















void insertNode( TreeNodePtr *treePtr, int value , TreeNodePtr temp ,int level, int base    )
{ 
   if ( *treePtr == NULL ) {    /* *treePtr is NULL */
      *treePtr = malloc( sizeof( TreeNode ) );
	
      if ( *treePtr != NULL ) { 
         

		if(   ( *treePtr )  == temp ){
			 ( *treePtr )->parent  = NULL ; 
		
		}
		else{
			 ( *treePtr )->parent  = temp ; 
		
		}
		
		
		
	
		
		
	
			( *treePtr )->shift = base;
		
		
		( *treePtr )->lv =  level;
		( *treePtr )->data = value;
        ( *treePtr )->leftPtr = NULL;
        ( *treePtr )->rightPtr = NULL;
    
	  }
     
	  else
         printf( "%d not inserted. No memory available.\n", 
                 value );
   }
   else
      if ( value < ( *treePtr )->data ){
	 		
       	
		 insertNode( &( ( *treePtr )->leftPtr ), value, (TreeNodePtr ) ( *treePtr ) , level + 4  , base - 3  );
        }   
		  else if ( value > ( *treePtr )->data ){

		 insertNode( &( ( *treePtr )->rightPtr ), value, (TreeNodePtr ) ( *treePtr )  ,level + 4, base + 3 );
		  }
          
     
}


























void outputTree( TreeNodePtr treePtr ) {
  
  
    if( treePtr == NULL )
        return;
    else
       doOutputTree( treePtr, 0 );
}



void doOutputTree( TreeNodePtr currentPtr, int totalSpaces )
{
    int i;
    while( currentPtr != NULL )
    {
        doOutputTree( currentPtr->rightPtr, totalSpaces+5 );
        
        for( i=1; i<=totalSpaces; i++ )
            printf(" ");
        
        printf( "%d\n", currentPtr->data );
        currentPtr = currentPtr->leftPtr;
        totalSpaces += 5;
    }
}







