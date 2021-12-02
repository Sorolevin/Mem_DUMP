#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>
#include <ctype.h>  
#define PL 300
#define X 35
#define Y 35
#define LN 15
int main(void){ 

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

	void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[PL]  , int select );

	int kk = 1;



while(kk != 100  ){
	removing_mask_horizont(  &n_x  , &n_y , l  , crossboard , words , kk % 2  );
			printf("%d %d\n" ,n_x , n_y  );
kk++;
}

		 
	
	for( m = 0 ;m <= X - 1 ; m++ ){
			
			puts(" ");
		
				for(l = 0 ;l <=   Y  - 1 ;  l++ ){
					     printf("%c " ,  crossboard[m][l]  , m  )  ;	
				}
		}


return 0;
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




void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[PL] , int select   ){
	char mask_word[LN] = {0}  ;
	
	void write_vertical( int x , int y , int lng ,  int edge   , char board[][Y] , char *content[PL]    );
	void write_horizantal( int x , int y , int lng , int edge      ,char board[][Y] , char *content[PL]          );
	
	
	
	
	int checking_space_null (char board[][Y] , int mem ,int sh, int br , int lv );
	int checking_space_one (char board[][Y] , int mem ,int sh, int br, int lv );
	
	int (*chk_mask[2])(char board[][Y] , int mem ,int sh, int br, int lv ) = { checking_space_null    ,  checking_space_one  } ;
	
	void(*write[2])( int x , int y , int lng , int edge      ,char board[][Y] , char *content[PL]          ) = {write_vertical,write_horizantal};
	

	int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y      );
	
	
	int sm = 1;
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
	int *one_value = 0  , *second_value = 0;
	
    
	
	if(select == 0 ){
	  hg  = 	  *y < LN	 ?  *y : hg    ;
		
		 mem = *y;
	}
	else if (select == 1){
	
				  hg  = 	  *x < LN	 ?  *x : hg    ;
		mem = *x;
	}
	
	
	for(   lvl = 0     ,rd = 0; lvl <= lng     ;      lvl++  ,mem++	  ){
		 
			
			for(brd = 0  ;    brd  <= hg  ; brd++           ){
			 	  	
			
		for(   select == 0 ? ( shift = *x ,    one_value = &sr ,   	second_value  =  &mem) :  (shift = *y    ,      one_value = &mem ,   	second_value  = &sr  )  , pnt = 0, stp = 0;   stp  <= LN  ;stp++     ){
				   	  
				   	  
				   	  
				   	  
				   	  /*    ������ ���  */
				if ( 	  (chk_mask[select])( board  , mem    ,   shift ,  brd, lvl  )   == 1  || (  isalpha(   board[lvl + 1][mem + 1])  &&  isalpha( (unsigned char)   board[lvl - 1][mem + 1])        )  
							&&  (  isalpha (  (unsigned char)  board[lvl + 1][mem - 1])  ||  isalpha(    board[lvl + 1][mem + 1])        )  
				
				
				       ){
						 pnt = 1;
					
					}	
					

				   	 sr = shift++ - brd ;
					  mask_word[stp] 	 = 	board[    	*one_value      ][ 	*second_value   ]  ;
				
					}
		     
					 if(pnt == 1 ){
				     	break;
					 }

				sm =  search_cross_pnt( mask_word   ,&mn , content  ,*x, *y  ) ; 

			 	if(  sm > bi   ){
					
				
				    select == 0 ? (  gor   =	*x - brd, vert   = 	mem)	: (gor   =	    mem  ,vert   =  *y - brd) ; 
			        
					bi = 	sm   ;
				    	rd = mn; 
			     
			     
					}
				}
			}		 

	if(bi  &&  (!isalpha( board[gor ][vert  - 1 ] )   ||   !isalpha(           board[gor - 1][vert] )   )  ){
		
			
			( write[select])( gor   , vert  , strlen(content[rd ]) ,  rd   ,  board ,     content     );
			
			
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
