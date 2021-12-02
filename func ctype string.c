#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(void){
	


	char f = 0;
	scanf("%c", &f);
	printf("%s %d \n%s %d\n%s %d\n%s %d\n%s %d\n%s %d\n%s %c\n%s %c\n%s %d\n%s %d\n%s %d\n%s %d\n%s %d", 
	
	"isdigit() ="    ,    isdigit(f),
	
	"isalpha() =" , isalpha(f),
	
	"isalnum() =" , isalnum(f) ,
	
	"isxdigit() =" , isxdigit(f) ,
	
	"islower() =", islower(f), 
	
	"isupper() =", isupper(f) ,
	
	"tolower() =", tolower(f),
	
	"toupper() =", toupper(f),
	
	"isspace() =", isspace(f),
	
	"iscntrl() =", iscntrl(f) ,
	
	"ispunct() =", ispunct(f) ,
	
	"isprint() =", isprint(f) ,
	"isgraph() =", isgraph(f) 
	);
	
return 0;
}
