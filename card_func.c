#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 13
int main(void) {
	void test_straight(int array[], int *flag  ),
	     test_flush(int array[], int array_2[]),
	     test_pair(int array[]),
	     combi(int wDeck[][13]),
	     change_card( int array_suit[]  , int array_face[] , int deck[][13] ),
	     shuffle(int wDeck[][13]),
	     deal(int wDeck[][13], int gm_suit[], int  gm_face[], int mg_suit[], int  mg_face[]);
	int  pc_suit[5], pc_face[5] , my_suit[5] , my_face[5] , deck[4][13] ,m = 0, w = 0,point = 0, f_1 = 0,
	find_combination(int array[], int array_2[], int flag),
	                                                      a,e = 0, d  = 0, f ;
	const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	const char *face[13] = {
		"Deuce", "Three", "Four",
		"Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King","Ace"
	};
	combi(deck);
	srand(time(0));
	shuffle(deck);
	deal(deck, my_suit, my_face, pc_suit, pc_face);
	while(d != 5  ) {
		point  =	find_combination(pc_face, pc_suit, 0 );
		find_combination(my_face, my_suit, 0  );
		puts("\t************************");
		for (m = 0; m < 5; m++) {
			printf("   %5s pc %8s <> %5s me %8s  %d\n",face[pc_face[m]],suit[pc_suit[m]],face[my_face[m]],suit[my_suit[m]],m);
		}
		puts("\t************************\n");
		while ( e != 5 ) {
			puts("any button no change: change yes -1");
			printf("%5s <> %8s", face[my_face[e]] , suit[my_suit[e]]  );
			scanf("%d", &a);
			if(a == -1) {
				my_face[e] = -1;
			} else if(a ==   7 ) {
				break;
			}
			e++;
		}
		if(f_1 == 1  ) {
			test_straight(pc_face ,&f_1 );
		} else if(point < 40 )                 {
			switch(point) {
				case 30:
				case 20:
				case 10:
					test_pair( pc_face);
					break;
				case 0:
					test_flush(pc_suit , pc_face );
					change_card(pc_suit,pc_face,deck );
					point  =	find_combination(pc_face, pc_suit,0 );
					if(point == 50) {
						break;
					} else
						test_straight(pc_face ,&f_1 );
					break;
			}
		}
		change_card(my_suit,my_face,deck );
		change_card(pc_suit,pc_face,deck );
		if(d <= 3) {
			puts ("\n\t\tNEXT PART ");
		}
		d++;
		e = 0;
	}
	point = find_combination(pc_face, pc_suit, 0);
	if (find_combination(my_face, my_suit, 0  )  == 	point ) {
		find_combination(my_face, my_suit, 1  ) > find_combination(pc_face, pc_suit, 1)  ||  my_face[4] > pc_face[4]  ? puts ("\n\t\t YOU WIN")  :  puts ( "\n\t\t YOU LOSE" );
	} else {
		find_combination(my_face, my_suit,0)  > 	point  ?  puts ("\n\t\tYOU WIN ")  :  puts ( "\n\t\tYOU LOSE " );
	}
	puts("\t******** Game over ***********");
	for (m = 0; m < 5; m++) {
		printf("   %5s pc %8s <> %5s me %8s  %d\n",face[pc_face[m]],suit[pc_suit[m]],face[my_face[m]],suit[my_suit[m]],m);
	}
	puts("\t******** Game over ***********");
	return 0;
}


void test_flush(      int array[] , int array_2[] ) {
	int	f = 0, d = 0 , r = 0, p = 0 , n = 1;
	if(array[0] != array[1] && array[1] == array[2]  && array[2] == array[3] && array[3] == array[4]) {
		array_2[0] = -1;
	} else
		for (f = 0; f != 5; f++) {
			for(d = 0 ; d != 5; d++) {
				if(array [f] != array [d]) {
					r++;
					n = d;
				} else {
					p++;
				}
			}
			if( p == 4 && r == 1  ) {
				array_2[n]  = -1;
				break;
			}
		}
}


void change_card(  int array_suit[]  ,  int  array_face[] , int deck[][13] ) {
	int r = 0;
	void  change_count( int *array_suit, int *array_face , int array_deck[][13], int count);
	static int y = 11;
	while( r != 5) {
		if(array_face[r]  == -1    ) {
			y++;
			change_count( &array_suit[r],  &array_face[r], deck,  y);
		}
		r++;
	}
}


void change_count(int *array_suit, int *array_face , int array_deck[][13], int count) {
	int row = 0 , column = 0;
	for( row = 0 ; row <= 3; row++) {
		for(  column = 0   ; column <= 12 ; column++) {
			if(array_deck[row][column] == count ) {
				*array_suit = row;
				*array_face = column;
				break;
			}
		}
	}
}


int sort_select(int  arr[], int arr_2[] ,  int p, int up_turn) {
	void swap(int *elementptr1, int *elementptr2);
	int search(int st[], int s, int choice, int up_turn);
	int incheck;
	int min;
	if (p == MAX  ) {
		return 1;
	} else {
		min = search(arr, p, p, up_turn);
		swap(&arr_2[p], &arr_2[min]);
		swap(&arr[p], &arr[min]);
	}
	return	sort_select(arr, arr_2, p + 1, up_turn);
}

