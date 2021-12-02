#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>
#include <ctype.h>  
#define X 35
#define Y 35

int main(void){ 

	setlocale( LC_ALL,"Russian" );
	
	char crossboard[X][Y] = {" "} ;  
	
	void removing_mask(int x , int y , int lng  , char board[][Y] , char *content[300] , int action   );
	
	char *words[300] = {
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
		
		
		/*
		
			int n_x = 2   ,   n_y   =  3 , 
		
		
		*/

	int l = 15;
	int	m = 1;
	int n_x = 2   ,   n_y   =  3, kp = 0 , lo ;
	void  removing_mask_vert (int *x , int *y, int lng  , char board[][Y] , char *content[300]  );
	void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[300] );
	void(*set_mask[2])(int *x , int *y, int lng  , char board[][Y] , char *content[300]) = {removing_mask_vert, removing_mask_horizont   }; 




for( kp = 0 ;kp !=  14  ; kp++  ){

			(*set_mask[   	 (kp % 2 )          ] )(  &n_x  , &n_y , l  , crossboard , words );
			printf("%d %d\n" ,n_x , n_y  );
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



void  removing_mask_vert (int *x , int *y, int lng  , char board[][Y] , char *content[300]  ){
	
	void write_vertical( int x , int y , int lng ,  int edge   , char board[][Y] , char *content[300]    );
	char mask_word[15] = {0}  ;
	int checking_space_null (char board[][Y] , int mem ,int sh, int br , int lv );
	int search_cross_pnt(char cross_point[15]  , int *point   ,char *content[300]   );
	
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
	
	 
	hg  = 	  *y < 15	 ?  *y : hg    ;

	if(           (  ( *x  + lng >= 0)  &&  ( *x + lng)  <= 34 )  ||    (  ( *y  + lng >= 0)  &&  ( *y + lng)  <= 34 )        ){

		for(  mem = *y, lvl = 0    , rd = 0; lvl <= lng     ;      lvl++  ,mem++	  ){
			 	  
			 
			 	  for(brd = 0  ;   ( brd  <= hg )  ; brd++      ){
			 	  	
					
					
					
					for( shift = *x,   pnt = 0, stp = 0;   stp  <= 15  ;stp++     ){
				   	  
					if ( 	  checking_space_null ( board  ,   shift,  mem  ,  brd , lvl  )   == 1    || (  isalpha (  (unsigned char)  board[lvl + 1][mem - 1])  ||  isalpha(    board[lvl + 1][mem + 1])        )      ){
						 pnt = 1;
					
						 
						 }
				   	  sr = shift++ -  brd;
				 	 mask_word[stp] 	 = 	board[   sr   ][mem]  ;
				}
		     
			 if(pnt == 1             ){
		     	break;
			 }

			if(   	 search_cross_pnt( mask_word   ,&mn , content)       > bi ){
					bi = 	 search_cross_pnt( mask_word   ,&mn , content)     ;
				    gor   =	*x - brd;
			        vert   = 	mem;
			        rd = mn; 
			     
					}
			
				
				}
			}		 
		
			if(bi  &&!isalpha(           board[gor - 1][vert] )    ){
				write_vertical( gor   , vert  , strlen(content[rd ]) ,  rd   ,  board ,     content     );
				*x = gor ;
				*y = vert ;
		}
	  }
	}


void  removing_mask_horizont (int *x , int *y, int lng  , char board[][Y] , char *content[300] ){
	char mask_word[15] = {0}  ;
	void write_horizantal( int x , int y , int lng , int edge      ,char board[][Y] , char *content[300]          );
	
	int checking_space_one (char board[][Y] , int mem ,int sh, int br, int lv );
	int search_cross_pnt(char cross_point[15]  , int *point   ,char *content[300]   );
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
	
	
         hg  = 	  *x < 15	 ?  *x : hg    ;
	
	
	 if(  (  ( *y  + lng >= 0)  &&  ( *y + lng)  <= 34 ) &&    (  (*x  + lng >= 0)  &&  (*x + lng)  <= 34 )       ){
	
	
	
	
		
		
		for(  mem = *x, lvl = 0    , rd = 0; lvl <= lng     ;      lvl++  ,mem++	  ){
			 	  
			 
			for(brd = 0  ;    brd  <= hg  ; brd++           ){
			 	  	
					
				for( shift = *y   ,  pnt = 0, stp = 0;   stp  <= 15  ;stp++     ){
				   	  
					if ( 	  checking_space_one( board  , mem    ,   shift ,  brd, lvl  )   == 1  || (  isalpha(   board[lvl + 1][mem + 1])  ||  isalpha( (unsigned char)   board[lvl - 1][mem + 1])        )         ){
						 pnt = 1;
					
					}
				   	  sr = shift++ - brd ;
				 	 mask_word[stp] 	 = 	board[    mem       ][ sr  ]  ;
				
					}
		     
					 if(pnt == 1 ){
				     	break;
					 }

			 	if(  search_cross_pnt( mask_word   ,&mn , content)       > bi ){
					
					bi = 	 search_cross_pnt( mask_word   ,&mn , content)     ;
				    
					gor   =	    mem  ; 
			        
					vert   =  *y - brd;
			        
					rd = mn; 
			     
					}
				}
			}		 
	
	
	
			if(bi  && !isalpha( board[gor ][vert  - 1 ]     )  ){
					write_horizantal( gor   , vert  , strlen(content[rd ]) ,  rd   ,  board ,     content     );
				 	*x = gor  ;
		 			*y = vert ;
				 	}
			}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
int search_cross_pnt(char cross_point[15] , int *point   ,char *content[300]   ){
		int x = 0;
		int y = 0;
		int m = 0;
		int key = 0;
				
	  	for(x = 0; x <= 299 ; x++){
		   for( y = strlen(content[x])  ,     m = 0; m <= y  ; m++      ){
		   	if(      (    cross_point[m] !=    content[x][m] && isalpha((unsigned char)  cross_point[m]  )  )      ){
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
