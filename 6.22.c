#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

void minimum( const int [][ EXAMS ], int, int );
void maximum( const int [][ EXAMS ], int, int );
void average( const int [][EXAMS], int , int );
void printArray( const int [][ EXAMS ], int, int );

int main(void)
{
  
   const int studentGrades[ STUDENTS ][ EXAMS ] =  
      { { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } };
    void  (*f[4])(const int[ ][EXAMS] ,int, int ) = { minimum,  maximum  ,  average , printArray  };
   
   
  int choice ;
   	
	 



	while(choice !=  EOF ){
   
   printf("select: -1_exit\nselect:  0_minimum\nselect:  1_maximum\nselect:  2_average\nselect:  3_print_array\n");
   
   
   
   
   
   
   
  printf("enter action:");  scanf("%d" , &choice  );


   if(choice >= 0  && choice <= 3     ){
	(*f[choice])(studentGrades ,STUDENTS ,EXAMS)     ;
	puts(" ");	puts(" ");
}	else if (choice != -1 ) {
	puts("erorr");
}

   

   
   
   	}
   
   return 0;
}


void minimum( const int grades[][ EXAMS ],   int pupils, int tests ) {
   int i, j, lowGrade = 100;

   for ( i = 0; i <= pupils - 1; i++ ){
		for ( j = 0; j <= tests - 1; j++ ){
			if ( grades[ i ][ j ] < lowGrade ){
		 		lowGrade = grades[ i ][ j ];
		}
	}
}
   printf("low grade  %d" , lowGrade);
}


void maximum( const int grades[][ EXAMS ],  int pupils, int tests )
{
   int i, j, highGrade = 0;

   for ( i = 0; i <= pupils - 1; i++ ){
   		 for ( j = 0; j <= tests - 1; j++ ){

         if ( grades[ i ][ j ] > highGrade ){
    		highGrade = grades[ i ][ j ];
	       	
		}
	  }
	}
   printf("max grade  %d", highGrade);
}


void average( const int setOfGrades[][EXAMS], int pupils, int tests  )
{
   int y ,i, total = 0;

for(y = 0; y <= pupils - 1; y++){
	for ( i = 0; i <= tests - 1; i++ ){
		total += setOfGrades[y][ i ];
	  }
printf("The average grade for student %d is %.2f\n",    y ,  ( double ) total / tests);
total = 0;
}
}


void printArray( const int grades[][ EXAMS ],  int pupils, int tests )
{
   int i, j;

   printf( "                [0]  [1]  [2]  [3]" );

   for ( i = 0; i <= pupils - 1; i++ ) {
      printf( "\nstudentGrades[%d] ", i );

      for ( j = 0; j <= tests - 1; j++ )
         printf( "%-5d", grades[ i ][ j ] );
   }
}