int search(int st[], int s, int choice, int turn) {
	int p;
	if (turn == 1) {
		p = MAX ;
	} else if (turn == 2) {
		p = 5;
	}
	if (s <  p) {
		if (turn == 1) {
			if (st[s] >   st[choice]) {
				choice = s;
			}
		} else if (turn == 2) {
			if (st[s] <   st[choice])
				choice = s;
		}
		return	search(st, s + 1, choice, turn);
	} else {
		return choice;
	}
}


void shuffle(int wDeck[][13]) {
	int row = 0, column = 0, card, tmp = 0, tmp_1 = 0, tmp_2 = 0 , pls = 0;
	void swap(int *elementptr1, int *elementptr2);
	for (card = 1; card < 52; card++) {
		tmp_1 = rand() % 3;
		tmp_2 = rand() % 12;
		for (row = 0; row <= 3; row++) {
			for (column = 0; column <= 12; column++) {
				if (wDeck[row][column] == card) {
					swap(&wDeck[row][column], &wDeck[tmp_1][tmp_2]);
				}
		
			}
	
		}

	}
printf("%d  %d %d\n", card , row , column    );
}


void combi(int wDeck[][13]) {
	int row;
	int column;
	int card = 1;
	for (row = 0; row <= 3; row++) {
		for (column = 0; column <= 12; column++) {
			wDeck[row][column] = card;
			card++;
		}
	}
}


void deal(int wDeck[][13], int gm_suit[], int  gm_face[], int mg_suit[], int  mg_face[]) {
	int card = 1, row, column, y = 0, x = 0;
	while (card++ <= 10) {
		for (row = 0; row <= 3; row++) {
			for (column = 0; column <= 12; column++) {
				if (wDeck[row][column] == card) {
					if (0 == card % 2) {
						gm_suit[y] = row;
						gm_face[y] = column;
						y++;
						break;
					} else {
						mg_suit[x] = row;
						mg_face[x] = column;
						x++;
						break;
					}
				}
			}
		}
	}
}
void counting(int in[], int out[]) {
	int	pls = 0;
	for (pls = 0; pls < 5; pls++) {
		++out[in[pls]];
	}
}
int s_t(int ar[] , int r , int  ps , int d  ) {
	d = ar[ps] ;
	if(r <= 12 ) {
		if(d  <  ar[r]   ) {
			d = ar[r];
			ps = r;
		}
		return s_t(ar , r + 1, ps, d);
	}
	return ps;
}

int find_combination(int array[], int array_2[] , int flag  ) {
	int p[13] = { 0};
	int flush(int array[]);
	int straight(int array[]);
	int	chck[13] = { 0 } , ks;
	int sort_select(int arr[],int arr_2[] , int  p, int  up_turn);
	int s_t(int ar[] , int r , int  ps , int d  );
	sort_select(array, array_2, 0, 2);
	counting(array, chck);
	if( flag == 1) {
		ks = s_t(chck,0,0,0);
	} else {
		sort_select(chck,p, 0, 1);
		if (chck[0] == 3 &&  chck[1]== 2) {
			ks = 60;
		} else if (chck[0] == 4) {
			ks = 70;
		} else if (chck[0] == 3) {
			ks = 30;
		} else if (chck[0] == 2 && chck[1]  == 2) {
			ks = 20;
		} else if (chck[0] == 2) {
			ks = 10;
		} else if (straight(array) && flush(array_2)) {
			ks = 80;
		} else if (straight(array)) {
			ks = 40;
		} else if (flush(array_2)) {
			ks = 50;
		} else {
			ks = 0;
		}
	}
	return ks;
}
int straight(int array[]) {
	int	 b = 1, m = 1;
	if(array[0] == 0 && array[1] == 1  && array[2] == 2 && array[3] == 3 && array[4] == 12 ) {
		b = 1;
	} else {
		while (m  != 5) {
			if ( 1 !=  (array[m] - array[m - 1]) ) {
				b = 0;
				break;
			}
			m++;
		}
	}
	return b;
}
void test_straight(int array[], int *flag  ) {
	int	 m = 1;
	*flag = 0;
	while (m  != 5) {
		if   (  1 != (array[m ]     -   array[m  - 1 ])) {
			if (array[m] > array[m + 1  ]) {
				array[m] = -1;
				*flag += 1;
			} else  {
				array[m - 1 ] = -1;
				*flag += 1;
			}
		}
		m++;
	}
}
int flush(int array[]) {
	int	f = 0, d = 1;
	for (f = 1; f < 5; f++) {
		if (array[0] != array[f] ) {
			d = 0;
			break;
		}
	}
	return d;
}
void test_pair(int array[]) {
	int y = -1,x = 0;
	while(x < 5) {
		if( array[x] == y   ) {
			x++;
		} else 	if( array[x] != array[x + 1]  ) {
			array[x] =  -1;
			x++;
		} else {
			y = array[x];
			x += 2;
		}
	}
}
void swap(int *elementptr1, int *elementptr2) {
	int hold = *elementptr1;
	*elementptr1 = *elementptr2;
	*elementptr2 = hold;
}
