#include <stdio.h>
#include<string.h>

int main(void){

char c[40];
int a;

scanf("%s",&c);

for(a=strlen(c)-1; a>= 0;a--){
printf("%c",c[a]);
}
printf("\n");
return 0;
}