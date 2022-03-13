
#include<stdio.h>

char* isValidSentece(char sent[100])
{
    int i = 0;
    int countWords = 1;
    char space = ' ';
    char *point;
    while(sent[i] != '\0')
    {
        if(sent[i] == space)                   // if 
        {
            countWords++;
        }
        if(countWords == 3)           
        {
            point = sent + i;           // pointing to that word , so that we can print onwards
            return point;
        }
        i++;
    }
    return NULL;            // if words less than 3
}
void sentenceFinder(char input[100])
{
    char* getPoint = isValidSentece(input);
    if(getPoint == NULL)
    {
        printf("The sentence is too short\n");
        return;
    }
    else
    {
        
        printf(" %s\n",getPoint);

    }

}
int main()
{
    char input[100] = "";
    printf("Enter a Senetece : ");
  scanf(" %[^\n]s", input) ;
  sentenceFinder(input);
    return 0;
}
