#include<stdio.h>
int main(void)
{
    char S[3];
    scanf("%s",S);
   if((S[0]>=65&&S[0]<=90)&&(S[1]>=65&&
      S[1]<=90)&&(S[2]>=65&&S[2]<=90)&&(S[3]>=65&&S[3]<=90))
   {
       if((S[0]==S[1]&&S[2]==S[3])||(S[0]==S[2]&&S[1]==S[3])
||(S[0]==S[3]&&S[1]==S[2]))
                printf("Yes\n");
       else
                  printf("No\n");

   }


    return 0;
}
