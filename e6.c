#include<stdio.h>
void printArrayBackwards(int arguments[5], int size )
{
// code
    for(int i = size-1; i >= 0; i--)
    {
        printf("reverse : %d\n",*(arguments + i) );
    }



}
int main()
{
    int arr[5], i;
    for (i =  0  ; i <  5  ; i++)
    {
        printf( "Enter a number: " );
        scanf("%d" , &arr[i]);
    }
    printArrayBackwards(arr,  5 );
    return  0  ;
}