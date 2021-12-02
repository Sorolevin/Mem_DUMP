#include<stdio.h>
#include <stdlib.h>

int main(void){


char m1[80] = " " ;
char m2[80] = " " ;
char m3[80] = " " ;
char m4[80] = " ";
	

	
scanf("%s%s%s%s"  ,m1, m2 , m3 , m4);
printf("%d",  atoi(m1 )   +	 atoi(m2  )   +	 atoi(m3  )  + 	atoi(m3 )        );		
return 0;
}
