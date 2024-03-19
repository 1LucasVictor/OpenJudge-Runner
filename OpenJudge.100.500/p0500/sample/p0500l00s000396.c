#include <stdio.h>
 
int main(){
  int N, M;
  int s[5], c[5];
  int num[3]={-1,-1,-1};
  scanf("%d %d", &N, &M);
  for(int i=0; i<M; i++){
    scanf("%d %d", &s[i], &c[i]);
  }
  
  for(int i=0; i<M; i++){
    if(s[i]==1&&c[i]==0&&N!=1){
      printf("-1");
      return 0;
    }
    if((N-s[i])>=0){
      if(num[(2-N)+s[i]]==(-1)){
        num[(2-N)+s[i]] = c[i];
      }else{
        if(num[(2-N)+s[i]]!=c[i]){
          printf("-1");
          return 0;
        }
      }
    }else{
      printf("-1");
      return 0;
    }
  }
 
  if(N==3){
    if(num[0]==(-1)){
      printf("1");
    }else{
      printf("%d", num[0]);
    }
    if(num[1]==(-1)){
      printf("0");
    }else{
      printf("%d", num[1]);
    }
    if(num[2]==(-1)){
      printf("0");
    }else{
      printf("%d", num[2]);
    }
  }else if(N==2){
    if(num[1]==(-1)){
      printf("1");
    }else{
      printf("%d", num[1]);
    }
    if(num[2]==(-1)){
      printf("0");
    }else{
      printf("%d", num[2]);
    }
  }else if(N==1){
    if(num[2]==(-1)){
      printf("0");
    }else{
      printf("%d", num[2]);
    }
  }
  return 0;
}