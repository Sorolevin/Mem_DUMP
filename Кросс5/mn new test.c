#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>
#include <ctype.h>  
#define PL 300
#define X 35
#define Y 35
#define LN 15
void main(void){ 

	setlocale( LC_ALL,"Russian" );
	
	char crossboard[X][Y] = {" "} ;  
	
	void removing_mask(int x , int y , int lng  , char board[][Y] , char *content[PL] , int action   );
	
	char *words[PL] = {
		"������","������", "���������","�������","�������","������","������", "������","�������","��������","���������","��������", "�������","������","�����","�����","���������", "������","������","������", 
		"������","�������", "������","������","����","������","������", "�������","������","��������", "�����","������", "�����������","����������","�������","��������","�����������", "�������","���������","�����", 
		"�������","�����", "������","���������","����������","������","������", "������","������","������","�������","���������", "������","��������","�����","�������","���������", "�������","��������","���������", 
		"���","�������", "�������","�����","�����","������","����", "��������","������","�����", "�������","�������", "�������","������","���������","�������","������", "���","�������","�����", 
		"��������","����", "�������","������","����","����������","����", "�������","�����","�������", "�����","����", "�������","���������","�����","�������","�����", "�����","��������","������", 
		"�������","�������", "������","�����","������","�����","����������", "������","�����","������","����������","�����", "�������","������","���","�������","��������", "������","�����","����", 
		"����","������", "�������","������","�������","����������","������", "�������","��������","�������","���������","�����", "������","������","�����","�������","������", "����������","�����","������", 
		"�������","�����", "�����","�����","�����","������","����", "�����","��������","������", "�������","�������", "������������","���","���������","��������","�������", "������","�������","������", 
		"�����","�������", "���������","������","����","�������","��������", "������","����","�������","������","�������", "�������","����","������","������","�����", "��������","�������","�����", 
		"��������","����", "���������","����","�����","����","����", "�������","�����","�������","�����","�����", "���������","����","������","������","������", "����","�����","����", 
		"������","������", "�������","����","������","�������","��������", "�������","����","������","������","��������", "�����","��������","���","�����","����", "����","������","���������", 
		"����","�������", "������","��������","���������","�����","�����", "�������","��������","������","���������","��������", "�������","�����","�������","�������","��������", "�����","������","���������", 
		"�����","������", "�����","�������","�����","������","�������", "������","������","����������","������","�������", "���������","������","�����������","��������","���������", "������","����","�������", 
		"��������","������", "������","�������","�����","��������","�����", "�������","����","������","��������","��������", "����������","�����","����","�����","�������", "������","������������","����", 
		"��������","����", "��������","������","�����","������","���������", "��������","������","�������","�����","������", "����������","��������","������","������","�������", "�������","�������","�����", 
		};
		
	int l = 15;
	int	m = 1;
	int n_x = 2   ,   n_y   =  3, kp = 0 , lo ;
	void  removing_mask_vert (int *x , int *y, int lng  , char board[][Y] , char *content[PL]  );
	void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[PL] );
	void(*set_mask[2])(int *x , int *y, int lng  , char board[][Y] , char *content[PL]) = {removing_mask_vert, removing_mask_horizont   }; 



printf("%d" ,                          sizeof ( &words[3][0] )     +   sizeof(   words [0 ] )    ) 	 ;






}

int checking_space_null (char board[][Y] , int mem ,int sh, int br , int lv ){
	int	slc = 0;

	if(      	
	 	 ( isalpha((unsigned char)  board[  ( sh   )     -  br  ][mem  -  1 ] ) || isalpha( (unsigned char)   board[  ( sh   )     -  br  ][mem  +  1 ])  ) &&    
		   
		    !isalpha ( (unsigned char)  board[  ( sh   )     -  br  ][mem ] )    )  { 
				slc = 1;
			}
return slc;
	}
	
	
	
int checking_space_one (char board[][Y] , int mem ,int sh, int br , int lv  ){
	int	slc = 0;
		if(      	
           
		   (  isalpha((unsigned char)  board[   mem  -  1   ][  ( sh   )     -  br ] ) || isalpha( (unsigned char)   board[ mem     +  1   ][      ( sh   )     -  br  ])  ) &&    
		   
		   
		    !isalpha ((unsigned char)   board[  mem    ][  ( sh   )     -  br    ] )   	
	 																 )  {
				slc = 1;
		} return slc;
	}



