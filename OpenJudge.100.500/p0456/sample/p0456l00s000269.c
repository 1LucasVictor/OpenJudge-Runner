#include<stdio.h>
#include<string.h>
int main(void)
{
    char S[200001],T[200001];
    int i,d=0;
  
    scanf("%s",S);
    scanf("%s",T);
  
    for(i=0;i<strlen(S);i++)
      if(S[i]!=T[i]) d++;
  
    printf("%d\n",d);
  
    return 0;
}
      