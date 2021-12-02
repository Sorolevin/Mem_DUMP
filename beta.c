#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <math.h>
struct stack {
	int alpha;
	struct stack *nxtPTR;
};

typedef struct stack  Stack;

typedef  Stack *node;

node   topPTR = NULL;

struct stack_2 {

long	double alpha;

	struct stack *nxtPTR_2;

};

typedef struct stack_2  Stack_2;

typedef  Stack_2 *node_2;

node_2 topPTR_2 = NULL;

char check_stack(node data);

int isOperator(char c);

int precedence(char data_1, char   data_2);

void push_stack(node *topPTR, int value);

void push_stack_2(node_2 *topPTR_2,  double value);

int pop(node *fix) ;

double pop_2(node_2 *fix);

void out_print(char word[]) ;

char infix[2][200];

double end_line( char data[0][200]);

void in_line(char  data[][200] , int  lng  );

int main(void) {

	
fgets(&infix[0][0], sizeof(infix), stdin);
	
int  k = strlen(&infix[0][0]);
	

in_line( infix , k );


out_print( &infix[1][0]);


puts(" ");
	


 double sl =   end_line(infix);

	printf("%.3f", sl );


return 0;
}

double end_line( char data[0][200]){
	
	double x = 0 , y = 0, sum = 0,ml = 0    ; 
	int j = 0  , k = 0 , d = 0;
	
	for(k = 0;  data[1][k] != '\0' ; k++  ){
			
			if(isdigit(data[1][k]) ){
				
			ml  = atof( &data[1][k]  )  ;
		
			if(isdigit( data[1][k + 1]  )) {

			for( ;  isdigit(  data[1][k + 1]   )  != 0  ||  data[1][k + 1]  == '.'      ; k++  );
						
			
			}	
			
				
						push_stack_2( &topPTR_2,ml);
				}	
			
			
			else if ( isOperator (data[1][k]) == 1 ){
				 
				 y =	pop_2(&topPTR_2);
				 x = 	pop_2(&topPTR_2);	 	
					
					if( data[1][k] == '^' ){
						  sum  =  pow(x, y) 	  ;
						 	push_stack_2(  &topPTR_2, sum  );
						 }
					
					
					if( data[1][k]  == '*' ){
						 
							 sum  = 	x * y;
							 push_stack_2(&topPTR_2, sum );
						 }
				 		
				 	  if( data[1][k]  == '+' ){
						  sum  = 	x + y;
							 push_stack_2(&topPTR_2, 	sum );
						 }
				 
				     if( data[1][k]  == '/' ){
						 	
							 sum  =   x / y;
							 push_stack_2(&topPTR_2,   sum );
						 }
				 
				 if(   data[1][k]  == '-' ){
						 	sum =    x - y   ;
							 push_stack_2(&topPTR_2, sum  );
						 }
				 	}
				}
	
	
	return    pop_2(&topPTR_2);

}


void in_line(char data[][200] , int  lng  ){
	
double x = 0 , y = 0, sum = 0 ; 
int j = 0  , k = 0 , d = 0;
	
	
	
	
	 data[0][lng ] = ')';
    push_stack(&topPTR, '(');
	

	for (k = 0; check_stack((void *) &topPTR) != 1   ; k++) {

		if (  isdigit(data[0][k]) ||  data[0][k] == '.'  ) {

			data[1][j++] = data[0][k];
	
		}

		if (data[0][k] == '(') {

			push_stack(&topPTR, infix[0][k]);

		}
			if (isOperator(data[0][k]) == 1) {
				data[1][j++]  = ' ';
			for (;         precedence(topPTR->alpha, data[0][k]) != -1 ; ) {
		
			data[1][j++] = pop(&topPTR);
		
		}
				
				push_stack(&topPTR, data[0][k]);
			push_stack(&topPTR, ' ' );
		}

		if (data[0][k] == ')') {
	
		d = pop(&topPTR);
			for (; d != '('     ; 	d = pop(&topPTR)) {
					data[1][j++] = d;
					
				}
			}
		}

	}


void push_stack(node *topPTR, int value) {

	node newPTR = malloc(sizeof(Stack));

	if (newPTR != NULL) {

		newPTR->alpha = value;
		newPTR->nxtPTR = *topPTR;
		*topPTR = newPTR;

	}
	else {

		puts("error");
	}
}

void push_stack_2(node_2 *topPTR_2,  double value) {

	node_2 newPTR = malloc(sizeof(Stack_2));

	if (newPTR != NULL) {

		newPTR->alpha = value;
		newPTR->nxtPTR_2 = (void *)  *topPTR_2;
		*topPTR_2 = newPTR;

	}
	else {

		puts("error");
	}
}

int pop(node *fix) {
	
	int  value = 0;
	node temp = *fix;
	value = (*fix)->alpha;
	*fix = (*fix)->nxtPTR;
	free(temp);
return value;
}

double pop_2(node_2 *fix) {
	
	double  value = 0;
	node_2 temp = *fix;
	value = (*fix)->alpha;
	*fix = (void *)   (*fix)->nxtPTR_2;
	free(temp);
return value;
}

void out_print(char word[]) {
	int j = 0;
	for (j = 0; word[j] != '\0'; ++j) {
		printf("%c", word[j]);
	}
}


char check_stack(node data) {
	return data->alpha   ==  0  ;
}

int isOperator(char c) {
	return c == '/' || c == '*' || c == '-' || c == '+' || c == '^' ;
}

int precedence(char data_1, char  data_2) {
		
		switch(data_1){
		case '(':	
		return -1;
		case '^':
	
			if(data_2 == '^' ){
					return    0;
			} 
			 else if (data_2 == '*' || data_2 == '/' || data_2 == '+' || data_2 == '-'   ){
			 	
			 }
	 		
	 	case 	'/' : 
        case 	'*':        
			
			if(data_2 == '^' ){
					return    -1;
				} 
					else if( data_2 == '/' || data_2 == '*'     ){
						return    0;
					}	
				
			else if( data_2 == '+' || data_2 == '-'     ){
						return     1;
		
		}
		
		case  '+':
		case  '-':		
		
		if(data_2 == '^'  || data_2 == '/' || data_2 == '*'        ){
			return    -1;
				} 
		else{
			return     0;
			 }
		}
}
