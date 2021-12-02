#include<stdio.h>
#include<string.h>
	
	int main(void){
	
	char s1[80] = " "; 
	 char s2[80] = " " ;
		
		
		printf("enter two string: ");
		scanf("%s %s" ,s1 ,s2  );
		
		
	 if(!strcmp(s1, s2 )   ){
	 	printf("string %s == %s", s1 ,s2  );
	 }
	
	else	 if(  strcmp(s1, s2 )  ){
	   printf("string  %s > %s", s1 ,s2  );
	 } 
	 
	 else{
	 	printf("string  %s < %s", s1 ,  s2  );
	 }		
		
		
		
		
		
		
		
		
		return 0;
	}
