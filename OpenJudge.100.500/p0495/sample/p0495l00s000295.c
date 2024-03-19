#include<stdio.h>
int main() {
 char s[3];
 int count=0;
  for(int i=0;i<3;i++){
    scanf("%c",&s[i]);
    if((s[i]=='A')||(s[i]=='B')){
      count++;
    }
  }
  
  if(count==3){
  	printf("Yes");
  }else{
  	printf("No");
  }
  
  return 0;
}