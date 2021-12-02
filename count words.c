#include<stdio.h>
#include<string.h>
int main(void){
	char   words[] = "privet; mama, ya uehal poka mama privet, mama";
	
	void understr( char *patt );
		
understr( words );
	return 0;
}




void countword (char *pattern ){
    int count[27] = {0} ;
	int nm = 97;
	int	digit= 0;
	int alpha = 0;
	int x = 0;	
	do{
		if( isalpha( *pattern)  ){
		   alpha   = tolower(*pattern);
	       digit =	(alpha - 96);
		   ++count[digit];
			} 
		}while(*pattern++);
	for( x= 1 ;x != 27 ; x++ ){
		if(count[x] > 0  ){
				printf("%d %c\n", count[x] , nm++ );
			}
		}
	}
	
	

void understr( char *patt ){
	void kmp_match(char *T , char *P   );
    char cp[1000000];
    
    strcpy(cp,patt);
    
	char *buf;
	
	for(buf = strtok( patt," ,;:")  ;buf ;	kmp_match(cp , buf ),buf = strtok(NULL, " ,:;")    ) ;
		}




void kmp_match(char *T , char *P   ){
	int  o = 0 ;
    int n = strlen( T);
	int i = 0 , ld= 0 ;
	int m = strlen(P);

    int  p[m - 1]  ; 

	int q = 0 , k = 0;
	
	memset( p, 0, m*sizeof(int) );
	
	for(q = 1; q <= m ; q++  ){ 
		 while(k > 0 && P[k  ] != P[q]   )
			k = p[k - 1] ;
		if(P[k    ] == P[q  ]  )
	    			k++;
			p[q] = k;
			}
	
		i = 0 , k = 0 , q = 0 ;
	
for( ;i <  n ; i++   ){

	while(q >  0 && P[q ] != T[i]  ) 

	q  = p[q - 1 ] ;

	if(P[q] == T[i]){

			q++;

	if(q == m){
		 ++o     ;
			}
		     }  
		}
		
		printf("%s|%d " ,P  ,    o  )    ;
	}
















	
	
	
void longword(char*pattern  ){
	int h = 0;
	int a[h]     ;
	int x = 0;
	int m = 1;
	int cnt = 0;
	char  *buf; 
	char  *tokenptr; 
	char cp[1000000];


   strcpy(cp,pattern);

	buf = strtok(cp, " ,:");
	
	do{
		if(strlen(buf)   > h     ){
		h =  strlen(buf) + 1 ;
		}
		buf = strtok(NULL, " ,:");
	}while(buf != NULL );
	
	memset( a, 0,  h*sizeof(int) );
	
	tokenptr = strtok(pattern, "  ,:");
	do{
		x =  strlen(tokenptr )  ;
    
		++a[x] ;
		tokenptr = strtok(NULL, "  ,:");
	}	while(tokenptr != NULL );
	  
	for(x = 0 ;x <  h    ; x++ ){
		if(a[x] > 0){
				printf("%d %d\n" , x , a[x]  );
			}
		}
	}
	
	
	
	
	
/*
	void longword(char*pattern  ){
	int h = 0;
	int a[100000] = {0}     ;
	int x = 0;
	int m = 1;
	int cnt = 0;

	char  *tokenptr; 
	
	tokenptr = strtok(pattern, " ");
	while(tokenptr != NULL ){
		x =  strlen(tokenptr )  ;
    	cnt++;
		++a[x] ;
		tokenptr = strtok(NULL, " ");
	}
	
	for(x = 0 ;x != (cnt*cnt ) ;++x ){
		if(a[x] > 0){
				printf("%d %d\n" , x , a[x]  );
			}
		}
	}
*/
