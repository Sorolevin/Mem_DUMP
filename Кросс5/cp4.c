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
		"гарпия","ястреб", "самоходка","снайпер","медведь","баркас","ельцин", "пушкин","рязанов","рузвельт","вагонетка","богатырь", "галстук","мебель","вождь","кобра","журналист", "валюта","кабель","реванш", 
		"фляжка","пирожок", "гайдай","люстра","соль","вантуз","дерево", "крантик","гитара","спилберг", "пижон","европа", "достоевский","самокрутка","адвокат","колыбель","калькулятор", "освальд","остановка","фикус", 
		"вавилен","мыщъх", "озборн","ильинский","пархоменко","связка","стекло", "крепеж","тайсон","мэйсон","николай","глушитель", "сапфир","служанка","стояк","пфайфер","градусник", "стамбул","маядзаки","эйзенхаур", 
		"али","колбаса", "яжевика","совок","число","кобель","ожог", "страница","ваучер","пафос", "самокат","хвостик", "дурында","пучков","дворкович","барабас","сурков", "шут","асфальт","токио", 
		"лепесток","удав", "выстрел","калибр","улов","копенгаген","осло", "калипсо","грунт","процент", "блоха","след", "пружина","монтажник","экран","боромир","оскар", "бобик","курасава","никсон", 
		"сталкер","ягодица", "глазок","шмель","геринг","монро","бондаренко", "стрела","носок","мачетэ","шпицберген","сталь", "монолит","случай","зуб","малохит","клубника", "золото","чехов","диск", 
		"форд","чубайс", "пелевин","юматов","молоток","демократия","сократ", "геродот","невзоров","сорокин","макконохи","быков", "штанга","гвоздь","весло","табурет","вопрос", "колдовство","обида","смерчь", 
		"блэкмор","тезка", "зубик","сноха","порше","тормоз","туше", "сигал","баярский","китано", "лунаход","гагарин", "синематограф","жим","электрика","веретино","шахматы", "кувшин","букварь","символ", 
		"башня","котенок", "револьвер","леннон","тигр","телефон","хамелеон", "матрас","зубр","техникс","леонов","коппола", "овчарка","ауди","сфинкс","матрос","ленин", "доберман","фролово","банан", 
		"самосвал","куба", "амстердам","клык","шпиль","мука","край", "чатский","бугур","паскаль","альпы","лодка", "транспорт","гиря","шпагат","боцман","ястреб", "игра","крыло","окно", 
		"одежда","кольцо", "монитор","гриб","тетрис","человек","обезьяна", "шахматы","кинг","эллрой","кобейн","немезида", "ванна","волонтер","эхо","икота","пена", "звук","сьемка","отстойник", 
		"мачо","конверт", "снаряд","писатель","поисковик","бегун","бетон", "коллапс","пожарник","сигнал","балоболка","свекровь", "спойлер","запас","морковь","питбуль","кемерово", "загон","юпитер","вашингтон", 
		"труба","статуя", "дверь","агрегат","мачта","корень","волчара", "корова","маскит","радзинский","канада","челюсть", "сейлормун","ньютон","дзержинский","шестерня","валькирия", "компот","адам","матрица", 
		"бетховен","пудель", "деталь","коломбо","рахит","монголия","колба", "конфета","енот","груздь","наполеон","вертухай", "сковородка","гейша","мост","гриль","комедия", "кубрик","ганапольский","паук", 
		"скороход","крым", "ротшильд","гайдар","пешка","козырь","дерижабль", "магнезия","магнум","рогатка","гайка","штопор", "перевертыш","репортаж","москва","дзедун","меньшов", "пиксель","розетка","гарем", 
		};
	void write_horizantal( int x , int y , int edge      ,char board[][Y] , char *content[300]          );
	void  removing_mask (int *x , int *y, int *lng  , char board[][Y] , char *content[PL]  , int select );
	int lng = strlen(words[0]) ;		
	int l = 0;
	int	m = 1;
	int n_x = 2   ,   n_y   =  3  ;
	int kk = 1;
	int first = 0;


/*
	 first = 1 +  rand() % 299 ;
 214
 */

 first =  109 ;

 
 printf("%d\n", first );
 
 write_horizantal( n_x ,  n_y ,   first   ,  crossboard , words       );


n_x = 2   ,   n_y   =  3  ;

kk = 0;



    while(  (n_x && n_y)  !=  0    ) {
	

	
	removing_mask(  &n_x  , &n_y , &lng  , crossboard , words , kk % 2  );
			printf("%d %d %d\n" ,n_x , n_y, kk   );
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


void  removing_mask (int *x , int *y, int *lng  , char board[][Y] , char *content[PL] , int select   ){
	
	void write_vertical( int x , int y  ,  int edge   , char board[][Y] , char *content[PL]    );
	void write_horizantal( int x , int y , int edge      ,char board[][Y] , char *content[PL]          );
	char mask_word[LN] = {0}  ;
	int checking_space_null (char board[][Y] , int mem ,int sh, int br  );
	int checking_space_one  (char board[][Y] , int mem ,int sh, int br );
	int (*chk_mask[2])(char board[][Y] , int mem ,int sh, int br ) = { checking_space_null    ,  checking_space_one  } ;
	void(*write[2])( int x , int y  , int edge      ,char board[][Y] , char *content[PL]          ) = {write_vertical,write_horizantal};
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
	
	
	
	if(	 (select == 0 && board[ shift - 1][ mem ]  == 0  )  ||  (select == 1 && board[*one_value  ][shift  - 1 ]   == 0    )){
		
		for(    pnt = 0, stp = 0;   stp  <= LN  ;stp++     ){
				   	  
				   	  
			
			if ( 	 (chk_mask[select])( board  , mem    ,   shift ,  brd  )   == 1  ||  	 board[lvl + 1][mem + 1] != 0  || 
				
					  board[lvl - 1][mem + 1]   != 0       ||	board[lvl + 1][mem - 1]  != 0  || 
					  
					  board[lvl + 1][mem + 1] != 0         
				
			
				       ){
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
	
		*x = gor  ;   
		*y = vert ;
		*lng =   strlen(content[rd ]); 
	
	if( ( *x && *y  )   !=  0 ) {
		
	
		
			( write[select])( gor   , vert  ,  rd   ,  board ,     content     );
				
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
			   
			  (         ((  in_x  + y )  > 32  )       ||      (  (  in_y  + y  ) >  32 )  )   
			  
			  
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

void write_horizantal( int x , int y , int edge      ,char board[][Y] , char *content[300]          ){
	
		int lvl = 0;
				for(lvl = 0; content[edge][lvl]  ; lvl++ , y++  ){
					board[x ][y   ]    =    content[edge][lvl]  	   ;  
			}
		 printf(" %s ", content[edge]);
		content[edge] = " ";
	
		}

void write_vertical( int x , int y ,  int edge   , char board[][Y] , char *content[300]    ){
		
		int lvl = 0;
		
			for(lvl = 0; content[edge][lvl]   ; lvl++ , x++  ){
				board[x][y   ]    =    content[edge][lvl]  	   ;  
			}
	    		 printf(" %s ", content[edge]);
			content[edge] = " ";
	   	
		}
