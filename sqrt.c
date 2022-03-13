
#include<stdio.h>
#include <math.h> // needed for sqrt()
//gcc sqrt.c -o sqrt -lm               for compling with math library
float squareRoot(float number)
{
// sqrt() calculates the square root of its argument
    // double* p = new double;  
    // *p = sqrt(number);
    if(number < 0)return 0;

    float getSqrt;
    float *p;
    getSqrt  =  sqrt(number);
    p = &getSqrt;
    
    printf("Square root of %f is %f",number,*p);
    

    return 1;
}
int main()
{
    float num;
    printf("Enter Number to find Square Root : " );
    scanf("%f", &num);
    int result;
    if (num < 0)
    {
        printf("It is not possible to calculate the square root of a negative number\n");
    }
    else
    {
        result = squareRoot(num);
    }
    
    return 0;
}
