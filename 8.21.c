#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 18

int main(void){
	int x = 0;
	setlocale(LC_ALL, "Rus");
	char *city[MAX] = {"Москва"  ,"Волгоград","Самара" , "Вологда",
					"Сочи","Якутск","Новгород","Королёв", 
					"Тула","Киров","Новосибирск","Калиниград", 
					"Липецк","Тверь","Екатеринбург", "Алмата" , "Севастопль" ,"Санкт-Питербург"
				}; 
	void qs(char *mas[],int p , int r ) ;
	qs( city,0,  MAX - 1 );
	while( x  < MAX   ){
	printf("%d \t%s\n",   x + 1, city[x]  );
	x++;
	}
return 0;
}

void  qs(char *mas[],int p , int r ) {
	int part(char *mas[],int p , int r );
	int q;
	if (p    <= r  ) {
		q = part(mas, p  , r );
		qs(mas, p , q - 1 );
	qs(mas, q + 1 , r) ;
	}
}

int part(  char *mas[],int p , int r ) {
	void swap (  char *x , char *y ) ;
	char *x = mas[r];
	int	i = p - 1, j = p;

	while( j <  r   ) {
		if(  strcmp ( mas[j] ,x )  == -1  ) {
			++i;
			swap((char *)  &mas[i ],(char *) &mas[j]);
		}
		j++;
	}


	swap((char *) &mas[i + 1],(char *) &mas[r]);
return i + 1;
}

void swap ( char *x , char *y  ) {  /* обмен чаров   */
	char buf;
	buf = *x ;
	*x = *y;
	*y = buf;
}
