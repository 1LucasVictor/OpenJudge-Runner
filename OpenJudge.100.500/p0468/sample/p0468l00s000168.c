#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void){
    char *p;
    p=malloc(sizeof(char )*4);
scanf("%s",p);
if(strcmp(p,"ABC")==0)
printf("ARC\n");
else
printf("ABC\n");
return 0;
}