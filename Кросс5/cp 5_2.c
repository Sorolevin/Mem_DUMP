#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#define PL 300
#define X 35
#define Y 35
#define LN 15
int main(void){ 
	srand(time(NULL));
	setlocale( LC_ALL,"Russian" );
	char crossboard[X][Y] = {" "} ;  
	char *words[PL] = {
		"������","������", "���������","�������","�������","������","������", "������","�������","��������","���������","��������", "�������","������","�����","�����","���������", "������","������","������", 
		"������","�������", "������","������","����","������","������", "�������","������","��������", "�����","������", "�����������","����������","�������","��������","�����������", "�������","���������","�����", 
		"�������","�����", "������","���������","����������","������","������", "������","������","������","�������","���������", "������","��������","�����","�������","���������", "�������","��������","���������", 
		"���","�������", "�������","�����","�����","������","����", "��������","������","�����", "�������","�������", "�������","������","���������","�������","������", "���","�������","�����", 
		"��������","����", "�������","������","����","����������","����", "�������","�����","�������", "�����","����", "�������","���������","�����","�������","�����", "�����","��������","������", 
		"�������","�������", "������","�����","������","�����","����������", "������","�����","������","����������","�����", "�������","������","���","�������","��������", "������","�����","����", 
		"����","������", "�������","������","�������","����������","������", "�������","��������","�������","���������","�����", "������","������","�����","�������","������", "����������","�����","������", 
		"�������","�����", "�����","�����","�����","������","����", " �����","��������","������", "�������","�������", "������������","���","���������","��������","�������", "������","�������","������", 
		"�����","�������", "���������","������","����","�������","��������", "������","����","�������","������","�������", "�������","����","������","������","�����", "��������","�������","�����", 
		"��������","����", "���������","����","�����","����","����", "�������","�����","�������","�����","�����", "���������","����","������","������","�������", "����","�����","����", 
		"������","������", "�������","����","������","�������","��������", "�������","����","������","������","��������", "�����","��������","���","�����","����", "����","������","���������", 
		"����","�������", "������","��������","���������","�����","�����", "�������","��������","������","���������","��������", "�������","�����","�������","�������","��������", "�����","������","���������", 
		"�����","������", "�����","�������","�����","������","�������", "������","������","����������","������","�������", "���������","������","�����������","��������","���������", "������","����","�������", 
		"��������","������", "������","�������","�����","��������","�����", "�������","����","������","��������","��������", "����������","�����","����","�����","�������", "������","������������","����", 
		"��������","����", "��������","������","�����","������","���������", "��������","������","�������","�����","������", "����������","��������","������","������","�������", "�������","�������","�����", 
		};
	void write_horizantal( int x , int y , int edge      ,char board[][Y] , char *content[300]          );
	int  removing_mask (int *x , int *y, int *lng  , char board[][Y] , char *content[PL]  , int select );
	int lng = strlen(words[0]) ;		
	int l = 0;
	int	m = 1;
	int n_x = 2   ,   n_y   =  3  ;
	int kk = 1;
	int first = 0;

/*
204
! 34
28
73
221
121 
97
142 
29
44
148
 267 
   3 
298
143 = 143
75
 267

rand() % 299
*/












	
	  first = 1 +  rand() % 299 ;




 
 printf("first number  %d\n", first );
 
 
 write_horizantal( n_x ,  n_y ,   first   ,  crossboard , words       );  
kk = 1;
puts(" ");




n_x = 2   ,   n_y   =  3,  kk = 0  ,    	removing_mask(  &n_x  , &n_y , &lng  , crossboard , words , kk % 2  ) ,	printf("\t%d %d %d\n" ,n_x , n_y, kk   )                ;





    for( ; removing_mask(  &n_x  , &n_y , &lng  , crossboard , words , kk++ % 2  )  ; 	printf("\t%d %d %d\n" ,n_x , n_y, kk   ) ) {
    		
			if(kk> 35 ){
    			puts(" ");
				puts("exit");
    			break;
			}
	}
	
		
	
for( m = 0 ;m <= X - 1 ; m++, puts(" ")   ){
			for(l = 0 ;l <=   Y  - 1 ;  l++ ){
					     printf("%c " ,  crossboard[m][l]  , m  )  ;	
				}
		}
return 0;
}

