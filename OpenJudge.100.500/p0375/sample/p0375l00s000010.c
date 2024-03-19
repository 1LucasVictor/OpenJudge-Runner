#include <stdio.h>#include <string.h>
int main(void){int n;scanf("%d",&n);for(int i=1;i<=n;i++){char s[9];char *a;snprintf(s,10,"%d",i);a=strchr(s,(int)'3');if(i%3==0||a!=NULL){printf(" %d",i);}}printf("\n");}

