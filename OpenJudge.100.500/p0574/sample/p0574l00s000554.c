#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char s[5];
scanf("%s",s);
if(s[0]==s[1]||s[0]==s[2]||s[0]==s[3]||s[1]==s[2]||s[1]==s[3]||s[2]==s[3]){printf("Bad");}
else{printf("Good");}
return 0;
}