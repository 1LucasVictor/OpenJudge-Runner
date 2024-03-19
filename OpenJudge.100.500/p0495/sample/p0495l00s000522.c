#include<stdio.h>

int main(void){

char s[3];

scanf("%s",&s);

if(s[0]!=s[1]||s[1]!=s[2]||s[2]!=s[0]){
printf("Yes");
}else{
printf("No");
}

return 0;
}
