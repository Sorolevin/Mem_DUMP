#include <stdio.h>

#include <stdlib.h>

#include <math.h> 
int multiple( int a, int b ); // 'multiple' function prototype

float fsquare (float c); // square function for decimal numbers

int isquare (int d); // square function for integer numbers 

int main(void)

{

    int x, y, z;  // two integers x and y and z = (y modulo x)

    // float p,q; // decimal numbers

    int m; // number of times calculation loop should run

    int i; // loop counter

    printf (" EEL 2880 Spring 2015: Problem 5.7 -5.14: Functions: Subbarao/Deitel 02 05 2015 \a\n");

    printf (" Finding if a number b is a multiple of another number a, or not \a \n"); 
    printf( "%s", " \a Enter calculation loop vriable m:  " );

                       scanf( "%d", &m);

    for ( i = 1; i <= m; ++i )

         {

    printf( "%s", "Enter two integers x and y \a\t" );

                  scanf("%d %d", &x,&y);

     // determine if second is multiple of first

        z = ( multiple( x, y )); 

          printf (" \a  z value is %d: \t",  z );

      // printf (" \a isquare ( 7 )= %d and fsquare ( 10.2 ) = %f:\t\n ", isquare(7 ), fsquare(10.2) ); 

     // if ( multiple( x, y ) )

        if (z)

            {

             printf( " \a %d is a multiple of %d\n\n", y, x );

            } // end if 

        else

            {

          printf( "%d \a is not a multiple of %d\n\n", y, x );

            } // end else 

        } // end for

           printf (" \a\n isquare ( 7 )= %d and fsquare ( 10.2 ) = %.2f:\t\n ", isquare(7 ), fsquare(10.2) );

           printf (" \a\nisquare ( 10.2 )= %d and fsquare ( 7 ) = %.2f:\t\n ", isquare(10.2 ), fsquare( 7 ) );

         printf (" \a\n fsquare (fsquare( 10.2 )) = %.2f and  isquare (isquare ( 7 )) = %d:\t\n ", fsquare (fsquare( 10.2 )), isquare (isquare ( 7 )) );

} // end main 

   // function multiple determines if b is multiple of a 

    int multiple( int a, int b ) // multiple function

        {

            return !( b % a ); // ( not b modulo a)

        } // end function multiple

    int isquare (int d) // integer isquare function

        {

          return (d*d);

        }

  float fsquare (float c) // float fsquare function

        {

         return (c*c);

        }
