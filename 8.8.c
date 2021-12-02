#include<stdio.h>
#include <stdlib.h>

int main(void){


char m1[80] = " " ;
char m2[80] = " " ;
char m3[80] = " " ;
char m4[80] = " ";

       
printf("enter four digits:");
scanf("%s %s %s %s"  ,m1, m2 , m3 , m4);
	










printf("%f",  (     	atof(m1 )+  atof(m2  ) +  atof(m3  )  + atof(m4 )            ) * 2    );		
return 0;
}
