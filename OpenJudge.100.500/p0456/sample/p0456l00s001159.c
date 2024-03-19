#include<stdio.h>
#include<string.h>

int main()
{
    char S[200002],T[200002];
    int i,j=0,l;

    scanf("%s",S);
    scanf("%s",T);

    l = strlen(S);

    for(i=0;i<l;i++){
        if(S[i] != T[i]){
            j++;
        }
    }

    printf("%d\n",j);

  return 0;
}