int checking_space_null (char board[][Y] , int mem ,int sh, int br  ){
	int	slc = 0;

	if(      	
	 	 (          board[  ( sh   )     -  br  ][mem  -  1 ] != 0   ||    board[  ( sh   )     -  br  ][mem  +  1 ] != 0     ) &&    
		   
		  board[  ( sh   )     -  br  ][mem ]  == 0    )  { 
				slc = 1;
			}
return slc;
	}

int checking_space_one (char board[][Y] , int mem ,int sh, int br ){
	int	slc = 0;
		if(      	
           
		   (   board[   mem  -  1   ][  ( sh   )     -  br ] != 0  ||   board[ mem     +  1   ][      ( sh   )     -  br  ] != 0     ) &&    
		   
		   
		     board[  mem    ][  ( sh   )     -  br    ] == 0   	
	 																 )  {
				slc = 1;
		} return slc;
	}


int  removing_mask (int *x , int *y, int *lng  , char board[][Y] , char *content[PL] , int select   ){
	void write_vertical( int x , int y  ,  int edge   , char board[][Y] , char *content[PL]    );
	void write_horizantal( int x , int y , int edge      ,char board[][Y] , char *content[PL]          );
	char mask_word[LN] = {0}  ;
	int checking_space_null (char board[][Y] , int mem ,int sh, int br  );
	int checking_space_one  (char board[][Y] , int mem ,int sh, int br );
	int (*chk_mask[2])(char board[][Y] , int mem ,int sh, int br ) = { checking_space_null    ,  checking_space_one  } ;
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
	void(*write[2])( int x , int y  , int edge      ,char board[][Y] , char *content[PL]          ) = {write_vertical,write_horizantal};
    
	
	if(select == 0 ){
	
	  mem = *y;
	  hg  = 	  *y < LN	 ?  *y : hg    ;
		
	}
	else   {
	
		mem = *x;
		hg  = 	  *x < LN	 ?  *x : hg    ;
	
	}
	
	
	for(   lvl = 0     ,rd = 0; lvl <= *lng  - 1    ;      lvl++  ,mem++	  ){
		 
			
			for(brd = 0  ;    brd  <= hg  ; brd++           ){
			 	  	
			 select == 0 ? ( shift = *x ,    one_value = &sr ,   	second_value  =  &mem) :  (shift = *y       ,  one_value = &mem ,   	second_value  = &sr  ) ;
	
	
	
	if(	 (select == 0 && board[ shift - 1][ *second_value ]  == 0  )  ||  (select == 1 && board[*one_value  ][shift  - 1 ]   == 0    )){
		
		for(    pnt = 0, stp = 0;   stp  <= LN  ;stp++     ){
				   	  
				   	  
			
			if ( 	 (chk_mask[select])( board  , mem    ,   shift ,  brd  )   == 1   ){
						 pnt = 1;
					}	
					
					sr = shift++ - brd ;
					mask_word[stp] 	 = 	board[    	*one_value      ][ 	*second_value   ]  ;
				}
		     
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
	
	if( ( gor && vert  )   ==  0 ) {
		return 0;
		
		}
	else   {
		*x = gor  ;   
		*y = vert ;
		*lng =   strlen(content[rd ]); 
		
			( write[select])( gor   , vert  ,  rd   ,  board ,     content     );
				
			printf(  !select  ?  "%10s  %3u\t vertical"     :   "%10s  %3u\t horizantal"  , content[rd] , rd );
				
				content[rd] = " ";
				return 1 ;
	}
}

int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x, int in_y      ){
		int x = 0;
		int y = 0;
		int m = 0;
		int key = 0;
				
	  	for(x = 0; x <= PL - 1 ; x++){
		   for( y = strlen(content[x]  )  ,     m = 0; m <= y  ; m++      ){
		   	
			   
			   
			   if(      (   cross_point[m] !=    content[x][m] &&     cross_point[m]  != 0   )   ||    
			   
			  (         ((  in_x  + y )  > 31  )       ||      (  (  in_y  + y  ) >  31 )  )   
			  
			  
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

void write_horizantal ( int x , int y , int edge      ,char board[][Y] , char *content[]          ){
			for(int lvl = 0; content[edge][lvl]  ;  y++  ){
					board[x ][y   ]    =    content[edge][lvl++]  	   ;  
			}
		}

void write_vertical( int x , int y ,  int edge   , char board[][Y] , char *content[]    ){
		for(    int    lvl = 0; content[edge][lvl]   ;  x++  ){
				board[x][y   ]    =    content[edge][lvl++]  	   ;  
			}
		}
