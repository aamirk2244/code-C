#include<stdio.h>

void findFrequent(int *arr,int size)
{
    // userInput = 29
    //    {5, 2, 29, 1, 29, 9, 4};

    int countOfNumber = 0;
    int frequentNumber = 0;
    int maxCount =0 ;
    int numberOfMaxCount= 0;

    int counted[100];
    int k = 0;
    printf(" ______________ Printing the array ________________ \n");
    for(int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n__________________________ \n");
    
    for(int i = 0; i < size; i++)
    {
        countOfNumber = 0;

        for(int j = 0 ; j < size ; j++)
        {
            if(arr[i] == arr[j])
            {
                countOfNumber++;
            }
           
                
        }

        if(countOfNumber > maxCount)
        {
            maxCount = countOfNumber;
            frequentNumber = arr[i];
            
        }

        
        
    
    }
    printf("The number %d occurs the most times, a total of %d times",frequentNumber,maxCount);

}

int main()
{
    printf("Please Enter number between 0 and 1000(max 100 numbers). End with negative number\n");
    int input = 0;
    int totaNumber = 0;
    int arr[100];

    while(totaNumber < 100)
    {
        printf("Number: ");
        scanf(" %d",&input);
        if(input >= 1000)continue;     //ignore this

        if(input < 0)        // break the loop
            break;
        
        arr[totaNumber] = input;
        totaNumber++;
    }

    int size = sizeof(arr)/sizeof(int);
    findFrequent(arr, totaNumber);


}