void  removing_mask_vert (int *x , int *y, int lng  , char board[][Y] , char *content[PL]  ){
	
	void write_vertical( int x , int y , int lng ,  int edge   , char board[][Y] , char *content[PL]    );
	char mask_word[LN] = {0}  ;
	int checking_space_null (char board[][Y] , int mem ,int sh, int br , int lv );
	int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y      );
	
	
	int sm = 0 ;
	
	int lvl   =  0;
	int shift =  0;
	int brd =  0;
	int mem =  0;
	int stp =  0;
	int mn =   0;
	int bi =   0;
	int rd =   0;
	int gor =  0 ,vert = 0;
	int pnt =  0;
	int hg  = 15;
	int	sr =   0;
	
	 
	hg  = 	  *y < LN	 ?  *y : hg    ;

	
 
		for(  mem = *y, lvl = 0    , rd = 0; lvl <= lng     ;      lvl++  ,mem++	  ){
			 	  
	 
			 	  for(brd = 0  ;   ( brd  <= hg )  ; brd++      ){
			 	  	
					
						
					
					for( shift = *x,   pnt = 0, stp = 0;   stp  <= LN  ;stp++     ){
				   	  
				   	 
				   	  
				   	  
					if ( 	  checking_space_null ( board  ,   shift,  mem  ,  brd , lvl  )   == 1     || (  isalpha( (unsigned char)   board[lvl + 1][mem - 1 ])  ||  isalpha( (unsigned char)   board[lvl + 1  ][mem + 1 ])   
					
					
					
					
				) 	){
						 pnt = 1;
					
						 
						 }
				   	  sr = shift++ -  brd;
				 	 mask_word[stp] 	 = 	board[   sr   ][mem]  ;
				}
		     
			 if(pnt == 1             ){
		     	break;
			 }
		
		sm =	search_cross_pnt( mask_word   ,&mn , content ,*x, *y )  ;
		
		
		
		if(  sm > bi  	  ){
					bi = sm    ;
				    gor   =	*x - brd;
			        vert   = 	mem;
			        rd = mn; 
			     
					}
			
				
				}
			}		 

 		if(!isalpha(board[gor - 1][ vert ]) ){
		 	write_vertical( gor   , vert  , strlen(content[rd ]) ,  rd   ,  board ,     content     );
				*x = gor ;
				*y = vert ;
	}
	  
	}


void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[PL] ){
	char mask_word[LN] = {0}  ;
	void write_horizantal( int x , int y , int lng , int edge      ,char board[][Y] , char *content[PL]          );
	
	int checking_space_one (char board[][Y] , int mem ,int sh, int br, int lv );
	
	int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y      );
	
	
	int sm = 0;
	int lvl   =  0;
	int shift =  0;
	int brd = 0;
	int mem = 0;
	int stp = 0;
	int mn = 0;
	int bi = 0;
	int rd = 0;
	int gor = 0 ,vert = 0;
	int pnt = 0;
	int hg  = 15;
	int	sr = 0;
	
	
         hg  = 	  *x < LN	 ?  *x : hg    ;
	
	
	for(  mem = *x, lvl = 0    , rd = 0; lvl <= lng     ;      lvl++  ,mem++	  ){
			 	  
			
			for(brd = 0  ;    brd  <= hg  ; brd++           ){
			 	  	
			
				for( shift = *y   ,  pnt = 0, stp = 0;   stp  <= LN  ;stp++     ){
				   	  
				   	  
				if ( 	  checking_space_one( board  , mem    ,   shift ,  brd, lvl  )   == 1  || 	(  isalpha(    board[lvl + 1][mem + 1 ])  ||  isalpha(  board[lvl - 1  ][mem + 1 ])        )  
				
				
				
				
				 )         {
						 pnt = 1;
					
					}
				   	  sr = shift++ - brd ;
				 	 mask_word[stp] 	 = 	board[    mem       ][ sr  ]  ;
				
					}
		     
					 if(pnt == 1 ){
				     	break;
					 }

				sm =  search_cross_pnt( mask_word   ,&mn , content  ,*x, *y  ) ; 

			 	if(  sm > bi   ){
					
					bi = 	sm   ;
				    
					gor   =	    mem  ; 
			        
					vert   =  *y - brd;
			        
					rd = mn; 
			     
					}
				}
			}		 
	
	
					if(!isalpha(board[gor][vert - 1]) ){
						
			
					write_horizantal( gor   , vert  , strlen(content[rd ]) ,  rd   ,  board ,     content     );
				 	*x = gor  ;
		 			*y = vert ;
				 	
					}
}

	
int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x, int in_y      ){
		int x = 0;
		int y = 0;
		int m = 0;
		int key = 0;
				
	  	for(x = 0; x <= PL - 1 ; x++){
		   for( y = strlen(content[x]  )  ,     m = 0; m <= y  ; m++      ){
		   	
			   
			   
			   if(      (   cross_point[m] !=    content[x][m] && isalpha((unsigned char)  cross_point[m]  )  )   ||    
			   
			  (         ((  in_x  + y )  >= 34  )       ||      (  (  in_y  + y  ) >=  34 )  )   
			  
			  
			   )
					{
		  		 key = 0;
				  break;
				} 
			if(  cross_point[m]  ==   content[x][m] ){
			  	key++;
			  } 
			if( m  ==  y ){
			*point = x ;
			return key ;
			}
		}
	}
	return 0;
	}

	
void write_horizantal( int x , int y , int lng , int edge      ,char board[][Y] , char *content[300]          ){
	
		int lvl = 0;
				for(lvl = 0; lvl <= lng; lvl++ , y++  ){
					board[x ][y   ]    =    content[edge][lvl]  	   ;  
			}
		 printf(" %s ", content[edge]);
		content[edge] = " ";
	
		}

void write_vertical( int x , int y , int lng ,  int edge   , char board[][Y] , char *content[300]    ){
		
		int lvl = 0;
		
			for(lvl = 0; lvl <= lng; lvl++ , x++  ){
				board[x][y   ]    =    content[edge][lvl]  	   ;  
			}
	    		 printf(" %s ", content[edge]);
			content[edge] = " ";
	   	
		}
