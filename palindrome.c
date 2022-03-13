
#include<stdio.h>
#include<stdio.h>
#include <ctype.h>
#include<string.h>

void removeSpaces(char text[100],char newText[100])
{
  int newTextIndex = 0;
  int storeIndex[20];
  
  int i = 0;
  int arrIndex = 0;
  while(text[i] != '\0')
  {
     if(!isalpha(text[i]))         // it means this is special character
     {
       storeIndex[arrIndex] = i;
       arrIndex += 1;
     }


    i++;
  }

  i = 0;
  int skip = 0;
  while(text[i] != '\0')
  {
    for(int j = 0; j < arrIndex; j++)
    {
      if (i == storeIndex[j])
      {  skip = 1;
        break;
      }
      else skip = 0;

    }
    if(skip == 0)
    {
        char g = text[i];
	    newText[newTextIndex] = g;
      newTextIndex += 1;


    }
    i++;

  }
  

}

int palindrome(char text[100])
{

 
  
  int begin, middle, end, length = 0;


  while (text[length] != '\0')
  {
    length++;

  }

  end = length - 1;
  middle = length/2;

  for (begin = 0; begin < middle; begin++)
  {
    
    if (text[begin] != text[end] && (tolower(text[begin]) != tolower(text[end])) ) // ignoring lower and upper case
    {
      return 0;      // false
    }
    end--;
  }
  if (begin == middle)
    return 1;         // true
}
int main()
{
  int run = 1;

  do
  {

  
    char text[100] = "";

  printf("\nEnter a Senetence : %s", text);
  scanf(" %[^\n]s", text) ;
  
  // char c = '!';
  // printf("check alpha %d",isalpha(c) ) ;
  char newText[100];
  removeSpaces(text, newText);            // saving in this new text
  // printf("\n %s", newText);
  if(palindrome(newText) == 0)
  {
    printf("\n This Sentence is not a palindrome.\n");
  }
  else
  {
    printf("\n This sentence is a palindrome.\n");
    
  }
 printf("\n Do you want to enter another sentence (0 for no, 1 for yes)?  \n" );
 scanf(" %d", &run); 

}while(run != 0);
  
  
return 0;

}
