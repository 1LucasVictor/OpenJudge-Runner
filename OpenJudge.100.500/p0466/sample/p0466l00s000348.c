#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int i,flag=0;
  char S[10],T[11];
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;i<10;i++){
    if(S[i]==T[i]){
      flag=1;
    }
  }if(flag==0){
	printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}