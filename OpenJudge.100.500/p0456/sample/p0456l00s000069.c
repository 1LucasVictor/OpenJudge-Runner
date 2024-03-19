#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int
int main()
{
   char S[200002]={'\0'};
   char T[200002]={'\0'};

   scanf("%s %s",&S,&T);

    int count = 0;
   for (int i = 0 ; i<strlen(S);i++)
   {
   	if (S[i]!=T[i])count++;
   }


   printf("%d",count);

    return 0;
}
