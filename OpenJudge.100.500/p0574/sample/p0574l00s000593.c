#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){

char s[4];
int i,j;
scanf("%s",s);
for(i=0;i<3;i++){
  if(s[i]==s[i+1]){
    printf("Bad");
    return 0;
  }
}
printf("Good");
return 0;

}
