#include<stdio.h>
#include<string.h>
int main (void){
 char S[2*10*10*10*10*10];
 char T[2*10*10*10*10*10];
 int len;
 int i,j;
 j=0;
 scanf("%s",S);
 scanf("%s",T);
len = strlen(S);
for(i = 0;i <= len;i++){
     if(S[i] != T[i]){
         j++;
     }
     
}
     printf("%d",j);
}
 