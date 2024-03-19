#include<stdio.h>

int main(){
  int s[3]={};
  scanf("%d%d%d",&s[0],&s[1],&s[2]);
  
  int cnt=0;
  int i=0;
  for(i=0;i<3;i++){
    if(s[i]==0){
      cnt++;
    }
  }
  printf("%d",cnt);
  
  return 0;
}