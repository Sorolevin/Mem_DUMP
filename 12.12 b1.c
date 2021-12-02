#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct stack {
	int alpha;
	struct stack *nxtPTR;

};


typedef struct stack  Stack;
typedef  Stack *node;

node topPTR = NULL;
void push(node *topPtr, int info);

void push_stack(node *topPTR, int value);
void view(node   data);

int pop(node  *topPTR);
char check_stack(node data);

int isOperator(char c);
int precedence(char data_1, char   data_2);

int isEmpty(node  data);




char infix[256];
	char postfix[256];

int main(void) {

void out_print(char word[]) ;
	int x = 0 , y = 0; 
	int lo = 0;
	int l = 0;


	int j = 0;
	int k = 0;
	
	int sum = 0;
	int ml = 0 , kl = 0;
	int pop(node *topPtr);
	int d = 0;
	fgets(infix, sizeof(infix), stdin);
	k = strlen(infix);
	infix[k] = ')';
    infix[k + 1] = '\0';
	push_stack(&topPTR, '(');
	

	for (k = 0; check_stack((node) &topPTR) != 0; k++) {

		if (isdigit(infix[k])) {

			postfix[j++] = infix[k];
	
		}

		if (infix[k] == '(') {

			push_stack(&topPTR, infix[k]);

		}
						if (isOperator(infix[k]) == 1) {
							postfix[j++]  = ' ';
						for (;         precedence(topPTR->alpha, infix[k]) != -1                      ; ) {
					
						postfix[j++] = pop(&topPTR);
					
					}
				
				push_stack(&topPTR, infix[k]);
			push_stack(&topPTR, ' ' );
		}


		if (infix[k] == ')') {
	
			
	d = pop(&topPTR);
			for (; d != '('     ; 	d = pop(&topPTR)) {
					postfix[j++] = d;
					
				}
		}

	}

	puts(" ");


out_print(postfix);
puts(" ");

puts(" ");

	
	for(k = 0; postfix[k] != '\0' ; k++  ){
			
			
			if(isdigit(postfix[k]) ){
				
				ml  = atoi( &postfix[k]  )  ;
			
		
			
			if(isdigit( postfix[k]  )) {

			for( ;  isdigit( (int) postfix[k + 1]   ) != 0 ; k++  );
			}	
			
				puts(" ");
			   	puts(" ");
						push_stack(&topPTR,ml);
				}	
			
			
			else if ( isOperator (postfix[k]) == 1 ){
		
			
				
				
				 y =	pop(&topPTR);
				 x = 	pop(&topPTR);	 	
					
					if( postfix[k] == '^' ){
						  sum  = pow(  x, y) 	  ;
						 	push_stack(&topPTR, sum  );
						 }
					
					
					if( postfix[k] == '*' ){
						 
							 sum  = 	x * y;
							 push_stack(&topPTR, sum );
						 }
				 		
				 	  if( postfix[k] == '+' ){
						  sum  = 	x + y;
							 push_stack(&topPTR, 	sum );
						 }
				 
				     if( postfix[k] == '/' ){
						 	
							 sum  =   x / y;
							 push_stack(&topPTR,   sum );
						 }
				 
				 if( postfix[k] == '-' ){
						 	sum =    x - y   ;
							 push_stack(&topPTR, sum  );
						 }
				 
				 
				 
				 
				 
				 	}
				}
	
	
   int m =	pop(&topPTR);
	
	printf("%d\n" , m  );


	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
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

int pop(node *fix) {
	
	int  value = 0;
	node temp = *fix;
	value = (*fix)->alpha;
	*fix = (*fix)->nxtPTR;
	free(temp);
return value;
}

void out_print(char word[]) {
	int j = 0;
	for (j = 0; word[j] != '\0'; ++j) {
		printf("%c", word[j]);
	}
}
int isEmpty(node  data) {
	return data != NULL;
}

char check_stack(node data) {
	return data->alpha;
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

