/*CS50 Code for Caesar Cipher
by Vrishabh Alva*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc,string argv[])
{   
    string line;string x;int c=0;
    
    x = argv[1];
    
    if(argc != 2)
    {
        printf("Invalid Input ! \n");
        return 1;
    }
    else
    {
        int k=atoi(x)%26;
        
        if(k==0)
        {
            printf("Invalid Input !Pleae Enter the Character Shift ! \n");
            return 1;
        }
        
        line=GetString();
        
        for(int i=0,n=strlen(line);i<n;i++)
        {
            if(isupper(line[i]))
            {
                c=( ( ( int)line[i] - 65 + k ) %26 ) + 65;
                printf("%c",(char)c);
             }
            else if(islower(line[i]))
            {
                c=( ( (int)line[i] - 97 + k ) % 26 ) + 97;
                printf("%c",(char)c);
            }
            else
                printf("%c",line[i]);
        }
        printf("\n");
        return 0;
    }
}
