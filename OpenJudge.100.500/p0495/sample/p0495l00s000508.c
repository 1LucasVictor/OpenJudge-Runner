#include<stdio.h>
int main() {
 char s[3];
 int counta=0,countb=0;
  for(int i=0;i<3;i++){
    scanf("%c",&s[i]);
    if(s[i]=='A'){
      counta++;
    }else if(s[i]=='B'){
      countb++;
    }
  }
  
  if((counta==3)||(countb==3)){
  	printf("No");
  }else{
  	printf("Yes");
  }
  
  return 0;
}