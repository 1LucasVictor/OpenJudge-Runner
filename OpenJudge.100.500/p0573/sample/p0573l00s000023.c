#include<stdio.h>
#include<string.h>

int main(void){
	int cnt = 0;
  	char s[10];
	
  	rewind(stdin);
	scanf("%s",s);
  
  if(s[0]==s[1]){
  	cnt++;
  }
    if(s[0]==s[2]){
  	cnt++;
  }
    if(s[0]==s[3]){
  	cnt++;
  }
    if(s[1]==s[2]){
  	cnt++;
  }
    if(s[1]==s[3]){
  	cnt++;
  }
    if(s[2]==s[3]){
  	cnt++;
  }
  
  if(cnt == 2){
   printf("Yes");
  }else{
   printf("No");
  }
  
  return 0;

}
