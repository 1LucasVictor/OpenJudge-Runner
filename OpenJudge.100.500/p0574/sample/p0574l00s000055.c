#include<stdio.h>

int main(void)
{
    char s[5];
    scanf("%s", s);
    
    for(char c = 0; c < 3; c++)
    {
        if(s[c] == s[c + 1])
        {
            printf("Bad");
            return 0;
        }
   }
   
   printf("Good");
   return 0;
}
