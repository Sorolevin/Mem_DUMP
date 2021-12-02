#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define  MAX  35
int main(void) {
	int ext_lab(int row , int col , int exrow, int excol, int lab[][MAX] ,int stp );	int s,d, s_out, d_out;
	int wave(int lab[][MAX] ,int row , int col ,  int exrow , int excol ,int d  );
	void create_lab(	int  lab[][MAX]);
	void gen_entrance_exit(int lab[][MAX] , int *x , int  *y ,  int *x_out , int *y_out  );
	void view_lab(	int  lab[][MAX]); int lb[MAX][MAX]  ;	 	void	gen_lav(int lab[][MAX]);	void step_lab(int lab[][MAX] , int row , int  col  );
	srand(time(0));		
	int ext_lab(int row, int col,int exrow, int excol, int lab[][MAX], int stp);
		create_lab(lb);
		gen_lav( lb );
		gen_entrance_exit(lb , &s, &d, &s_out, &d_out  );
	while(lb[s_out][d_out] == 0	){
		create_lab(lb);
		gen_lav( lb );
		gen_entrance_exit(lb , &s, &d, &s_out, &d_out  );
		wave(lb  ,s, d ,s_out,d_out  , 0 );	
		ext_lab( s , d ,s_out, d_out, lb , 1 ); 
}		lb[s_out][d_out] = 1;
		view_lab(lb);	
	return 0;
}
void create_lab(int  lab[][MAX]){
	int x , y;
	for( x = 0;x <  MAX  ; x++ ){
		for(y = 0 ;y < MAX   ; y++ ){
			lab[x][y] = -1 ;
		}
	}
}
void view_lab(	int  lab[][MAX]){
	int x , y ; for(x = 0; x <  MAX ; x++) { puts(" ");
		for(y = 0 ; y < MAX ; y++)
			printf    (    lab[x][y] == -1   ?  " # " : "%2d ", lab[x][y]     ) ;
	}
}
void gen_entrance_exit(int lab[][MAX] , int *x , int  *y ,  int *x_out , int *y_out  ){
	int ent = 0 , ext = 0;
				while ( ent == ext ){
				 ent = 1 +  rand() % 4 ;
				 ext = 1 +  rand() % 4 ;
				}
				 switch(ent){
					case 1:lab[  *x = 0][ *y = 1 + rand() % (MAX - 2)   ]  =  0; break;
					case 2: lab[  *x = (MAX - 1)  ][ *y = 1 + rand() % (MAX  - 2)   ] = 0; break;
				    case 3: lab[ *x  = 1 + rand() %  (MAX - 2)  ][ *y = 0  ]  = 0;break;
					case 4: lab[ *x  = 1 + rand() % (MAX - 2)  ][*y  = (MAX - 1)]  = 0; break;
					}
				switch(ext){
					case 1:lab[ *x_out =  0][*y_out =  1 + rand() % (MAX - 2)]   = 0 ; break;
					case 2:lab[ *x_out = (MAX - 1)  ][ *y_out = 1 + rand() % (MAX - 2) ]  = 0 ; break;
					case 3:lab[ *x_out =  1 + rand() % (MAX - 2)  ][  *y_out =  0 ]  = 0; break;
					case 4:lab[  *x_out = 1 + rand() % (MAX - 2)  ][  *y_out = (MAX - 1)]  = 0 ;break;
					}
				}
void gen_lav(int lab[][MAX]){
		int  y;
		for(y = 0 ;y !=  350; y++ ){
						lab[  1 +  rand() % (MAX - 2)  ][ 1 + rand() % (MAX - 2)  ] = 0 ;}} 
int wave(int lab[][MAX] ,int row , int col ,  int exrow , int excol ,int d  ){
if (   (  !lab[row + 1][col]    || lab[row + 1][col]  > d + 1)   &&  (row  < (MAX - 1)  )  ){
	lab[row + 1 ][col ] =  d + 1; 
	wave(lab ,row + 1  ,col,exrow ,excol , d + 1  );
}
if (   (!lab[row - 1][col  ] || lab[row - 1][col  ] > d + 1 ) && ( row   > 0       )  ){
	lab[row - 1][col] =  d + 1;
	wave(lab,row - 1 ,col , exrow ,excol   ,d + 1  );
}
if (  (!lab[row][col + 1   ]  || lab[row ][col + 1 ] > d + 1)  && (col  <  (MAX  - 1)  )    ){
	lab[row ][col + 1 ] =  d + 1;
	wave(lab,row  ,col + 1 ,exrow ,excol , d + 1  );
}
if( (!lab[row][col - 1   ]   || lab[row ][col - 1 ] > d + 1 )  && (col  > 0 )   ){
	lab[row ][col - 1] =  d + 1;
		wave(lab,row  ,col - 1 ,  exrow ,excol  ,d + 1  );
	}
}
int ext_lab(int row, int col,int exrow, int excol, int lab[][MAX], int stp){
  if( ( lab[exrow][excol]   - lab[exrow][excol - 1] ) == 1   ){
		ext_lab( row,  col , exrow,  excol  - 1,  lab , stp + 1 );
		lab[exrow][excol - 1 ]  = stp + 1; 
}	else if(  (  lab[exrow][excol]  -      lab[exrow][excol + 1]  ) == 1 )   {
		ext_lab( row,  col  , exrow ,  excol + 1,  lab , stp + 1 );
		lab[exrow][excol + 1 ]  = stp + 1; 
}	else	if(  ( lab[exrow][excol]   -    lab[exrow - 1][excol]   )    ==  1 ){
		ext_lab( row,  col , exrow  - 1,  excol,  lab , stp + 1 );
		lab[exrow - 1 ][excol  ]  = stp + 1; 
}	else	if(   (  lab[exrow][excol]    -      lab[exrow + 1][excol] )  == 1 ){
		ext_lab( row,  col , exrow  + 1,  excol,  lab , stp + 1 );
		lab[exrow + 1 ][excol  ]  = stp + 1; 
	}
}
