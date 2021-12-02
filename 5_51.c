#include<stdio.h>
#include<stdlib.h>	
#include<time.h>
#include<ctype.h>

enum  Status { CONTINUE, WON, LOST };
int comment(int);
int inc = 0;
int rollDice(void);
int main(void) {
		srand(time(NULL)); 
	
	int pound = 0;
	int bank = 1000;
	while (bank != 0) {
	printf("enter pound%d:", bank, comment(1 + (rand() % 4)));
		scanf("%d", &pound); 
			puts("");
	if (pound>bank || pound <= 0 || isdigit(pound) == 1) { 
			printf("error pound\nyou bank%d\n", bank); 
		}
	else {
		if (one_games() == WON) { printf("Players wins\n"); 
						bank += pound; 
			}
		else {
				printf("Players Loses\n");
				bank -= pound;
			}
		}
	}printf("Sorry,You Bankrote"); return 0;
}



int one_games(void) {
	int sum; int myPoint; enum Status gameStatus;
sum = rollDice(); 
	switch (sum) {
		case 7: 
		case 11:
		return	gameStatus = WON; 
	break; 
		case 2:
		case 3:
		case 12:
		return	gameStatus = LOST; 
	break; 
	default:	
		gameStatus = CONTINUE; 
		myPoint = sum; 
		printf("Point is %d\n", myPoint); 
	break;
	}
	while (gameStatus == CONTINUE) {
		sum = rollDice(); 
		if (sum == myPoint) { 
				return gameStatus = WON; 
			}
		else {
				
				if (sum == 7) {
				return gameStatus = LOST;
			}
		}
	}
	
	return 0;
}int rollDice(void) {

	int die1; 
	int die2; 
	int workSum; 
	
	die1 = 1 + (rand() % 6); 
	die2 = 1 + (rand() % 6); 
	workSum = die1 + die2;
	
	
	printf("Player rolled %d\n", 	inc++); 

	return workSum; 
	
	
	return 0;
}
int comment(int p) {
	switch (p) {
	case 1:
		printf("((( GO GO )))\n");
	break; 
	case 2:printf("(((Money easy)))\n"); 
	break; 
	case 3:
		printf("(((wait's have more)))\n"); 
		break; 
	case 4:printf("(((kudu eshe)))\n"); 
	break;
	}return 0;
}
