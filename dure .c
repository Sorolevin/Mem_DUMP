#include<stdio.h>
#define SIZE 50
		int m = 0;
void	turtle_action(  int  pol[][SIZE],   int turn, int step);
int turnRight( int );
int turnLeft( int );
int i,j = 0;
int dir = 0;
int r = 0;

int shift_fist = 0, shift_turn = 0, shift_step = 0 , shift_up = 0  ,stop = 0,vert, horz  ;
int	main(void)
{

	 int 	floor[SIZE][SIZE] = {0};

	while(stop != 9) {
		printf("1 over and view = 9,  2_level  3 = turn 1_right any  left, 5_step.  \n"  );
		scanf("%d %d  %d", &stop,&shift_turn,  &shift_step );
		if(shift_turn == 3  ) {
			dir = turnRight(dir);
		} else if ( shift_turn == 4  ) {
			dir = turnLeft(dir );
		}
		turtle_action(floor,dir,shift_step);
		printf(" stack%d \n" , dir   );
	}

	for(vert = 0; vert < 50; vert++) {
		for(horz = 0; horz <  50; horz++)
			putchar(floor[vert][ horz] ? '*': ' ' );
		putchar( '\n' );
	}
	return 0;
}
void   	turtle_action(   int pol[][SIZE], int turn ,int step)
{

	static int steper  , shift_steper  = 0 ;
	switch(turn) {
		case 0:
			for(j = 1 ; j <= step && steper + j  < 50; j++)
				pol[steper ][shift_steper + j ]  = 1  ;
			shift_steper += j - 1 ;
			break;
		case 1:
			for(i = 1; i <= step && steper + i  < 50; i++)
				pol[steper + i][shift_steper] = 1  ;
			steper += i - 1;
			break;
		case 2:
			for(j = 1 ; j <= step && steper - j  >= 0; j++)
				pol[steper ][shift_steper - j  ]  = 1 ;
			shift_steper -= j - 1 ;
			break;
		case 3:
			for(i = 1; i <= step && steper - i  >= 0; i++)
				pol[steper - i][shift_steper] = 1  ;
			steper -= i - 1;
			break;
	}
}
int turnRight( int d )
{ 
	return ++d > 3 ? 0 : d;
}
int turnLeft( int d )
{	
	return --d < 0 ? 3 : d;
}
