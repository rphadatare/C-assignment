// Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 2)

#include<stdio.h>
#include<string.h>

int Check_Distance(char Str[5][20],char W1[20],char W2[20])
{
    int i = 0, j = 0, pos1 = 0,pos2 = 0, Distance = 0; 

    for(i = 0 ; i < 5 ; i++)
    {
        if(strcmp(Str[i],W1)==0)
        {
            pos1 = i + 1 ;
        }
        else if(strcmp(Str[i],W2)==0)
        {
            pos2 = i; 
        }
    }

    Distance = pos2 - pos1;
    printf("Distance between two words\n%d",Distance);
}

int main()
{
    char str[5][20];
    int i = 0,Ret = 0;
    char word1[20],word2[20];

    printf("Enter words\n");
    for(i = 0; i < 5 ; i++)
    {
        gets(str[i]);
    }

    printf("Enter words to check distance\n");
    gets(word1);
    gets(word2);

    Check_Distance(str,word1,word2);

    return 0;
}