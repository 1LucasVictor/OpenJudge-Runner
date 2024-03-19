#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1000000




int main(void){
char s[BUFSIZE];
scanf("%s",s);

for(int i = 0 ;i < strlen(s)-1;i++){
  if(s[i] == s[i+1]){
    printf("Yes");
    exit(0);
  }
}
printf("No");

return 0;



}
