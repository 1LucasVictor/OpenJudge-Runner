#include<stdio.h>
int main(){
  char S[10];
  char T[11];
  int i;
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;i<10;i++){
    
    if(S[i]=='\0'){
      if((T[i+1]=='\0')&&(T[i]!='\0')){
        printf("Yes");
      }else{
        printf("No");
      }
      return 0;
    }
    if(S[i]!=T[i]){
      printf("No");
        return 0;
    }
  }
  return 0;
}