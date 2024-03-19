#include<stdio.h>
#include<string.h>


int main(){
int i,j;
char str[21];
char temp[21];

scanf("%s",str);
strcpy(temp,str);

for(i=0;temp[i]!='\0';i++);

for(j=0;j<i;j++){str[j]=temp[i-j-1];}

printf("%s",str);

return 0;
}