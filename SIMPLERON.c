#include<stdio.h>
#include<ctype.h>
#define MEM 100
#define READ 10
#define  WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBSTRACT 31
#define  DIVIDE 32
#define  MUL 33
#define BRANCH 40
#define BRANCHNEG  41
#define BRANCHZERO 42
#define HALT 43
int main (void) {
	void read(int mem[] , int pnt ) ;
	void write(int mem[] , int pnt ) ;
	void load(int *accum, int mem[], int pnt) ;

	void store(int *accum, int mem[] , int pnt ) ;

	void add(int *accum, int mem[] , int pnt) ;

	void subs(int *accum, int mem[] , int pnt ) ;

	void div(int *accum, int mem[], int pnt) ;

	void mul(int *accum, int mem[], int pnt) ;

	void branch(int *cnt, int accum , int nxt , int comn,  int *stp );

	void dump(int word[]);

	int  mem[MEM] = {10} ,ins_cnt = 100,ins_rgr = 100, op_code = 100 ,operand = 100  , acc = 100  , x = 100 ,y = 100     ;
	mem[0] =  7;
	mem[1] =  8;
	mem[2] =  1;
	mem[3] =  1020;
	mem[4] =  2020;
	mem[5] =  3021;
	mem[6] =  2121;
	mem[7] =  2001;
	mem[8] =  3102;

	mem[9]  =  2101;
	mem[10] =  4212;
	mem[11] =  4003;
	mem[12] =  2021;	
	mem[13] =  3200;
	mem[14] =  2120;
	mem[15] =  1120;
 	
	
	mem[16] =   2099; 
	mem[17] =   2101;
	
	mem[18] = 2095;
	mem[19] = 2121;
	
	mem[20] =  4300;

 	mem[99] = 8; 


	while(  mem [operand]!=  EOF   ) {
		ins_rgr =	mem [ins_cnt];
		op_code = ins_rgr / 100;
		operand = ins_rgr % 100;
		switch(op_code) {
			case READ:
				read(mem , operand );
				ins_cnt++;
				break;
			case WRITE:
				write(mem , operand );
				ins_cnt++;
				break;
			case LOAD:
				load( &acc, mem, operand);
				ins_cnt++;
				break;
			case STORE:
				store( &acc,mem , operand );
				ins_cnt++;
				break;
			case ADD:
				add( &acc, mem , operand) ;
				ins_cnt++;
				break;
			case SUBSTRACT :
				subs( &acc, mem , operand );
				ins_cnt++;
				break;
			case DIVIDE:
				div( &acc, mem, operand);
				ins_cnt++;
				break;
			case MUL :
				mul( &acc,  mem, operand) ;
				ins_cnt++;
				break;
			default:
				branch(&ins_cnt,  acc , operand, op_code , &ins_cnt );
				break;
		}
	}
	
	
	dump(mem);
}
void read(int mem[] , int pnt ) {

	printf("? read");
	scanf( "%d",  &mem[pnt]  );
}
void write(int mem[] , int pnt ) {
	printf("%d\n\n", mem[pnt]);
}
void load(int *accum, int mem[], int pnt) {
	*accum =  mem[pnt]  ;
}
void store(int *accum, int mem[] , int pnt ) { 
	mem[pnt] = *accum;
}
void add(int *accum, int mem[] , int pnt) {
	*accum += mem[pnt];
}
void subs(int *accum, int mem[] , int pnt ) {
	*accum -= mem[pnt];
}
void div(int *accum, int mem[], int pnt) {
	*accum /=  mem[pnt];
}
void mul(int *accum, int mem[], int pnt) {
	*accum   *=  mem[pnt];
}

void branch(int *cnt, int accum , int nxt , int comn,  int *stp ) {
	if(accum < -1   ) {
		*cnt =  nxt;
	} else 	if( accum == 0  ) {
		*cnt = nxt;
	} else if( comn == 40 ) {
		*cnt = nxt;
	} else {
		(*stp)++;
	}
}

void dump(int word[]) {
	int  d = 0  , x;
	printf("%3c", ' ');
	while(d != 10) {
		printf("%5d ", d  );
		d++ ;
	}
	for(d = 0 ;  d  !=   MEM  ; d++ ) {
		x = word[d];
		if  (  0 ==  (d % 10 )  )
			puts(" ") , printf("%2d", d) ;
		printf(   x  >= 0  ? " +%.4d"   : " %.4d" , x  );
	}
}
