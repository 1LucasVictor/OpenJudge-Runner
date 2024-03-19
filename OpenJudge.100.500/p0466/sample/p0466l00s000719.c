#include<stdio.h>
#include<string.h>

int main()
{
    char S[11],T[12];
    int i,j;

    scanf("%s %s",&S,&T);

    for(i=0;i<strlen(S);i++){

    if(S[i]!=T[i]){

          printf("No\n");
          return 0;


        }
    }

           printf("Yes\n");


    return 0;
}
