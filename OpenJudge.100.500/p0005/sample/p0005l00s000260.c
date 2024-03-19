#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char str[22];
char t[25];
int i,j,k;

scanf("%s",str);

k=strlen(str);

for(i=k-1,j=0;i>=0;i--,j++){
t[j]=str[i];
}
t[j]='\0';

printf("%s\n",t);
return 0;
}