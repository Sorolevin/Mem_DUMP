#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <time.h>

int  main(void){


 char  s1[] =  "mama mama mama mama";
 
 char  s2[] =  "mama";
 char *buf ; 
  
char * my_strtok( char *s, char *delim);
  
  
void kmp_match(char *T , char *P   );  

 kmp_match(  s1, s2 );

return 0;
}

char * my_strtok( char *s, char *delim){
 static  char  *lasts; /* статический указатель для хранения адреса строки*/
    int sh;
	   
	if (  !s ){  /* если лексема уже получена поместить  lasts > s */
			s = lasts; 
		}	
	
	do { 
		if (  *s == '\0'){  /* если массив пройден  то возращем 0 */
			return 0;
			}
		}
	while( strchr(delim, *s++ ) != '\0');  /* сдвиг массива пока в нем есть элементы  входящие в delim     */
	
	
	--s;/* сделать сдиг на один элемент обратно в массиве*/ 
	
	sh =  strcspn(s, delim) ; /*получить целочисленый сдвиг на количество элемнетов не входящих в delim    */ 
	
	lasts =  &s[sh];  /*взять адрес остатка строки со сдвигом*/ 
	
	if (*lasts ){ 
		*lasts = '\0';    /* заглушка для следующий лексемы */
	}
	return s;
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
		ld =   i + 2    ; 

		

				}
		     }  
		}
		printf("%d %s\n" ,  o  ,P  )    ;
	}































void kmp_match(char *T , char *P   ){
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
		ld =   i + 2    ; 
			printf("%s\n" ,  &P[ld]    )    ;
			
		
				}
		     }  
		}
	}

int r_k ( char *text, char *point, int d, int q ){
	
	int n = strlen( text),m = strlen(point ),g = (n - m ),
	h = (int) pow(d , m - 1   ) % q , i, p = 0,t = 0,j ;
	
	for(i = 0  ;i  < m ; i++  ){
			p = (  (d*p) +  point[i]) % q;
			t = (  (d*t) +  text[i])  % q;
		}
	
	for(i = 0;  i   <=  g ; i++   ){
	
		if(p  == t  ){
	
			for(j = 0 ; j < m  ; j++)
	
				if(  text[i + j]  !=  point[j]) 
						break;
	
				if ( j == m  )
						return i ;
	
	
			}
	
	t =   ( ( (d * (t - ( text[i])   * h)   ) + (text[i + m])) % q )   + q ;               
	} 
	return 0;
	}

char *my_brk  (const char* s1, const char* s2) {
  		while(*s1){
			if(strchr(s2, *s1  ))
			 return    ( char *)  s1 ;
				s1++;
				}
 return 0;
}

char *my_strch (const char* s1, int  c  ) {
  		char *pnt = NULL ;
		while(*s1++){
		  if(  *s1 ==  (char) c   ) {
				pnt = s1;
			}
		}
 return (char *) pnt;
}

size_t   _strspn(const char* s1, const char* s2) {
   const char* p, *t = s1;
   do {	
        for( p = s2  ; *p == *s1 && *p != '\0'; 	*p++   	 );
        	if(! *p){
			 return s1 - t;
			}
    } while(*s1++  );
   return 0u;
}


int my_strspn(char * s1, char * s2)
{
    int r = 0;
    for ( ;*s1 && *s2 && *(s1++) == *(s2++) ; r++  ) ;
    return r;
} 


size_t   _strcspn(const char* s1, const char* s2) { 
   const char *p, *t = s1;
  
   do {
        for(p = s2; *p != *s1 &&     p  != '\0';  );
  
        if( *p)
  
           return s1 - t;
  
   		} while(*s1++  != '\0');
  	
	  
	   return 0u;
}
 
 int my_strcspn(const char *s1, const  char *s2){
	int x = 0 , y = 0 ;
   
   do{  
		for( y = 0 ; s2[y] ; y++ 	)
				if(  s1[x] ==  s2[y] ){
						return x;
			}
		}
	while(s1[x++] ); 
	
			return 0  ;
	}

char *my_strchr(const char *s1, int c  ){
		while( *++s1 != c     )
          if(*s1 == '\0'   )	{
          	return 0;
		  }
return 	( char) *s1;
}

