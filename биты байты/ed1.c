#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};


int main()
{    
    union floatingPoint test1, test2, test3;
    
    printf("Enter a float: ");
    scanf("%f", &test1.f);
    fflush(stdin);
    
    printf("Enter a double: ");
    scanf("%lf", &test2.d);
    fflush(stdin);
        
    printf("Enter a long double: ");
    scanf("&le", &test3.x);
    fflush(stdin);

    
    printf("\n\ntest1.f as a float: %f\n", test1.f);     
    printf("test1.f as a double: %lf\n", test1.f);    
    printf("test1.f as a long double: %lf\n", test1.f);
        
    printf("\n\ntest2.d as a float: %f\n", test2.d);     
    printf("test2.d as a double: %lf\n", test2.d);    
    printf("test2.d as a long double: %lf\n", test2.d);
     
    printf("\n\ntest3.x as a float: %f\n", test3.x);     
    printf("test3.x as a double: %lf\n", test3.x);    
    printf("test3.x as a long double: %lf\n", test3.x);
    
 
    return 0;
}

