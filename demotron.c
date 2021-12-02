#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MEM 1000
#define READ 10
#define  WRITE 11
#define LOAD 20
#define STORE 21
#define NEWLINE 22
#define ADD 30
#define SUBSTRACT 31
#define  DIVIDE 32
#define  MUL 33

#define   POW 34
#define   MOD 35


#define   ENTSTR 50

#define   PRTSTR 51


#define BRANCH 40
#define BRANCHNEG  41
#define BRANCHZERO 42
#define HALT 43
int main (void) {


	void branch(int *cnt, int accum , int nxt , int comn);

	void dump(float  word[]); 

    float   mem[MEM] = {MEM} , acc  ; 
	int  ins_cnt = 0,ins_rgr = 0, op_code = 0 ,operand =0    ;
	
	char *s_mem[MEM] = {" "};
	int b = 0 , l = 0, r = 0, m = 0;

	s_mem[99] = "8"; 
	s_mem[0] =  "7";
	s_mem[1] =  "8";
	s_mem[2] =  "1";
	s_mem[3] =  "3FC";
	s_mem[4] =  "7E4";
	s_mem[5] =  "BCD";
	s_mem[6] =  "849";
	s_mem[7] =  "7D1";
	s_mem[8] =   "C1E";
	s_mem[9]  =  "835";
	s_mem[10] =  "1074";
	s_mem[11] =  "FA3";
	s_mem[12] =  "7E5";	
	s_mem[13] =  "C80";
	s_mem[14] =  "848";
	s_mem[15] =  "460";
 	s_mem[16] =   "833"; 
	s_mem[17] =   "835";
	s_mem[18] =  "82F";
	s_mem[19] = "849";
	s_mem[20] =  "10CC";
 
 
 
 
 
 
 
 
 
 
 
 
 while(b !=  100){
 	mem[b]    =   strtol( s_mem[b], NULL, 16) ;
b++;
 }
 
 while( 	(mem[operand] >   -9999)   && (mem[operand] <  9999 ) )  {
		ins_rgr = (mem [ins_cnt]);
		
		op_code =    (ins_rgr / 100 );
		operand =   (ins_rgr % 100);
		
		switch(op_code) {
			case READ:
				printf("? read ");
				scanf( "%f",    &mem[ operand ]   );
				ins_cnt++;
				break;
			
			case WRITE:
			printf("%f\n", mem[operand ]);
				ins_cnt++; 
				break;
			
			case LOAD:
				acc =   mem[ operand]  ;
				ins_cnt++;
				break;
			
			case STORE:
				mem[operand] =    acc;
				ins_cnt++;
				break;
			
			case ADD:
				acc +=   mem[operand];
				ins_cnt++;
				break;
			
			case SUBSTRACT :
				acc -=   mem[operand];
				ins_cnt++;
				break;
			
			case DIVIDE:
				acc /=   mem[operand];
				ins_cnt++;
				break;
			
			case MUL :
				acc *=   mem[operand];
				ins_cnt++;
				break;
			
			case POW :
			acc = pow(acc, mem[operand]);
				ins_cnt++;
				break;
			
			case MOD :
			acc = fmod(acc, mem[operand]);
				ins_cnt++;
				break;
			
			case NEWLINE :
				puts(" ");
				ins_cnt++;
				break;
			
			case   ENTSTR :
			b = operand;
			scanf("%s",  *s_mem);
			l =	r = (int)   strlen(*s_mem);
			l *= 100;
			while(r){
				mem[operand] = (intptr_t)  (l +  s_mem[m]);
				l -= 100;
				r--;
				operand++;
				m++;
			}
				break;
		
		
		case PRTSTR:
		for(m = b;  mem[m] / 100    ; m++  ){
		printf("%0.0f\n",  mem[m]   );
	}
				
		
		break;	
		
		
		
		default:
				branch(&ins_cnt,  acc  , operand, op_code  );
				break;
		}
	}

dump(mem);
}

void branch(int *cnt, int accum , int nxt , int comn ) {
	
	
	if(accum < -1   ) {
		*cnt =  nxt;
	} else 	if( accum == 0  ) {
		*cnt = nxt;
	} else if( comn == 40 ) {
		*cnt = nxt;
	} else {
		(*cnt)++;
	}
}

void dump(float word[]) {
	int  d = 0  , x;
	printf("%3c", ' ');
	while(d != 10) {
		printf("%5d ", d  );
		d++ ;
	}
	for(d = 0 ;  d  !=   MEM  ; d++ ) {
		x = word[d];
		if  (  0 ==  (d % 10 )  )
			puts(" ") , printf("%3d", d) ;
		printf(   x  >= 0  ? " +%.4X"   :  " %.4d", x  );
	}
}

long long_var (long  var){
	long	 step = 1;
				do{
					step *= 10  ;
				 }while( var /=  step );
			return (step / 10);
			}
