#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long

int main()
{
   char S[100001]={'\0'};
   scanf("%s",S);
     int x0=0;
     int x1=0;
    for (int i = 0;i<strlen(S);i++)
     {
        if (S[i]=='0')
            x0++;
        else x1++;

     }
     int min = 0;
     if (x0>x1)min=x1;
     else min=x0;
     printf("%d",min*2);



    return 0;
}
