#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define PL 300
#define X 35
#define Y 35
#define LN 15
int main(void){ 
	srand(time(NULL));
	setlocale( LC_ALL,"Russian" );
	void write_vertical( int x , int y     , char board[][Y] , char *content    );
	void write_horizantal( int x , int y      ,char board[][Y] , char *content          );
	void(*write[2])( int x , int y        ,char board[][Y] , char *content         ) = {write_vertical,write_horizantal};
	int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y      );
	int checking_space_null (char board[][Y] , int mem ,int sh, int br  );
	int checking_space_one  (char board[][Y] , int mem ,int sh, int br );
	int (*chk_mask[2])(char board[][Y] , int mem ,int sh, int br ) = { checking_space_null    ,  checking_space_one  } ;
	int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y  ) ;
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
int  removing_mask (int *x , int *y, int *lng , char board[][Y], 
					char *content[PL], int select, void   (*write  )( int x , int y   ,char board[][Y],
					char *content ),
					int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y) ,     
					int (*chk_mask )(char board[][Y] , int mem ,int sh, int br ) );      
	int l = 0;
	int	m = 1;
	int n_x = 2   ,   n_y   =  3  ;
	int kk = 0;
  	int first =  267 ; 
	int lng = strlen(words[first]) ;	
	write_horizantal( n_x ,  n_y    ,  crossboard , words[first]       );  
	words[first]   = " ";
	kk = 0;
	n_x = 2   ,   n_y   =  3,  kk = 0  ,    	removing_mask(  &n_x  , &n_y , &lng  , crossboard , words , kk % 2 , write[kk % 2] , search_cross_pnt , chk_mask[kk % 2]   )  ;
	for( ; removing_mask(  &n_x  , &n_y , &lng  , crossboard , words , kk++ % 2  , write[kk % 2] , search_cross_pnt , chk_mask[kk % 2]   )  ;) ;
    for( m = 0 ;m <= X - 1 ; m++, puts(" ")   ){
			for(l = 0 ;l <=   Y  - 1 ;  l++ ){
					     printf("%c " ,  crossboard[m][l]  , m  )  ;	
				}
		}
return 0;
}
int checking_space_null (char board[][Y] , int mem ,int sh, int br  ){
	int	slc = 0;
	if( ( board[  ( sh   )     -  br  ][mem  -  1 ] != 0   ||    board[  ( sh   )     -  br  ][mem  +  1 ] != 0     ) &&    
		   board[  ( sh   )     -  br  ][mem ]  == 0    )  { 
				slc = 1;
			}
return slc;
	}

int checking_space_one (char board[][Y] , int mem ,int sh, int br ){
	int	slc = 0;
		if( (   board[   mem  -  1   ][  ( sh   )     -  br ] != 0  ||   board[ mem     +  1   ][      ( sh   )     -  br  ] != 0     ) &&    
		   board[  mem    ][  ( sh   )     -  br    ] == 0   	
	 																 )  {slc = 1;
		} return slc;
	}
int  removing_mask (int *x , int *y, int *lng  , char board[][Y], 
					char *content[PL] , int select, void   (*write  )( int x , int y  ,char board[][Y],
					char *content)  , int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x , int in_y) , 
					int (*chk_mask )(char board[][Y] , int mem ,int sh, int br )
					   ){
	char mask_word[LN] = {0}  ;
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
	int ctr = 0;
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
			if ( 	 chk_mask  ( board  , mem    ,   shift ,  brd  )   == 1   ){
					pnt = 1;
					break;
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
	if(  (select == 1 &&  isalpha(board[gor][vert -  1]  ) ||
	    select == 0 &&  isalpha(board[gor - 1 ][vert]    )   ||
		( gor && vert  )   ==  0 
		) ) { 
	ctr = 1;
}
	if(  ( (    content[rd]   != " " ) )  && 
		( board[gor ][vert ]  ==  content[rd][0] || !isalpha (board[gor ][vert ]  )  ) 
		&& !ctr ) {
		*x = gor  ;   
		*y = vert ;
		*lng =   strlen(content[rd ]); 
		write( gor   , vert    ,  board ,     content[rd]     );
		content[rd] = " ";
		return 1 ;
}
	else   {
		return 0;
	}
}
int search_cross_pnt(char cross_point[LN] , int *point   ,char *content[PL] , int in_x, int in_y      ){
		int x = 0;
		int y = 0;
		int m = 0;
		int key = 0;
		for(x = 0; x <= PL - 1 ; x++)  {
		   for( y = strlen(content[x]  )  ,     m = 0; m <= y  ; m++      ){
		   	if(      (   *(cross_point + m ) !=    *(*(content + x ) + m )       &&    *(cross_point + m )  != 0   )   ||    
			   (         ((  in_x  + y )  > 33  )       ||      (  (  in_y  + y  ) >  33 )  )   )
				{key = 0;break;
				} 
		if(   *(cross_point + m )  ==    *(*(content + x ) + m )){
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
void write_horizantal ( int x , int y      ,char board[][Y] , char *content         ){
				while( *content  ){
				*( *(board + x) + y++ )   =    *content++   	   ;  
			}
		}
void write_vertical( int x , int y  , char board[][Y] , char *content   ){
		while(    *content  ){
					*( *(board + x++ ) + y)     =    *content++   ;  
			}
		}
