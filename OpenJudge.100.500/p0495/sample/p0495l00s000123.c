#include<stdio.h>

int main(){
	char* s[10];
  for(int a=0;a<3;a++){
	scanf("%c",&s[a]);
  }
  if(s[0] == s[1] && s[1] == s[2]){
  printf("No");
  }else{
  printf("Yes");
  }
	return 0;
}