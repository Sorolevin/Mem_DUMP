#include<stdio.h>
#include<string.h>
	
	int main(void){
	
	char s1[80] = " "; 
	char s2[80] = " " ;
	int ln = 0;	
	
		
		printf("enter two string and long cntrl: ");
		scanf("%s %s  %d" ,s1 ,s2 , &ln  );
		
		
	 if( ! strncmp(s1, s2, ln )  ){
	 	printf("string %s == %s", s1 ,s2  );
	 }
	
	else	 if(  strcmp(s1, s2 )   ){
	   printf("string  %s > %s", s1 ,s2  );
	 } 
	 
	 else{
	 	printf("string  %s < %s", s1 ,  s2  );
	 }		
		
		
		
		
		
		
		
		
		return 0;
	}
